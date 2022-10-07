#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MantisJumpAttackSettings {
        namespace {
            app::MantisJumpAttackSettings__Class* type_info_ref = nullptr;
        }
        app::MantisJumpAttackSettings__Class** type_info = &type_info_ref;
        inline app::MantisJumpAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::MantisJumpAttackSettings__Class>(type_info, "", "MantisJumpAttackSettings");
        }
        inline app::MantisJumpAttackSettings* create() {
            return il2cpp::create_object<app::MantisJumpAttackSettings>(get_class());
        }
    } // namespace MantisJumpAttackSettings
} // namespace app::classes::types