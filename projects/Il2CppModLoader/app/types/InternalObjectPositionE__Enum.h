#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalObjectPositionE__Enum {
        namespace {
            app::InternalObjectPositionE__Enum__Class* type_info_ref = nullptr;
        }
        app::InternalObjectPositionE__Enum__Class** type_info = &type_info_ref;
        inline app::InternalObjectPositionE__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalObjectPositionE__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "InternalObjectPositionE");
        }
        inline app::InternalObjectPositionE__Enum* create() {
            return il2cpp::create_object<app::InternalObjectPositionE__Enum>(get_class());
        }
    } // namespace InternalObjectPositionE__Enum
} // namespace app::classes::types