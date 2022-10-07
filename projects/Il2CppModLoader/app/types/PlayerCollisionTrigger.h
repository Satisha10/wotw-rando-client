#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerCollisionTrigger {
        namespace {
            app::PlayerCollisionTrigger__Class* type_info_ref = nullptr;
        }
        app::PlayerCollisionTrigger__Class** type_info = &type_info_ref;
        inline app::PlayerCollisionTrigger__Class* get_class() {
            return il2cpp::get_class<app::PlayerCollisionTrigger__Class>(type_info, "", "PlayerCollisionTrigger");
        }
        inline app::PlayerCollisionTrigger* create() {
            return il2cpp::create_object<app::PlayerCollisionTrigger>(get_class());
        }
    } // namespace PlayerCollisionTrigger
} // namespace app::classes::types