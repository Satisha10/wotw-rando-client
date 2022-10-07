#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CenterSliceOnlyProfilingSetting {
        namespace {
            app::CenterSliceOnlyProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::CenterSliceOnlyProfilingSetting__Class** type_info = &type_info_ref;
        inline app::CenterSliceOnlyProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::CenterSliceOnlyProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "CenterSliceOnlyProfilingSetting");
        }
        inline app::CenterSliceOnlyProfilingSetting* create() {
            return il2cpp::create_object<app::CenterSliceOnlyProfilingSetting>(get_class());
        }
    } // namespace CenterSliceOnlyProfilingSetting
} // namespace app::classes::types