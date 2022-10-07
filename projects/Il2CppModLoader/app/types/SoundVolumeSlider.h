#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundVolumeSlider {
        namespace {
            app::SoundVolumeSlider__Class* type_info_ref = nullptr;
        }
        app::SoundVolumeSlider__Class** type_info = &type_info_ref;
        inline app::SoundVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::SoundVolumeSlider__Class>(type_info, "", "SoundVolumeSlider");
        }
        inline app::SoundVolumeSlider* create() {
            return il2cpp::create_object<app::SoundVolumeSlider>(get_class());
        }
    } // namespace SoundVolumeSlider
} // namespace app::classes::types