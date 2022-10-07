#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GridLayoutGroup_Constraint__Enum {
        namespace {
            app::GridLayoutGroup_Constraint__Enum__Class* type_info_ref = nullptr;
        }
        app::GridLayoutGroup_Constraint__Enum__Class** type_info = &type_info_ref;
        inline app::GridLayoutGroup_Constraint__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GridLayoutGroup_Constraint__Enum__Class>(type_info, "UnityEngine.UI", "GridLayoutGroup", "Constraint");
        }
        inline app::GridLayoutGroup_Constraint__Enum* create() {
            return il2cpp::create_object<app::GridLayoutGroup_Constraint__Enum>(get_class());
        }
    } // namespace GridLayoutGroup_Constraint__Enum
} // namespace app::classes::types