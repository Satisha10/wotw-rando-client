#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Double__Array__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Double__Array__Array__Class** type_info;
        inline app::Double__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Double__Array__Array__Class>(type_info, "System", "Double[][]");
        }
        inline app::Double__Array__Array* create() {
            return il2cpp::create_object<app::Double__Array__Array>(get_class());
        }
    } // namespace Double__Array__Array
} // namespace app::classes::types