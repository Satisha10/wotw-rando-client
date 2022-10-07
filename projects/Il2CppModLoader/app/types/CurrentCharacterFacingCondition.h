#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CurrentCharacterFacingCondition {
        namespace {
            app::CurrentCharacterFacingCondition__Class* type_info_ref = nullptr;
        }
        app::CurrentCharacterFacingCondition__Class** type_info = &type_info_ref;
        inline app::CurrentCharacterFacingCondition__Class* get_class() {
            return il2cpp::get_class<app::CurrentCharacterFacingCondition__Class>(type_info, "", "CurrentCharacterFacingCondition");
        }
        inline app::CurrentCharacterFacingCondition* create() {
            return il2cpp::create_object<app::CurrentCharacterFacingCondition>(get_class());
        }
    } // namespace CurrentCharacterFacingCondition
} // namespace app::classes::types