#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossBeamAttackSettings {
        namespace {
            app::LaserShooterMinibossBeamAttackSettings__Class* type_info_ref = nullptr;
        }
        app::LaserShooterMinibossBeamAttackSettings__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossBeamAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossBeamAttackSettings__Class>(type_info, "", "LaserShooterMinibossBeamAttackSettings");
        }
        inline app::LaserShooterMinibossBeamAttackSettings* create() {
            return il2cpp::create_object<app::LaserShooterMinibossBeamAttackSettings>(get_class());
        }
    } // namespace LaserShooterMinibossBeamAttackSettings
} // namespace app::classes::types