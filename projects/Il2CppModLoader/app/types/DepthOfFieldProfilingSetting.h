#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DepthOfFieldProfilingSetting {
        namespace {
            app::DepthOfFieldProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::DepthOfFieldProfilingSetting__Class** type_info = &type_info_ref;
        inline app::DepthOfFieldProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DepthOfFieldProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "DepthOfFieldProfilingSetting");
        }
        inline app::DepthOfFieldProfilingSetting* create() {
            return il2cpp::create_object<app::DepthOfFieldProfilingSetting>(get_class());
        }
    } // namespace DepthOfFieldProfilingSetting
} // namespace app::classes::types