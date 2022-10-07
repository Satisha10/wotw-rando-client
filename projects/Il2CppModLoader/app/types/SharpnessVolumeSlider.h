#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SharpnessVolumeSlider {
        namespace {
            app::SharpnessVolumeSlider__Class* type_info_ref = nullptr;
        }
        app::SharpnessVolumeSlider__Class** type_info = &type_info_ref;
        inline app::SharpnessVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::SharpnessVolumeSlider__Class>(type_info, "", "SharpnessVolumeSlider");
        }
        inline app::SharpnessVolumeSlider* create() {
            return il2cpp::create_object<app::SharpnessVolumeSlider>(get_class());
        }
    } // namespace SharpnessVolumeSlider
} // namespace app::classes::types