#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Selectable_SelectionState__Enum {
        namespace {
            app::Selectable_SelectionState__Enum__Class* type_info_ref = nullptr;
        }
        app::Selectable_SelectionState__Enum__Class** type_info = &type_info_ref;
        inline app::Selectable_SelectionState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Selectable_SelectionState__Enum__Class>(type_info, "UnityEngine.UI", "Selectable", "SelectionState");
        }
        inline app::Selectable_SelectionState__Enum* create() {
            return il2cpp::create_object<app::Selectable_SelectionState__Enum>(get_class());
        }
    } // namespace Selectable_SelectionState__Enum
} // namespace app::classes::types