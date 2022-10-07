#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TouchScreenKeyboardType__Enum {
        namespace {
            app::TouchScreenKeyboardType__Enum__Class* type_info_ref = nullptr;
        }
        app::TouchScreenKeyboardType__Enum__Class** type_info = &type_info_ref;
        inline app::TouchScreenKeyboardType__Enum__Class* get_class() {
            return il2cpp::get_class<app::TouchScreenKeyboardType__Enum__Class>(type_info, "UnityEngine", "TouchScreenKeyboardType");
        }
        inline app::TouchScreenKeyboardType__Enum* create() {
            return il2cpp::create_object<app::TouchScreenKeyboardType__Enum>(get_class());
        }
    } // namespace TouchScreenKeyboardType__Enum
} // namespace app::classes::types