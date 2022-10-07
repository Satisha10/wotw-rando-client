#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpShootSharkAction {
        namespace {
            app::JumpShootSharkAction__Class* type_info_ref = nullptr;
        }
        app::JumpShootSharkAction__Class** type_info = &type_info_ref;
        inline app::JumpShootSharkAction__Class* get_class() {
            return il2cpp::get_class<app::JumpShootSharkAction__Class>(type_info, "", "JumpShootSharkAction");
        }
        inline app::JumpShootSharkAction* create() {
            return il2cpp::create_object<app::JumpShootSharkAction>(get_class());
        }
    } // namespace JumpShootSharkAction
} // namespace app::classes::types