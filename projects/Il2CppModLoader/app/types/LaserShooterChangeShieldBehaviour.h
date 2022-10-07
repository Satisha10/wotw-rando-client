#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterChangeShieldBehaviour {
        namespace {
            app::LaserShooterChangeShieldBehaviour__Class* type_info_ref = nullptr;
        }
        app::LaserShooterChangeShieldBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterChangeShieldBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterChangeShieldBehaviour__Class>(type_info, "", "LaserShooterChangeShieldBehaviour");
        }
        inline app::LaserShooterChangeShieldBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterChangeShieldBehaviour>(get_class());
        }
    } // namespace LaserShooterChangeShieldBehaviour
} // namespace app::classes::types