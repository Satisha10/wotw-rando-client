#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterChangePositionBehaviour {
        namespace {
            app::LaserShooterChangePositionBehaviour__Class* type_info_ref = nullptr;
        }
        app::LaserShooterChangePositionBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterChangePositionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterChangePositionBehaviour__Class>(type_info, "", "LaserShooterChangePositionBehaviour");
        }
        inline app::LaserShooterChangePositionBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterChangePositionBehaviour>(get_class());
        }
    } // namespace LaserShooterChangePositionBehaviour
} // namespace app::classes::types