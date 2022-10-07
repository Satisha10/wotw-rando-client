#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageTextAction {
        namespace {
            app::DamageTextAction__Class* type_info_ref = nullptr;
        }
        app::DamageTextAction__Class** type_info = &type_info_ref;
        inline app::DamageTextAction__Class* get_class() {
            return il2cpp::get_class<app::DamageTextAction__Class>(type_info, "", "DamageTextAction");
        }
        inline app::DamageTextAction* create() {
            return il2cpp::create_object<app::DamageTextAction>(get_class());
        }
    } // namespace DamageTextAction
} // namespace app::classes::types