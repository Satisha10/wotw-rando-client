#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeverSetupHolder {
        namespace {
            app::LeverSetupHolder__Class* type_info_ref = nullptr;
        }
        app::LeverSetupHolder__Class** type_info = &type_info_ref;
        inline app::LeverSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::LeverSetupHolder__Class>(type_info, "", "LeverSetupHolder");
        }
        inline app::LeverSetupHolder* create() {
            return il2cpp::create_object<app::LeverSetupHolder>(get_class());
        }
    } // namespace LeverSetupHolder
} // namespace app::classes::types