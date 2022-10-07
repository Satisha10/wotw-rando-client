#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaunchCartFromStopperAction {
        namespace {
            app::LaunchCartFromStopperAction__Class* type_info_ref = nullptr;
        }
        app::LaunchCartFromStopperAction__Class** type_info = &type_info_ref;
        inline app::LaunchCartFromStopperAction__Class* get_class() {
            return il2cpp::get_class<app::LaunchCartFromStopperAction__Class>(type_info, "", "LaunchCartFromStopperAction");
        }
        inline app::LaunchCartFromStopperAction* create() {
            return il2cpp::create_object<app::LaunchCartFromStopperAction>(get_class());
        }
    } // namespace LaunchCartFromStopperAction
} // namespace app::classes::types