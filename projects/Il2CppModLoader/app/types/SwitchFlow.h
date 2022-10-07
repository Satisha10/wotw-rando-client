#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchFlow {
        namespace {
            app::SwitchFlow__Class* type_info_ref = nullptr;
        }
        app::SwitchFlow__Class** type_info = &type_info_ref;
        inline app::SwitchFlow__Class* get_class() {
            return il2cpp::get_class<app::SwitchFlow__Class>(type_info, "frameworks.Switch", "SwitchFlow");
        }
        inline app::SwitchFlow* create() {
            return il2cpp::create_object<app::SwitchFlow>(get_class());
        }
    } // namespace SwitchFlow
} // namespace app::classes::types