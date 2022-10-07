#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyInputLockAnimator {
        namespace {
            app::LegacyInputLockAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyInputLockAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyInputLockAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyInputLockAnimator__Class>(type_info, "", "LegacyInputLockAnimator");
        }
        inline app::LegacyInputLockAnimator* create() {
            return il2cpp::create_object<app::LegacyInputLockAnimator>(get_class());
        }
    } // namespace LegacyInputLockAnimator
} // namespace app::classes::types