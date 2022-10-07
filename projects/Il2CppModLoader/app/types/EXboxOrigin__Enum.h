#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EXboxOrigin__Enum {
        namespace {
            app::EXboxOrigin__Enum__Class* type_info_ref = nullptr;
        }
        app::EXboxOrigin__Enum__Class** type_info = &type_info_ref;
        inline app::EXboxOrigin__Enum__Class* get_class() {
            return il2cpp::get_class<app::EXboxOrigin__Enum__Class>(type_info, "Steamworks", "EXboxOrigin");
        }
        inline app::EXboxOrigin__Enum* create() {
            return il2cpp::create_object<app::EXboxOrigin__Enum>(get_class());
        }
    } // namespace EXboxOrigin__Enum
} // namespace app::classes::types