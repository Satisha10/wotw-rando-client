#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ERegisterActivationCodeResult__Enum {
        namespace {
            app::ERegisterActivationCodeResult__Enum__Class* type_info_ref = nullptr;
        }
        app::ERegisterActivationCodeResult__Enum__Class** type_info = &type_info_ref;
        inline app::ERegisterActivationCodeResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::ERegisterActivationCodeResult__Enum__Class>(type_info, "Steamworks", "ERegisterActivationCodeResult");
        }
        inline app::ERegisterActivationCodeResult__Enum* create() {
            return il2cpp::create_object<app::ERegisterActivationCodeResult__Enum>(get_class());
        }
    } // namespace ERegisterActivationCodeResult__Enum
} // namespace app::classes::types