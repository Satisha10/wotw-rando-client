#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashableSwitchSetupHolder {
        namespace {
            app::DashableSwitchSetupHolder__Class* type_info_ref = nullptr;
        }
        app::DashableSwitchSetupHolder__Class** type_info = &type_info_ref;
        inline app::DashableSwitchSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchSetupHolder__Class>(type_info, "", "DashableSwitchSetupHolder");
        }
        inline app::DashableSwitchSetupHolder* create() {
            return il2cpp::create_object<app::DashableSwitchSetupHolder>(get_class());
        }
    } // namespace DashableSwitchSetupHolder
} // namespace app::classes::types