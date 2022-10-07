#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DistortionProfilingSetting {
        namespace {
            app::DistortionProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::DistortionProfilingSetting__Class** type_info = &type_info_ref;
        inline app::DistortionProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DistortionProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "DistortionProfilingSetting");
        }
        inline app::DistortionProfilingSetting* create() {
            return il2cpp::create_object<app::DistortionProfilingSetting>(get_class());
        }
    } // namespace DistortionProfilingSetting
} // namespace app::classes::types