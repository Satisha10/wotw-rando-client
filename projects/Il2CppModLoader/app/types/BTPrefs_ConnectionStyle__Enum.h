#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BTPrefs_ConnectionStyle__Enum {
        namespace {
            app::BTPrefs_ConnectionStyle__Enum__Class* type_info_ref = nullptr;
        }
        app::BTPrefs_ConnectionStyle__Enum__Class** type_info = &type_info_ref;
        inline app::BTPrefs_ConnectionStyle__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BTPrefs_ConnectionStyle__Enum__Class>(type_info, "Moon.BehaviourSystem.BTEditor", "BTPrefs", "ConnectionStyle");
        }
        inline app::BTPrefs_ConnectionStyle__Enum* create() {
            return il2cpp::create_object<app::BTPrefs_ConnectionStyle__Enum>(get_class());
        }
    } // namespace BTPrefs_ConnectionStyle__Enum
} // namespace app::classes::types