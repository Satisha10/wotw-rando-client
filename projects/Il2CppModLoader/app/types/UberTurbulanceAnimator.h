#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberTurbulanceAnimator {
        namespace {
            app::UberTurbulanceAnimator__Class* type_info_ref = nullptr;
        }
        app::UberTurbulanceAnimator__Class** type_info = &type_info_ref;
        inline app::UberTurbulanceAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberTurbulanceAnimator__Class>(type_info, "", "UberTurbulanceAnimator");
        }
        inline app::UberTurbulanceAnimator* create() {
            return il2cpp::create_object<app::UberTurbulanceAnimator>(get_class());
        }
    } // namespace UberTurbulanceAnimator
} // namespace app::classes::types