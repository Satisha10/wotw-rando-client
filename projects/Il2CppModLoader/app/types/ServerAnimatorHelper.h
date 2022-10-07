#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerAnimatorHelper {
        namespace {
            app::ServerAnimatorHelper__Class* type_info_ref = nullptr;
        }
        app::ServerAnimatorHelper__Class** type_info = &type_info_ref;
        inline app::ServerAnimatorHelper__Class* get_class() {
            return il2cpp::get_class<app::ServerAnimatorHelper__Class>(type_info, "", "ServerAnimatorHelper");
        }
        inline app::ServerAnimatorHelper* create() {
            return il2cpp::create_object<app::ServerAnimatorHelper>(get_class());
        }
    } // namespace ServerAnimatorHelper
} // namespace app::classes::types