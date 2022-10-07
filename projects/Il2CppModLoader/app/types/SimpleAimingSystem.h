#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleAimingSystem {
        namespace {
            app::SimpleAimingSystem__Class* type_info_ref = nullptr;
        }
        app::SimpleAimingSystem__Class** type_info = &type_info_ref;
        inline app::SimpleAimingSystem__Class* get_class() {
            return il2cpp::get_class<app::SimpleAimingSystem__Class>(type_info, "RootMotion.Demos", "SimpleAimingSystem");
        }
        inline app::SimpleAimingSystem* create() {
            return il2cpp::create_object<app::SimpleAimingSystem>(get_class());
        }
    } // namespace SimpleAimingSystem
} // namespace app::classes::types