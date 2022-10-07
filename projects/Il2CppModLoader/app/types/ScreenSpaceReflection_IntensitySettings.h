#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenSpaceReflection_IntensitySettings {
        namespace {
            app::ScreenSpaceReflection_IntensitySettings__Class* type_info_ref = nullptr;
        }
        app::ScreenSpaceReflection_IntensitySettings__Class** type_info = &type_info_ref;
        inline app::ScreenSpaceReflection_IntensitySettings__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenSpaceReflection_IntensitySettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ScreenSpaceReflection", "IntensitySettings");
        }
        inline app::ScreenSpaceReflection_IntensitySettings* create() {
            return il2cpp::create_object<app::ScreenSpaceReflection_IntensitySettings>(get_class());
        }
        inline app::ScreenSpaceReflection_IntensitySettings__Boxed* box(app::ScreenSpaceReflection_IntensitySettings value) {
            return il2cpp::box_value<app::ScreenSpaceReflection_IntensitySettings__Boxed>(get_class(), value);
        }
    } // namespace ScreenSpaceReflection_IntensitySettings
} // namespace app::classes::types