#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrabLungeAttackBehaviour {
        namespace {
            app::CrabLungeAttackBehaviour__Class* type_info_ref = nullptr;
        }
        app::CrabLungeAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::CrabLungeAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CrabLungeAttackBehaviour__Class>(type_info, "Moon", "CrabLungeAttackBehaviour");
        }
        inline app::CrabLungeAttackBehaviour* create() {
            return il2cpp::create_object<app::CrabLungeAttackBehaviour>(get_class());
        }
    } // namespace CrabLungeAttackBehaviour
} // namespace app::classes::types