#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetPositionAction {
        namespace {
            app::SetPositionAction__Class* type_info_ref = nullptr;
        }
        app::SetPositionAction__Class** type_info = &type_info_ref;
        inline app::SetPositionAction__Class* get_class() {
            return il2cpp::get_class<app::SetPositionAction__Class>(type_info, "", "SetPositionAction");
        }
        inline app::SetPositionAction* create() {
            return il2cpp::create_object<app::SetPositionAction>(get_class());
        }
    } // namespace SetPositionAction
} // namespace app::classes::types