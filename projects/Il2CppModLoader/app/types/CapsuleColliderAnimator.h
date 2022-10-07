#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CapsuleColliderAnimator {
        namespace {
            app::CapsuleColliderAnimator__Class* type_info_ref = nullptr;
        }
        app::CapsuleColliderAnimator__Class** type_info = &type_info_ref;
        inline app::CapsuleColliderAnimator__Class* get_class() {
            return il2cpp::get_class<app::CapsuleColliderAnimator__Class>(type_info, "", "CapsuleColliderAnimator");
        }
        inline app::CapsuleColliderAnimator* create() {
            return il2cpp::create_object<app::CapsuleColliderAnimator>(get_class());
        }
    } // namespace CapsuleColliderAnimator
} // namespace app::classes::types