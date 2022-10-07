#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinTurretSpell {
        namespace {
            app::SeinTurretSpell__Class* type_info_ref = nullptr;
        }
        app::SeinTurretSpell__Class** type_info = &type_info_ref;
        inline app::SeinTurretSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinTurretSpell__Class>(type_info, "", "SeinTurretSpell");
        }
        inline app::SeinTurretSpell* create() {
            return il2cpp::create_object<app::SeinTurretSpell>(get_class());
        }
    } // namespace SeinTurretSpell
} // namespace app::classes::types