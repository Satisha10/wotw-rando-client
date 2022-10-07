#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TouchScreenKeyboard_Status__Enum {
        namespace {
            app::TouchScreenKeyboard_Status__Enum__Class* type_info_ref = nullptr;
        }
        app::TouchScreenKeyboard_Status__Enum__Class** type_info = &type_info_ref;
        inline app::TouchScreenKeyboard_Status__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TouchScreenKeyboard_Status__Enum__Class>(type_info, "UnityEngine", "TouchScreenKeyboard", "Status");
        }
        inline app::TouchScreenKeyboard_Status__Enum* create() {
            return il2cpp::create_object<app::TouchScreenKeyboard_Status__Enum>(get_class());
        }
    } // namespace TouchScreenKeyboard_Status__Enum
} // namespace app::classes::types