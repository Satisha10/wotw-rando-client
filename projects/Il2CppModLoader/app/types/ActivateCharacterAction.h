#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivateCharacterAction {
        namespace {
            app::ActivateCharacterAction__Class* type_info_ref = nullptr;
        }
        app::ActivateCharacterAction__Class** type_info = &type_info_ref;
        inline app::ActivateCharacterAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateCharacterAction__Class>(type_info, "", "ActivateCharacterAction");
        }
        inline app::ActivateCharacterAction* create() {
            return il2cpp::create_object<app::ActivateCharacterAction>(get_class());
        }
    } // namespace ActivateCharacterAction
} // namespace app::classes::types