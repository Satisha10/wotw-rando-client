#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerGrabPushPullHintSystem {
        namespace {
            app::PlayerGrabPushPullHintSystem__Class* type_info_ref = nullptr;
        }
        app::PlayerGrabPushPullHintSystem__Class** type_info = &type_info_ref;
        inline app::PlayerGrabPushPullHintSystem__Class* get_class() {
            return il2cpp::get_class<app::PlayerGrabPushPullHintSystem__Class>(type_info, "", "PlayerGrabPushPullHintSystem");
        }
        inline app::PlayerGrabPushPullHintSystem* create() {
            return il2cpp::create_object<app::PlayerGrabPushPullHintSystem>(get_class());
        }
    } // namespace PlayerGrabPushPullHintSystem
} // namespace app::classes::types