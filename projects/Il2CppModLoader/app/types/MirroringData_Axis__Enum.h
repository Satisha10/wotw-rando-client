#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MirroringData_Axis__Enum {
        namespace {
            app::MirroringData_Axis__Enum__Class* type_info_ref = nullptr;
        }
        app::MirroringData_Axis__Enum__Class** type_info = &type_info_ref;
        inline app::MirroringData_Axis__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MirroringData_Axis__Enum__Class>(type_info, "", "MirroringData", "Axis");
        }
        inline app::MirroringData_Axis__Enum* create() {
            return il2cpp::create_object<app::MirroringData_Axis__Enum>(get_class());
        }
    } // namespace MirroringData_Axis__Enum
} // namespace app::classes::types