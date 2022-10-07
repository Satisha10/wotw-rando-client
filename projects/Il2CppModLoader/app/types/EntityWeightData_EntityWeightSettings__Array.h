#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityWeightData_EntityWeightSettings__Array {
        namespace {
            app::EntityWeightData_EntityWeightSettings__Array__Class* type_info_ref = nullptr;
        }
        app::EntityWeightData_EntityWeightSettings__Array__Class** type_info = &type_info_ref;
        inline app::EntityWeightData_EntityWeightSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityWeightData_EntityWeightSettings__Array__Class>(type_info, "", "EntityWeightData+EntityWeightSettings[]");
        }
        inline app::EntityWeightData_EntityWeightSettings__Array* create() {
            return il2cpp::create_object<app::EntityWeightData_EntityWeightSettings__Array>(get_class());
        }
    } // namespace EntityWeightData_EntityWeightSettings__Array
} // namespace app::classes::types