#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteeringForcesAngleAvoidanceSettings__Array {
        namespace {
            app::SteeringForcesAngleAvoidanceSettings__Array__Class* type_info_ref = nullptr;
        }
        app::SteeringForcesAngleAvoidanceSettings__Array__Class** type_info = &type_info_ref;
        inline app::SteeringForcesAngleAvoidanceSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::SteeringForcesAngleAvoidanceSettings__Array__Class>(type_info, "", "SteeringForcesAngleAvoidanceSettings[]");
        }
        inline app::SteeringForcesAngleAvoidanceSettings__Array* create() {
            return il2cpp::create_object<app::SteeringForcesAngleAvoidanceSettings__Array>(get_class());
        }
    } // namespace SteeringForcesAngleAvoidanceSettings__Array
} // namespace app::classes::types