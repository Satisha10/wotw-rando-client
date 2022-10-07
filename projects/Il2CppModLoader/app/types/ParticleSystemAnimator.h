#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemAnimator {
        namespace {
            app::ParticleSystemAnimator__Class* type_info_ref = nullptr;
        }
        app::ParticleSystemAnimator__Class** type_info = &type_info_ref;
        inline app::ParticleSystemAnimator__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemAnimator__Class>(type_info, "Moon.Timeline", "ParticleSystemAnimator");
        }
        inline app::ParticleSystemAnimator* create() {
            return il2cpp::create_object<app::ParticleSystemAnimator>(get_class());
        }
    } // namespace ParticleSystemAnimator
} // namespace app::classes::types