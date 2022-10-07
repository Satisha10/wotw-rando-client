#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlInt32__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlInt32__Array__Class** type_info;
        inline app::SqlInt32__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlInt32__Array__Class>(type_info, "System.Data.SqlTypes", "SqlInt32[]");
        }
        inline app::SqlInt32__Array* create() {
            return il2cpp::create_object<app::SqlInt32__Array>(get_class());
        }
    } // namespace SqlInt32__Array
} // namespace app::classes::types