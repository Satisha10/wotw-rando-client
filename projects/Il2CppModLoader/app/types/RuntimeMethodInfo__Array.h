#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeMethodInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeMethodInfo__Array__Class** type_info;
        inline app::RuntimeMethodInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeMethodInfo__Array__Class>(type_info, "System.Reflection", "RuntimeMethodInfo[]");
        }
        inline app::RuntimeMethodInfo__Array* create() {
            return il2cpp::create_object<app::RuntimeMethodInfo__Array>(get_class());
        }
    } // namespace RuntimeMethodInfo__Array
} // namespace app::classes::types