#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlMoney__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlMoney__Array__Class** type_info;
        inline app::SqlMoney__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlMoney__Array__Class>(type_info, "System.Data.SqlTypes", "SqlMoney[]");
        }
        inline app::SqlMoney__Array* create() {
            return il2cpp::create_object<app::SqlMoney__Array>(get_class());
        }
    } // namespace SqlMoney__Array
} // namespace app::classes::types