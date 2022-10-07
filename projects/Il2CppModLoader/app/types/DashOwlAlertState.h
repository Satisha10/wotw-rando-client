#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashOwlAlertState {
        namespace {
            app::DashOwlAlertState__Class* type_info_ref = nullptr;
        }
        app::DashOwlAlertState__Class** type_info = &type_info_ref;
        inline app::DashOwlAlertState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlAlertState__Class>(type_info, "", "DashOwlAlertState");
        }
        inline app::DashOwlAlertState* create() {
            return il2cpp::create_object<app::DashOwlAlertState>(get_class());
        }
    } // namespace DashOwlAlertState
} // namespace app::classes::types