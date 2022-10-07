#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollapsingPlatformAnimator_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CollapsingPlatformAnimator_c__Class** type_info;
        inline app::CollapsingPlatformAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CollapsingPlatformAnimator_c__Class>(type_info, "", "CollapsingPlatformAnimator", "<>c");
        }
        inline app::CollapsingPlatformAnimator_c* create() {
            return il2cpp::create_object<app::CollapsingPlatformAnimator_c>(get_class());
        }
    } // namespace CollapsingPlatformAnimator_c
} // namespace app::classes::types