#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardAttackEffects_Type__Enum {
        namespace {
            app::LizardAttackEffects_Type__Enum__Class* type_info_ref = nullptr;
        }
        app::LizardAttackEffects_Type__Enum__Class** type_info = &type_info_ref;
        inline app::LizardAttackEffects_Type__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardAttackEffects_Type__Enum__Class>(type_info, "", "LizardAttackEffects", "Type");
        }
        inline app::LizardAttackEffects_Type__Enum* create() {
            return il2cpp::create_object<app::LizardAttackEffects_Type__Enum>(get_class());
        }
    } // namespace LizardAttackEffects_Type__Enum
} // namespace app::classes::types