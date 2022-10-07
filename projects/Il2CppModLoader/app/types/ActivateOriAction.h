#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivateOriAction {
        namespace {
            app::ActivateOriAction__Class* type_info_ref = nullptr;
        }
        app::ActivateOriAction__Class** type_info = &type_info_ref;
        inline app::ActivateOriAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateOriAction__Class>(type_info, "", "ActivateOriAction");
        }
        inline app::ActivateOriAction* create() {
            return il2cpp::create_object<app::ActivateOriAction>(get_class());
        }
    } // namespace ActivateOriAction
} // namespace app::classes::types