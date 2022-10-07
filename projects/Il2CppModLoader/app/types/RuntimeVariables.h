#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeVariables {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeVariables__Class** type_info;
        inline app::RuntimeVariables__Class* get_class() {
            return il2cpp::get_class<app::RuntimeVariables__Class>(type_info, "System.Linq.Expressions.Interpreter", "RuntimeVariables");
        }
        inline app::RuntimeVariables* create() {
            return il2cpp::create_object<app::RuntimeVariables>(get_class());
        }
    } // namespace RuntimeVariables
} // namespace app::classes::types