#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteeringForcesSettings {
        namespace {
            app::SteeringForcesSettings__Class* type_info_ref = nullptr;
        }
        app::SteeringForcesSettings__Class** type_info = &type_info_ref;
        inline app::SteeringForcesSettings__Class* get_class() {
            return il2cpp::get_class<app::SteeringForcesSettings__Class>(type_info, "", "SteeringForcesSettings");
        }
        inline app::SteeringForcesSettings* create() {
            return il2cpp::create_object<app::SteeringForcesSettings>(get_class());
        }
    } // namespace SteeringForcesSettings
} // namespace app::classes::types