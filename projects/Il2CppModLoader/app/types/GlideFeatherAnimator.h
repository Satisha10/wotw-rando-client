#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlideFeatherAnimator {
        namespace {
            app::GlideFeatherAnimator__Class* type_info_ref = nullptr;
        }
        app::GlideFeatherAnimator__Class** type_info = &type_info_ref;
        inline app::GlideFeatherAnimator__Class* get_class() {
            return il2cpp::get_class<app::GlideFeatherAnimator__Class>(type_info, "", "GlideFeatherAnimator");
        }
        inline app::GlideFeatherAnimator* create() {
            return il2cpp::create_object<app::GlideFeatherAnimator>(get_class());
        }
    } // namespace GlideFeatherAnimator
} // namespace app::classes::types