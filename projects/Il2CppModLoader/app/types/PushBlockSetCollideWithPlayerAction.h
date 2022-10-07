#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PushBlockSetCollideWithPlayerAction {
        namespace {
            app::PushBlockSetCollideWithPlayerAction__Class* type_info_ref = nullptr;
        }
        app::PushBlockSetCollideWithPlayerAction__Class** type_info = &type_info_ref;
        inline app::PushBlockSetCollideWithPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::PushBlockSetCollideWithPlayerAction__Class>(type_info, "", "PushBlockSetCollideWithPlayerAction");
        }
        inline app::PushBlockSetCollideWithPlayerAction* create() {
            return il2cpp::create_object<app::PushBlockSetCollideWithPlayerAction>(get_class());
        }
    } // namespace PushBlockSetCollideWithPlayerAction
} // namespace app::classes::types