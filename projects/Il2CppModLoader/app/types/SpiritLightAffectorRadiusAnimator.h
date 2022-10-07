#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLightAffectorRadiusAnimator {
        namespace {
            app::SpiritLightAffectorRadiusAnimator__Class* type_info_ref = nullptr;
        }
        app::SpiritLightAffectorRadiusAnimator__Class** type_info = &type_info_ref;
        inline app::SpiritLightAffectorRadiusAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightAffectorRadiusAnimator__Class>(type_info, "", "SpiritLightAffectorRadiusAnimator");
        }
        inline app::SpiritLightAffectorRadiusAnimator* create() {
            return il2cpp::create_object<app::SpiritLightAffectorRadiusAnimator>(get_class());
        }
    } // namespace SpiritLightAffectorRadiusAnimator
} // namespace app::classes::types