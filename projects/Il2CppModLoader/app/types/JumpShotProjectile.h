#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpShotProjectile {
        namespace {
            app::JumpShotProjectile__Class* type_info_ref = nullptr;
        }
        app::JumpShotProjectile__Class** type_info = &type_info_ref;
        inline app::JumpShotProjectile__Class* get_class() {
            return il2cpp::get_class<app::JumpShotProjectile__Class>(type_info, "", "JumpShotProjectile");
        }
        inline app::JumpShotProjectile* create() {
            return il2cpp::create_object<app::JumpShotProjectile>(get_class());
        }
    } // namespace JumpShotProjectile
} // namespace app::classes::types