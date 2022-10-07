#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchActionSystem {
        namespace {
            app::SwitchActionSystem__Class* type_info_ref = nullptr;
        }
        app::SwitchActionSystem__Class** type_info = &type_info_ref;
        inline app::SwitchActionSystem__Class* get_class() {
            return il2cpp::get_class<app::SwitchActionSystem__Class>(type_info, "", "SwitchActionSystem");
        }
        inline app::SwitchActionSystem* create() {
            return il2cpp::create_object<app::SwitchActionSystem>(get_class());
        }
    } // namespace SwitchActionSystem
} // namespace app::classes::types