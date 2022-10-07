#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossBeamAttackBehaviour {
        namespace {
            app::LaserShooterMinibossBeamAttackBehaviour__Class* type_info_ref = nullptr;
        }
        app::LaserShooterMinibossBeamAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossBeamAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossBeamAttackBehaviour__Class>(type_info, "", "LaserShooterMinibossBeamAttackBehaviour");
        }
        inline app::LaserShooterMinibossBeamAttackBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterMinibossBeamAttackBehaviour>(get_class());
        }
    } // namespace LaserShooterMinibossBeamAttackBehaviour
} // namespace app::classes::types