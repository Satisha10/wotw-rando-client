#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PressurePlateSetupHolder {
        namespace {
            app::PressurePlateSetupHolder__Class* type_info_ref = nullptr;
        }
        app::PressurePlateSetupHolder__Class** type_info = &type_info_ref;
        inline app::PressurePlateSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::PressurePlateSetupHolder__Class>(type_info, "", "PressurePlateSetupHolder");
        }
        inline app::PressurePlateSetupHolder* create() {
            return il2cpp::create_object<app::PressurePlateSetupHolder>(get_class());
        }
    } // namespace PressurePlateSetupHolder
} // namespace app::classes::types