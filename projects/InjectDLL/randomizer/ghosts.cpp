#include <Common/ext.h>
#include <Il2CppModLoader/app/methods/GenericPuppet.h>
#include <Il2CppModLoader/app/methods/GhostCharacterAbilitiesPlugin.h>
#include <Il2CppModLoader/app/methods/GhostCharacterPlugin.h>
#include <Il2CppModLoader/app/methods/GhostFrame.h>
#include <Il2CppModLoader/app/methods/GhostGenericEventsPlugin.h>
#include <Il2CppModLoader/app/methods/GhostManager.h>
#include <Il2CppModLoader/app/methods/GhostPlayer.h>
#include <Il2CppModLoader/app/methods/GhostRecorder.h>
#include <Il2CppModLoader/app/methods/GhostRecorderData.h>
#include <Il2CppModLoader/app/methods/GhostStateMachinePlugin.h>
#include <Il2CppModLoader/app/methods/InstantiateUtility.h>
#include <Il2CppModLoader/app/methods/Moon/SuspensionManager.h>
#include <Il2CppModLoader/app/methods/OriGhostRigVisuals_GhostVisualSettings.h>
#include <Il2CppModLoader/app/methods/RaceSystem.h>
#include <Il2CppModLoader/app/methods/System/IO/BinaryReader.h>
#include <Il2CppModLoader/app/methods/System/IO/BinaryWriter.h>
#include <Il2CppModLoader/app/methods/System/IO/MemoryStream.h>
#include <Il2CppModLoader/app/methods/System/String.h>
#include <Il2CppModLoader/app/methods/UnityEngine/GameObject.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Material.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Renderer.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <constants.h>
#include <game/game.h>
#include <game/player.h>
#include <ghosts/plugins.h>
#include <randomizer/text_style.h>

#include "ghosts.h"

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <macros.h>
#include <utils/misc.h>

#include <utils/byte_stream.h>
#include <sstream>
#include <string>
#include <utility>

using namespace app::methods;
using namespace app::methods::System::IO;

namespace ghosts {
    constexpr int GHOST_RECORDER_DATA_VERSION = 8;
    constexpr float MAX_GHOST_EXTRAPOLATION_TIME = 0.3f;
    constexpr std::wstring_view RANDO_GHOST_TAG = L"##RANDO_GHOST##";

    bool intercept_ghost_player_on_enable = false;
    RandoGhost* currently_processing_frame_ghost = nullptr;

    IL2CPP_INTERCEPT(GhostPlayer, void, OnEnable, (app::GhostPlayer * this_ptr)) {
        if (intercept_ghost_player_on_enable) {
            this_ptr->fields.m_oriRig = nullptr;
            this_ptr->fields.OriRig = game::player::sein()->fields.OriRig;
        }

        next::GhostPlayer::OnEnable(this_ptr);
    }

    IL2CPP_INTERCEPT(GhostPlayer, void, FixedUpdate, (app::GhostPlayer * this_ptr)) {
        // NOOP
        // We call it by ourselves to process multiple incoming frames in one game frame

        // We want to process all other ghosts though...
        if (!RaceSystem::get_IsIdle() && System::String::op_Inequality(this_ptr->fields.GhostRecordingFilePath, il2cpp::string_new(RANDO_GHOST_TAG))) {
            next::GhostPlayer::FixedUpdate(this_ptr);
        }
    }

    bool disable_generic_puppet_animation_handlers = false;

    IL2CPP_INTERCEPT(GenericPuppet, void, StartAnimationById, (app::GenericPuppet * this_ptr, int32_t resource_id, int32_t array_index, int32_t priority)) {
        if (disable_generic_puppet_animation_handlers) {
            next::GenericPuppet::StartAnimationById(this_ptr, resource_id, array_index, priority);
            return;
        }

        if (currently_processing_frame_ghost != nullptr) {
            auto puppet_id = il2cpp::invoke<app::Int32__Boxed>(this_ptr, "get_Id")->fields;
            currently_processing_frame_ghost->active_animations[puppet_id][resource_id] = RandoGhost::ActiveAnimation{
                resource_id,
                array_index,
                priority,
            };

            if (currently_processing_frame_ghost->preventing_tpose) {
                modloader::ScopedSetter setter(disable_generic_puppet_animation_handlers, true);
                GenericPuppet::EndAnimationById(this_ptr, 6, -1);
                currently_processing_frame_ghost->preventing_tpose = false;
            }
        }

        next::GenericPuppet::StartAnimationById(this_ptr, resource_id, array_index, priority);
    }

    IL2CPP_INTERCEPT(GenericPuppet, void, EndAnimationById, (app::GenericPuppet * this_ptr, int32_t resource_id, int32_t array_index)) {
        next::GenericPuppet::EndAnimationById(this_ptr, resource_id, array_index);

        if (currently_processing_frame_ghost != nullptr) {
            if (disable_generic_puppet_animation_handlers) {
                return;
            }

            auto puppet_id = il2cpp::invoke<app::Int32__Boxed>(this_ptr, "get_Id")->fields;
            currently_processing_frame_ghost->active_animations[puppet_id].erase(resource_id);

            if (this_ptr->fields.m_activeAnimations->fields._size == 0) {
                modloader::ScopedSetter setter(disable_generic_puppet_animation_handlers, true);
                GenericPuppet::StartAnimationById(this_ptr, 6, -1, 0);
                currently_processing_frame_ghost->preventing_tpose = true;
            }
        }
    }

    bool RandoGhost::initialize() {
        modloader::ScopedSetter setter(intercept_ghost_player_on_enable, true);

        auto ghost_manager = il2cpp::get_class<app::GhostManager__Class>("", "GhostManager")->static_fields->instance;

        if (!il2cpp::unity::is_valid(ghost_manager)) {
            return false;
        }

        auto ghost_go = il2cpp::unity::instantiate_object(ghost_manager->fields.GhostPrefab);
        this->ghost_player = il2cpp::unity::get_component<app::GhostPlayer>(ghost_go, "", "GhostPlayer");

        UnityEngine::GameObject::set_tag(ghost_go, il2cpp::string_new(RANDO_GHOST_TAG));

        auto ghost_recorder_data = il2cpp::create_object<app::GhostRecorderData>("", "GhostRecorderData");
        GhostRecorderData::ctor(ghost_recorder_data);
        this->ghost_player->fields.GhostRecorderData = ghost_recorder_data;

        // Register plugins
        auto const character_plugin = il2cpp::create_object<app::GhostCharacterPlugin>("", "GhostCharacterPlugin");
        auto const character_abilities_plugin = il2cpp::create_object<app::GhostCharacterAbilitiesPlugin>("", "GhostCharacterAbilitiesPlugin");
        auto const state_machine_plugin = il2cpp::create_object<app::GhostStateMachinePlugin>("", "GhostStateMachinePlugin");
        auto const generic_events_plugin = il2cpp::create_object<app::GhostGenericEventsPlugin>("", "GhostGenericEventsPlugin");

        GhostCharacterPlugin::ctor(character_plugin);
        GhostCharacterAbilitiesPlugin::ctor(character_abilities_plugin);
        GhostStateMachinePlugin::ctor(state_machine_plugin);
        GhostGenericEventsPlugin::ctor(generic_events_plugin);

        GhostPlayer::RegisterPlugin(this->ghost_player, reinterpret_cast<app::IGhostRecorderPlugin*>(character_plugin));
        GhostPlayer::RegisterPlugin(this->ghost_player, reinterpret_cast<app::IGhostRecorderPlugin*>(character_abilities_plugin));
        GhostPlayer::RegisterPlugin(this->ghost_player, reinterpret_cast<app::IGhostRecorderPlugin*>(state_machine_plugin));
        GhostPlayer::RegisterPlugin(this->ghost_player, reinterpret_cast<app::IGhostRecorderPlugin*>(generic_events_plugin));

        GhostPlayer::InitializePuppetPrefabs(this->ghost_player);

        Moon::SuspensionManager::Unregister(reinterpret_cast<app::ISuspendable*>(this->ghost_player));

        auto ghost_trail = il2cpp::unity::find_child(this->ghost_player, "sharedSingleSnowParticleA");
        il2cpp::unity::set_active(ghost_trail, false);

        auto ori_rig = il2cpp::unity::find_child(this->ghost_player->fields.m_oriRig, std::vector<std::string_view>{ "mirrorHolder", "rigHolder", "oriRig" });
        auto ori_rig_animator = il2cpp::unity::get_component<app::MoonAnimator>(ori_rig, "Moon", "MoonAnimator");

        Moon::SuspensionManager::Unregister(reinterpret_cast<app::ISuspendable*>(ori_rig_animator));

        this->ghost_player->fields.OnFinished = nullptr;

        // The name text box is rotated for some reason...
        il2cpp::unity::set_local_rotation(this->ghost_player->fields.Name, app::Vector3{ 0.f, -90.f, 0.f });
        il2cpp::unity::set_local_position(this->ghost_player->fields.Name, app::Vector3{ 0.f, 1.5f, 0.f });

        this->ghost_go_gchandle = il2cpp::gchandle_new(ghost_go, true);
        this->ghost_player->fields.GhostRecordingFilePath = il2cpp::string_new(RANDO_GHOST_TAG);

        GhostPlayer::SetPosition(this->ghost_player, app::Vector3{ 0.f, 0.f, 0.f });

        return true;
    }

    bool RandoGhost::is_initialized() const {
        return il2cpp::unity::is_valid(this->ghost_player);
    }

    void RandoGhost::set_name(const std::string& name) const {
        std::wstring name_text = convert_string_to_wstring(format("<s_1.5>%s</>", name.c_str()));
        text_style::create_styles(ghost_player->fields.Name, name_text);
        GhostPlayer::SetDisplayName(this->ghost_player, il2cpp::string_new(name_text));
    }

    void RandoGhost::play_frame_data(const std::vector<std::byte>& frame_data) {
        modloader::ScopedSetter setter(currently_processing_frame_ghost, this);

        if (frame_data.empty()) {
            return;
        }

        this->ghost_player->fields.GhostRecorderData->fields.CurrentVersion = 8;
        this->ghost_player->fields.GhostRecorderData->fields.Duration = FLT_MAX;

        utils::ByteStream stream(frame_data);
        plugins::play_rando_ghost_plugins(stream, *this);

        auto data = stream.peek_to_end();
        auto ghost_frame = ghosts::deserialize_frame(data);
        ghost_frame->fields.Time = 0.f;

        if (this->ghost_player->fields.GhostRecorderData->fields.Frames->fields._size == 0) {
            il2cpp::invoke(this->ghost_player->fields.GhostRecorderData->fields.Frames, "Add", ghost_frame);
        } else {
            this->ghost_player->fields.GhostRecorderData->fields.Frames->fields._items->vector[0] = ghost_frame;
        }

        for (int i = 0; i < this->ghost_player->fields.m_plugins->fields._size; ++i) {
            auto item = this->ghost_player->fields.m_plugins->fields._items->vector[i];
            item->fields.NextFrame = ghost_frame;
            item->fields.NextFrameIndex = 0;
            item->fields.NoMoreFrames = false;
        }

        this->ghost_player->fields.CurrentTime = 0.f;
        this->ghost_player->fields.m_isStarted = true;
        this->ghost_player->fields._IsFinished_k__BackingField = false;

        next::GhostPlayer::FixedUpdate(this->ghost_player);

        this->extrapolated_time = 0.f;
    }

    void RandoGhost::set_color(app::Color color) const {
        app::Color color_emissivity{
            std::lerp(color.r, 0.f, .3f),
            std::lerp(color.g, 0.f, .3f),
            std::lerp(color.b, 0.f, .3f),
            .5f,
        };

        app::Color color_trail{
            color.r,
            color.g,
            color.b,
            .05f,
        };

        auto visual_settings = il2cpp::create_object<app::OriGhostRigVisuals_GhostVisualSettings>("", "OriGhostRigVisuals", "GhostVisualSettings");
        OriGhostRigVisuals_GhostVisualSettings::ctor(visual_settings);

        visual_settings->fields.MultiplyLayerColor = utils::uber_shader_color(color);
        visual_settings->fields.EmissivityColor = utils::uber_shader_color(color);
        visual_settings->fields.FirstVignetteColor = utils::uber_shader_color(color);
        visual_settings->fields.SecondVignetteColor = utils::uber_shader_color(color);
        visual_settings->fields.GhostIndicatorColor = utils::uber_shader_color(color);
        visual_settings->fields.ParticleColor = utils::uber_shader_color(color);
        visual_settings->fields.TrailColor = utils::uber_shader_color(color);

        this->ghost_player->fields.VisualSettings = visual_settings;
        GhostPlayer::InitializeVisualize(this->ghost_player, visual_settings);

        auto emissivity_model_go = il2cpp::unity::find_child(
                this->ghost_player->fields.m_oriRig,
                std::vector<std::string_view>{ "mirrorHolder", "rigHolder", "oriRig", "Model_GRP", "body_emissivity_MDL" }
        );
        auto trail_go = il2cpp::unity::find_child(
                this->ghost_player->fields.m_oriRig,
                std::vector<std::string_view>{ "mirrorHolder", "rigHolder", "oriRig", "trails", "trail" }
        );

        auto emissivity_mesh_renderer = il2cpp::unity::get_component<app::SkinnedMeshRenderer>(emissivity_model_go, "UnityEngine", "SkinnedMeshRenderer");
        auto emissivity_material = UnityEngine::Renderer::GetMaterial(reinterpret_cast<app::Renderer*>(emissivity_mesh_renderer));
        UnityEngine::Material::SetColor_1(emissivity_material, il2cpp::string_new("_EmissivityColor"), color_emissivity);

        auto trail_renderer = il2cpp::unity::get_component<app::MeshRenderer>(trail_go, "UnityEngine", "MeshRenderer");
        auto trail_material = UnityEngine::Renderer::GetMaterial(reinterpret_cast<app::Renderer*>(trail_renderer));
        UnityEngine::Material::SetColor_1(trail_material, il2cpp::string_new("_Color"), color_trail);
        UnityEngine::Material::SetColor_1(trail_material, il2cpp::string_new("_EmissivityColor"), color_trail);

        utils::set_color(this->ghost_player->fields.m_oriRig, color, app::UberShaderProperty_Color__Enum::MainColor);
    }

    void RandoGhost::destroy() {
        il2cpp::gchandle_free(this->ghost_go_gchandle);
        il2cpp::unity::destroy_object(il2cpp::unity::get_game_object(this->ghost_player));

        this->ghost_player = nullptr;
        this->ghost_go_gchandle = 0;
    }

    app::Vector2 RandoGhost::get_position() const {
        auto position_3d = GhostPlayer::get_Position(this->ghost_player);
        return app::Vector2{ position_3d.x, position_3d.y };
    }

    void RandoGhost::extrapolate(float delta) {
        if (this->skip_next_extrapolation) {
            this->skip_next_extrapolation = false;
            return;
        }

        if (this->extrapolated_time > MAX_GHOST_EXTRAPOLATION_TIME) {
            return;
        }

        auto character_data = GhostPlayer::get_CurrentGhostCharacterData(this->ghost_player);

        auto& position = character_data->fields.Position;
        position.x += character_data->fields.LocalSpeed.x * delta;
        position.y += character_data->fields.LocalSpeed.y * delta;

        GhostPlayer::SetPosition(this->ghost_player, position);

        this->extrapolated_time += delta;
    }

    IL2CPP_INTERCEPT(GhostRecorder, void, StopRecorder, (app::GhostRecorder * this_ptr)) {
        // Noop
    }

    IL2CPP_INTERCEPT(GhostRecorder, void, InitializeRecorder, (app::GhostRecorder * this_ptr, app::String* output_path)) {
        // Noop
    }

    IL2CPP_INTERCEPT(GhostRecorder, void, Cancel, (app::GhostRecorder * this_ptr)) {
        // Noop
    }

    // They disable pooling when recording for some reason which breaks
    // some enemies.
    IL2CPP_INTERCEPT(InstantiateUtility, bool, get_ShouldUsePooling, ()) {
        return true; // yes pool thanks
    }

    IL2CPP_INTERCEPT(GhostGenericEventsPlugin, void, RecordInstantiate, (app::GhostGenericEventsPlugin * this_ptr, app::GenericPuppet* generic_puppet, int32_t resource_id, app::Vector3 position, app::Quaternion rotation)) {
        // Noop because it's not used in vanilla and breaks weapons
    }

    app::GhostRecorder* create_recorder() {
        auto const ghost_recorder = GhostManager::GetOrCreateRecorder();

        auto const character_plugin = il2cpp::create_object<app::GhostCharacterPlugin>("", "GhostCharacterPlugin");
        auto const character_abilities_plugin = il2cpp::create_object<app::GhostCharacterAbilitiesPlugin>("", "GhostCharacterAbilitiesPlugin");
        auto const state_machine_plugin = il2cpp::create_object<app::GhostStateMachinePlugin>("", "GhostStateMachinePlugin");
        auto const generic_events_plugin = il2cpp::create_object<app::GhostGenericEventsPlugin>("", "GhostGenericEventsPlugin");

        GhostCharacterPlugin::ctor(character_plugin);
        GhostCharacterAbilitiesPlugin::ctor(character_abilities_plugin);
        GhostStateMachinePlugin::ctor(state_machine_plugin);
        GhostGenericEventsPlugin::ctor(generic_events_plugin);

        GhostRecorder::RegisterPlugin(ghost_recorder, reinterpret_cast<app::IGhostRecorderPlugin*>(character_plugin));
        GhostRecorder::RegisterPlugin(ghost_recorder, reinterpret_cast<app::IGhostRecorderPlugin*>(character_abilities_plugin));
        GhostRecorder::RegisterPlugin(ghost_recorder, reinterpret_cast<app::IGhostRecorderPlugin*>(state_machine_plugin));
        GhostRecorder::RegisterPlugin(ghost_recorder, reinterpret_cast<app::IGhostRecorderPlugin*>(generic_events_plugin));

        next::GhostRecorder::InitializeRecorder(ghost_recorder, il2cpp::string_new("C:\\ghost"));
        GhostRecorder::StartRecorder(ghost_recorder);

        MemoryStream::SetLength(ghost_recorder->klass->static_fields->m_stream, 0);
        il2cpp::gchandle_new(ghost_recorder, true);

        return ghost_recorder;
    }

    app::GhostRecorder* ghost_recorder = nullptr;
    std::vector<std::byte> last_frame_data;
    bool last_frame_data_new = false;

    IL2CPP_INTERCEPT(GhostRecorder, void, FinalizeFrame, (app::GhostRecorder * this_ptr)) {
        next::GhostRecorder::FinalizeFrame(this_ptr);

        if (this_ptr == ghost_recorder) {
            BinaryWriter::Flush(this_ptr->fields.m_binaryWriter);
            MemoryStream::Flush(this_ptr->klass->static_fields->m_stream);

            auto stream_buffer = MemoryStream::GetBuffer(this_ptr->klass->static_fields->m_stream);
            auto target_buffer = plugins::record_rando_ghost_plugins(ghost_recorder);

            auto length = MemoryStream::get_Length(this_ptr->klass->static_fields->m_stream);

            for (int i = 0; i < length; ++i) {
                target_buffer.push_back(static_cast<const std::byte>(stream_buffer->vector[i]));
            }

            MemoryStream::SetLength(this_ptr->klass->static_fields->m_stream, 0);

            last_frame_data = target_buffer;
            last_frame_data_new = true;
        }
    }

    bool has_new_frame_data() {
        return last_frame_data_new;
    }

    std::vector<std::byte> get_frame_data() {
        last_frame_data_new = false;
        return last_frame_data;
    }

    /**
     * Currently unused, but I left it here for reference
     * @param frame
     * @return
     */
    std::vector<std::byte> serialize_frame(app::GhostFrame* frame) {
        auto memory_stream = il2cpp::create_object<app::MemoryStream>("System.IO", "MemoryStream");
        MemoryStream::ctor_1(memory_stream);

        auto binary_writer = il2cpp::create_object<app::BinaryWriter>("System.IO", "BinaryWriter");
        BinaryWriter::ctor_2(binary_writer, reinterpret_cast<app::Stream*>(memory_stream));

        GhostFrame::SaveToFile(frame, binary_writer);
        MemoryStream::Flush(memory_stream);

        auto stream_buffer = MemoryStream::GetBuffer(memory_stream);
        auto target_buffer = std::vector<std::byte>();
        auto length = MemoryStream::get_Length(memory_stream);

        for (int i = 0; i < length; ++i) {
            target_buffer.push_back(static_cast<const std::byte>(stream_buffer->vector[i]));
        }

        return target_buffer;
    }

    app::GhostFrame* deserialize_frame(std::vector<std::byte> buffer) {
        auto memory_stream = il2cpp::create_object<app::MemoryStream>("System.IO", "MemoryStream");
        auto byte_array = il2cpp::array_new<app::Byte__Array>(il2cpp::get_class("System", "Byte"), std::move(buffer));

        MemoryStream::ctor_3(memory_stream, byte_array);

        auto binary_reader = il2cpp::create_object<app::BinaryReader>("System.IO", "BinaryReader");
        BinaryReader::ctor_1(binary_reader, reinterpret_cast<app::Stream*>(memory_stream));

        auto frame = il2cpp::create_object<app::GhostFrame>("", "GhostFrame");
        GhostFrame::ctor(frame);

        GhostFrame::LoadFromFile(frame, binary_reader, GHOST_RECORDER_DATA_VERSION);

        return frame;
    }

    void initialize() {
        ghost_recorder = ghosts::create_recorder();
    }

    CALL_ON_INIT(initialize);
} // namespace ghosts

INJECT_C_DLLEXPORT char* get_current_ghost_frame_data(int& size) {
    if (!ghosts::has_new_frame_data()) {
        size = 0;
        return nullptr;
    }

    ghosts::last_frame_data_new = false;
    size = ghosts::last_frame_data.size();

    // modloader::win::console::console_send(format("B %d bytes", size));

    return reinterpret_cast<char*>(ghosts::last_frame_data.data());
}