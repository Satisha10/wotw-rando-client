#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightingProfilingSetting {
        namespace {
            app::LightingProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::LightingProfilingSetting__Class** type_info = &type_info_ref;
        inline app::LightingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::LightingProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "LightingProfilingSetting");
        }
        inline app::LightingProfilingSetting* create() {
            return il2cpp::create_object<app::LightingProfilingSetting>(get_class());
        }
    } // namespace LightingProfilingSetting
} // namespace app::classes::types