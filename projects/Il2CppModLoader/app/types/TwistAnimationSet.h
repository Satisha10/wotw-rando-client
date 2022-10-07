#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TwistAnimationSet {
        namespace {
            app::TwistAnimationSet__Class* type_info_ref = nullptr;
        }
        app::TwistAnimationSet__Class** type_info = &type_info_ref;
        inline app::TwistAnimationSet__Class* get_class() {
            return il2cpp::get_class<app::TwistAnimationSet__Class>(type_info, "", "TwistAnimationSet");
        }
        inline app::TwistAnimationSet* create() {
            return il2cpp::create_object<app::TwistAnimationSet>(get_class());
        }
    } // namespace TwistAnimationSet
} // namespace app::classes::types