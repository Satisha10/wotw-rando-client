#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacySinMovementAnimator {
        namespace {
            app::LegacySinMovementAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacySinMovementAnimator__Class** type_info = &type_info_ref;
        inline app::LegacySinMovementAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacySinMovementAnimator__Class>(type_info, "", "LegacySinMovementAnimator");
        }
        inline app::LegacySinMovementAnimator* create() {
            return il2cpp::create_object<app::LegacySinMovementAnimator>(get_class());
        }
    } // namespace LegacySinMovementAnimator
} // namespace app::classes::types