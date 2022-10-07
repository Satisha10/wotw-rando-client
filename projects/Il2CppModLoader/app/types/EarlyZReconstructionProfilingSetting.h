#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyZReconstructionProfilingSetting {
        namespace {
            app::EarlyZReconstructionProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::EarlyZReconstructionProfilingSetting__Class** type_info = &type_info_ref;
        inline app::EarlyZReconstructionProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::EarlyZReconstructionProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "EarlyZReconstructionProfilingSetting");
        }
        inline app::EarlyZReconstructionProfilingSetting* create() {
            return il2cpp::create_object<app::EarlyZReconstructionProfilingSetting>(get_class());
        }
    } // namespace EarlyZReconstructionProfilingSetting
} // namespace app::classes::types