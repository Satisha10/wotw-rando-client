#include <Randomizer/game/teleport.h>
#include <Randomizer/randomizer.h>

#include <Core/api/faderb.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/enums/game_event.h>
#include <Core/events/task.h>

#include <Common/ext.h>

#include <Modloader/app/methods/ActionSequence.h>
#include <Modloader/app/methods/CameraPivotZone.h>
#include <Modloader/app/methods/CleverMenuItemSelectionManager.h>
#include <Modloader/app/methods/Core/Input_InputButtonProcessor.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/methods/GameplayCamera.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/RunActionOnce.h>
#include <Modloader/app/methods/SaveSlotUI.h>
#include <Modloader/app/methods/SaveSlotsManager.h>
#include <Modloader/app/methods/SaveSlotsUI.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/TitleScreenManager.h>
#include <Modloader/app/methods/WaitAction.h>
#include <Modloader/app/types/ActionSequence.h>
#include <Modloader/app/types/CleverMenuItemSelectionManager.h>
#include <Modloader/app/types/FaderBFadeInAction.h>
#include <Modloader/app/types/GameStateMachine.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/SaveSlotsUI.h>
#include <Modloader/app/types/UI_Cameras.h>
#include <Modloader/app/types/WaitAction.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>


#include "Modloader/windows_api/windows.h"

using namespace modloader;
using namespace app::classes;
using modloader::win::console::console_send;

namespace randomizer::game {
    namespace {
        constexpr int MAX_DISPLAYED_WAITING_FOR_PLAYERS = 8;
        bool handling_start = false;
        bool is_in_lobby = false;
        bool is_starting_game = false;

        std::set<std::string> pending_scenes_to_preload;
        std::set<std::string> scenes_to_preload;

        std::optional<il2cpp::WeakGCRef<app::GameObject>> ui_go_handle;
        std::optional<il2cpp::WeakGCRef<app::ActionSequence>> start_game_sequence_handle;
        std::optional<il2cpp::WeakGCRef<app::CleverMenuItemSelectionManager>> full_game_main_menu_selection_manager_handle;
        std::optional<il2cpp::WeakGCRef<app::ActionSequence>> empty_slot_pressed_action_sequence_handle;
        std::optional<il2cpp::WeakGCRef<app::MessageBox>> easy_mode_text_handle;
        std::optional<il2cpp::WeakGCRef<app::MessageBox>> normal_mode_text_handle;
        std::optional<il2cpp::WeakGCRef<app::MessageBox>> hard_mode_text_handle;
        std::shared_ptr<core::api::messages::MessageBox> lobby_status_text_box;

        void set_full_game_main_menu_selection_manager_active(bool active) {
            if (full_game_main_menu_selection_manager_handle.has_value() && full_game_main_menu_selection_manager_handle->is_valid()) {
                CleverMenuItemSelectionManager::set_IsActive(**full_game_main_menu_selection_manager_handle, active);
                CleverMenuItemSelectionManager::set_IsLocked(**full_game_main_menu_selection_manager_handle, !active);
            }
        }

        void update_lobby_ui() {
            if (is_in_lobby && !is_starting_game) {
                if (lobby_status_text_box == nullptr) {
                    lobby_status_text_box = std::make_shared<core::api::messages::MessageBox>();
                }

                lobby_status_text_box->alignment().set(app::AlignmentMode__Enum::Center);
                lobby_status_text_box->horizontal_anchor().set(app::HorizontalAnchorMode__Enum::Center);
                lobby_status_text_box->vertical_anchor().set(app::VerticalAnchorMode__Enum::Top);
                lobby_status_text_box->position().set(app::Vector3{0.f, 1.5f, 0.f});
                lobby_status_text_box->fade_in().set(false);
                lobby_status_text_box->fade_out().set(false);
                lobby_status_text_box->show_box().set(false);

                std::string text;

                if (!pending_scenes_to_preload.empty()) {
                    text = "<s_1.5>Waiting for spawn area to preload...</>";
                }
                else {
                    text = "<s_1.5>Waiting for players:</>";
                    int displayed_waiting_for_players_count = 0;
                    int total_waiting_for_players_count = 0;

                    if (randomizer::multiplayer_universe().multiverse_info() != nullptr) {
                        auto u = randomizer::multiplayer_universe().multiverse_info();

                        for (const auto& universe: randomizer::multiplayer_universe().multiverse_info()->universes()) {
                            for (const auto& world: universe.worlds()) {
                                for (const auto& player: world.members()) {
                                    if (!player.raceready()) {
                                        if (displayed_waiting_for_players_count < MAX_DISPLAYED_WAITING_FOR_PLAYERS) {
                                            text += std::format("\n{}", player.name());

                                            if (!player.has_connectedmultiverseid()) {
                                                text += " <s_0.8>(not connected)</>";
                                            }

                                            ++displayed_waiting_for_players_count;
                                        }

                                        ++total_waiting_for_players_count;
                                    }
                                }
                            }
                        }
                    }

                    if (total_waiting_for_players_count > displayed_waiting_for_players_count) {
                        text += std::format("\n...and {} more", total_waiting_for_players_count - displayed_waiting_for_players_count);
                    }

                    if (total_waiting_for_players_count == 0) {
                        text = "<s_1.5> </>\n\n";
                    }
                }

                text += "\n\nPress [MenuBack] to leave";

                lobby_status_text_box->show(true, false);
                lobby_status_text_box->text().set(text);
            }
            else if (lobby_status_text_box != nullptr) {
                lobby_status_text_box = nullptr;
            }

            if (ui_go_handle.has_value() && ui_go_handle->is_valid()) {
                il2cpp::unity::set_active(**ui_go_handle, !is_in_lobby && !is_starting_game);
            }

            set_full_game_main_menu_selection_manager_active(!is_in_lobby);
        }

        void start_new_game() {
            if (start_game_sequence_handle.has_value()) {
                auto action = start_game_sequence_handle.value().ref();

                if (il2cpp::unity::is_valid(action)) {
                    is_in_lobby = false;
                    is_starting_game = true;
                    core::api::faderb::fade_in(0.4f);
                    core::events::schedule_task(0.4f, [action]() { ActionSequence::Perform_1(action); });
                    update_lobby_ui();
                }
            }
        }

        void check_if_preloaded_and_report_ready() {
            if (pending_scenes_to_preload.empty()) {
                randomizer::multiplayer_universe().report_player_ready(true);
            }
        }

        void update_difficulty_text_boxes() {
            std::string prepend_to_difficulty = "";

            if (randomizer::multiplayer_universe().should_block_starting_new_game()) {
                prepend_to_difficulty = "JOIN RACE in ";
            }

            if (easy_mode_text_handle.has_value() && **easy_mode_text_handle != nullptr) {
                (**easy_mode_text_handle)->fields.MessageProvider = core::api::system::create_message_provider(std::format("{}EASY MODE", prepend_to_difficulty));
                MessageBox::RefreshText_1(**easy_mode_text_handle);
            }

            if (normal_mode_text_handle.has_value() && **normal_mode_text_handle != nullptr) {
                (**normal_mode_text_handle)->fields.MessageProvider = core::api::system::create_message_provider(std::format("{}NORMAL MODE", prepend_to_difficulty));
                MessageBox::RefreshText_1(**normal_mode_text_handle);
            }

            if (hard_mode_text_handle.has_value() && **hard_mode_text_handle != nullptr) {
                (**hard_mode_text_handle)->fields.MessageProvider = core::api::system::create_message_provider(std::format("{}HARD MODE", prepend_to_difficulty));
                MessageBox::RefreshText_1(**hard_mode_text_handle);
            }
        }

        void on_fixed_update(GameEvent event, EventTiming timing) {
            auto menu_back_input = types::Input_Cmd::get_class()->static_fields->MenuBack;

            if (!il2cpp::unity::is_valid(menu_back_input)) {
                return;
            }

            if (is_in_lobby && Core::Input_InputButtonProcessor::get_OnPressed(menu_back_input)) {
                is_in_lobby = false;
                randomizer::multiplayer_universe().report_player_ready(false);
                update_lobby_ui();
            }
        }

        core::api::uber_states::UberState intro_cutscene(static_cast<UberStateGroup>(21786), 48748);

        // The game calls set_CurrentSlotIndex on startup. We set this variable to true
        // for this to not start preloading too early.
        bool prevent_preload_on_selecting_empty_save = false;

        // region Preload when selecting empty save slot
        app::SaveSlotsUI* get_save_slots_ui() {
            auto save_slots_ui_klass = types::SaveSlotsUI::get_class();
            return save_slots_ui_klass->static_fields->Instance;
        }

        IL2CPP_INTERCEPT(TitleScreenManager, void, SetScreen, (app::TitleScreenManager_Screen__Enum screen)) {
            next::TitleScreenManager::SetScreen(screen);

            if (screen == app::TitleScreenManager_Screen__Enum::SaveSlots) {
                auto save_slots_ui = get_save_slots_ui();
                if (save_slots_ui != nullptr) {
                    auto save_slot_ui = SaveSlotsUI::get_CurrentSaveSlot(save_slots_ui);
                    SaveSlotUI::SetBusy(save_slot_ui, false);
                }
            }
        }

        void on_scene_loading(core::api::scenes::SceneLoadEventMetadata* metadata) {
            if (metadata->state == app::SceneState__Enum::Loaded || metadata->state == app::SceneState__Enum::LoadingCancelled) {
                if (!pending_scenes_to_preload.erase(metadata->scene_name.data())) {
                    return;
                }

                if (pending_scenes_to_preload.empty()) {
                    auto save_slots_ui = get_save_slots_ui();

                    if (save_slots_ui != nullptr) {
                        auto save_slot_ui = SaveSlotsUI::get_CurrentSaveSlot(save_slots_ui);
                        SaveSlotUI::SetBusy(save_slot_ui, false);
                    }

                    // We loaded everything, check if we are ready and waiting...
                    if (is_in_lobby) {
                        check_if_preloaded_and_report_ready();
                    }
                }
            }
        }

        IL2CPP_INTERCEPT(SaveSlotsUI, void, OnEnable, (app::SaveSlotsUI * this_ptr)) {
            ScopedSetter setter(prevent_preload_on_selecting_empty_save, true);
            next::SaveSlotsUI::OnEnable(this_ptr);
        }

        IL2CPP_INTERCEPT(SaveSlotsManager, void, set_CurrentSlotIndex, (int index)) {
            next::SaveSlotsManager::set_CurrentSlotIndex(index);

            if (!prevent_preload_on_selecting_empty_save) {
                auto slot_info = SaveSlotsManager::SlotByIndex(index);

                if (slot_info == nullptr) {
                    console_send(std::format("Selected empty index {}", index));

                    auto save_slots_ui = get_save_slots_ui();

                    if (save_slots_ui != nullptr) {
                        auto save_slot_ui = SaveSlotsUI::get_CurrentSaveSlot(save_slots_ui);

                        auto scene_names = core::api::scenes::get_scenes_at_position(math::convert(game_seed().parser_output().meta.spawn));

                        for (const auto& scene_name: scenes_to_preload) {
                            if (!scene_names.contains(scene_name)) {
                                core::api::scenes::unload_scene(scene_name, false);
                            }
                        }

                        pending_scenes_to_preload.clear();
                        for (const auto& scene_name: scene_names) {
                            if (!core::api::scenes::scene_is_loaded(scene_name)) {
                                pending_scenes_to_preload.emplace(scene_name);
                                scenes_to_preload.emplace(scene_name);
                                core::api::scenes::force_load_scene(scene_name, &on_scene_loading, false, true);
                            }
                        }

                        if (!pending_scenes_to_preload.empty()) {
                            SaveSlotUI::SetBusy(save_slot_ui, true);
                        }
                    }
                }
            }
        }
        // endregion

        IL2CPP_INTERCEPT(RunActionOnce, void, Perform, (app::RunActionOnce * this_ptr, app::IContext* context)) {
            // If the player started a new empty save slot...
            if (empty_slot_pressed_action_sequence_handle.has_value() && this_ptr->fields.Action == reinterpret_cast<app::ActionMethod*>(empty_slot_pressed_action_sequence_handle.value().ref()) &&
                start_game_sequence_handle.has_value()) {
                if (randomizer::multiplayer_universe().should_block_starting_new_game()) {
                    is_in_lobby = true;
                    update_lobby_ui();
                    check_if_preloaded_and_report_ready();
                }
                else {
                    set_full_game_main_menu_selection_manager_active(false);
                    start_new_game();
                }
            }
            else {
                next::RunActionOnce::Perform(this_ptr, context);
            }
        }

        void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
            if (metadata->scene_name == "wotwTitleScreen" && metadata->state == app::SceneState__Enum::Loaded) {
                is_starting_game = false;

                auto scene_root = metadata->scene->fields.SceneRoot;
                auto scene_root_go = il2cpp::unity::get_game_object(scene_root);

                std::vector<std::vector<std::string>> game_objects_to_nuke{
                        {"titleScreen (new)", "startGameSequence", "02. Set Game Mode To Prologue Action"},
                        {"titleScreen (new)", "startGameSequence", "03. Play Sound: Unknown Wise Event"},
                        {"titleScreen (new)", "startGameSequence", "05. Play External Timeline Action"},
                        {"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "01. Activate Menu Action"},
                        {"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "02. Restart ui BaseAnimator"},
                        {"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "03. Play Sound: mainMenuPressNewGameSoundProvider"},
                        {"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "04. Wait 1.5 seconds"},
                        {"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "05. Run startGameSequence action"},
                        {"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "06. Wait 2 seconds"},
                        {"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "07. Deactivate ui"},
                        {"titleScreen (new)", "ui", "group", "actions", "usedSlotPressed (part2)", "05. Wait 1 second"},
                };

                for (const auto& path: game_objects_to_nuke) {
                    auto target_go = il2cpp::unity::find_child(scene_root_go, path);
                    if (il2cpp::unity::is_valid(target_go)) {
                        il2cpp::unity::destroy_object(target_go);
                    }
                }

                // We shorten the wait time to 0.4s. We use that time to fade to black.
                auto empty_slot_pressed_action_sequence_go = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)"});
                auto empty_slot_pressed_action_sequence = il2cpp::unity::get_component<app::ActionSequence>(empty_slot_pressed_action_sequence_go, types::ActionSequence::get_class());
                empty_slot_pressed_action_sequence_handle = il2cpp::WeakGCRef(empty_slot_pressed_action_sequence);

                // Save handles
                ui_go_handle = il2cpp::WeakGCRef(il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"titleScreen (new)", "ui"}));
                auto full_game_main_menu_go_handle = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu"});
                full_game_main_menu_selection_manager_handle = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::CleverMenuItemSelectionManager>(full_game_main_menu_go_handle, types::CleverMenuItemSelectionManager::get_class()));
                start_game_sequence_handle =
                        il2cpp::WeakGCRef(il2cpp::unity::get_component<app::ActionSequence>(il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"titleScreen (new)", "startGameSequence"}), types::ActionSequence::get_class()));

                easy_mode_text_handle = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::MessageBox>(
                        il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "0. easyMode", "text"}), types::MessageBox::get_class()));
                normal_mode_text_handle = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::MessageBox>(
                        il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "0. normalMode", "text"}), types::MessageBox::get_class()));
                hard_mode_text_handle = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::MessageBox>(
                        il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "0. hardMode", "text"}), types::MessageBox::get_class()));

                // Make QTMs faster
                auto qtm_fade_to_black_go = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"titleScreen (new)", "ui", "group", "actions", "usedSlotPressed (part2)", "06. FadeToBlack over 5 seconds"});
                auto qtm_fade_to_black = il2cpp::unity::get_component<app::FaderBFadeInAction>(qtm_fade_to_black_go, types::FaderBFadeInAction::get_class());
                qtm_fade_to_black->fields.FadeInDuration = 2.f;

                auto qtm_wait_go = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"titleScreen (new)", "ui", "group", "actions", "usedSlotPressed (part2)", "07. Wait 5 seconds"});
                auto qtm_wait = il2cpp::unity::get_component<app::WaitAction>(qtm_wait_go, types::WaitAction::get_class());
                qtm_wait->fields.Duration = 2.f;

                update_difficulty_text_boxes();
            }
        }

        common::registration_handle_t on_new_game_late_initialization_handle;
        void on_new_game_late_initialization(GameEvent, EventTiming) {
            if (!core::api::scenes::is_in_game()) {
                return;
            }

            core::api::game::player::ability(app::AbilityType__Enum::SpiritMagnet).set(false);
            core::api::game::event_bus().trigger_event(GameEvent::NewGameInitialized, EventTiming::Before);
            core::api::game::event_bus().trigger_event(GameEvent::NewGameInitialized, EventTiming::After);
            on_new_game_late_initialization_handle = nullptr;

            core::api::game::player::sein()->fields.PlatformBehaviour->fields.PlatformMovement->fields.Enabled = true;
            if (handling_start) {
                handling_start = false;
                core::api::faderb::fade_out(0.3f);
            }
        }

        void on_new_game(GameEvent event, EventTiming timing) {
            auto game_state_machine = types::GameStateMachine::get_class()->static_fields->m_instance;

            auto camera = types::UI_Cameras::get_class()->static_fields->Current;
            GameplayCamera::DisableGoThroughScrollLocks(camera, reinterpret_cast<app::Object_1*>(game_state_machine));

            handling_start = true;
            intro_cutscene.set(1);
            for (const auto& scene_name: pending_scenes_to_preload) {
                core::api::scenes::force_load_scene(scene_name, nullptr, true, false);
            }

            teleportation::teleport_instantly(math::convert(game_seed().parser_output().meta.spawn));
            core::api::game::player::sein()->fields.PlatformBehaviour->fields.PlatformMovement->fields.Enabled = false;
            on_new_game_late_initialization_handle = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, on_new_game_late_initialization);

            GameStateMachine::SetToGame(game_state_machine);
            core::api::game::player::snap_camera();
            ScenesManager::ClearPreventUnloading(core::api::scenes::get_scenes_manager());
        }

        void on_finished_loading_save(GameEvent event, EventTiming timing) {
            for (const auto& scene_name: scenes_to_preload) {
                core::api::scenes::allow_unload_scene(scene_name);
            }

            scenes_to_preload.clear();
        }

        common::registration_handle_t on_should_block_starting_new_game_changed;
        common::registration_handle_t on_multiverse_updated;
        auto _1 = core::api::scenes::event_bus().register_handler(&on_scene_load);
        auto _2 = core::api::game::event_bus().register_handler(GameEvent::NewGame, EventTiming::After, &on_new_game);
        auto _3 = core::api::game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::After, &on_finished_loading_save);
        auto _4 = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, &on_fixed_update);
        auto _5 = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            on_should_block_starting_new_game_changed = randomizer::multiplayer_universe().event_bus().register_handler(online::MultiplayerUniverse::Event::ShouldBlockStartingNewGameChanged, EventTiming::After, [](auto, auto) {
                core::events::schedule_task_for_next_update([]() {
                    randomizer::game::update_difficulty_text_boxes();
                });

                modloader::win::console::console_send(std::format("Blocking new game: {}", randomizer::multiplayer_universe().should_block_starting_new_game() ? "True" : "False"));

                if (!randomizer::multiplayer_universe().should_block_starting_new_game() && randomizer::game::is_in_lobby) {
                    core::events::schedule_task_for_next_update([]() {
                        randomizer::game::start_new_game();
                    });
                }
            });

            on_multiverse_updated = randomizer::multiplayer_universe().event_bus().register_handler(online::MultiplayerUniverse::Event::MultiverseUpdated, EventTiming::After, [](auto, auto) {
                update_lobby_ui();
            });
        });
    } // namespace
} // namespace randomizer::game
