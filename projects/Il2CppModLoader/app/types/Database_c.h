#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Database_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Database_c__Class** type_info;
        inline app::Database_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Database_c__Class>(type_info, "Moon.Race", "Database", "<>c");
        }
        inline app::Database_c* create() {
            return il2cpp::create_object<app::Database_c>(get_class());
        }
    } // namespace Database_c
} // namespace app::classes::types