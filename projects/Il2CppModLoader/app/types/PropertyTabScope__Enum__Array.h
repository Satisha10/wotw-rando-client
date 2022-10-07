#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyTabScope__Enum__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyTabScope__Enum__Array__Class** type_info;
        inline app::PropertyTabScope__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::PropertyTabScope__Enum__Array__Class>(type_info, "System.ComponentModel", "PropertyTabScope[]");
        }
        inline app::PropertyTabScope__Enum__Array* create() {
            return il2cpp::create_object<app::PropertyTabScope__Enum__Array>(get_class());
        }
    } // namespace PropertyTabScope__Enum__Array
} // namespace app::classes::types