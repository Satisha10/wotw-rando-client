#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecimalConstantAttribute__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecimalConstantAttribute__Array__Class** type_info;
        inline app::DecimalConstantAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::DecimalConstantAttribute__Array__Class>(type_info, "System.Runtime.CompilerServices", "DecimalConstantAttribute[]");
        }
        inline app::DecimalConstantAttribute__Array* create() {
            return il2cpp::create_object<app::DecimalConstantAttribute__Array>(get_class());
        }
    } // namespace DecimalConstantAttribute__Array
} // namespace app::classes::types