#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int16Storage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Int16Storage__Class** type_info;
        inline app::Int16Storage__Class* get_class() {
            return il2cpp::get_class<app::Int16Storage__Class>(type_info, "System.Data.Common", "Int16Storage");
        }
        inline app::Int16Storage* create() {
            return il2cpp::create_object<app::Int16Storage>(get_class());
        }
    } // namespace Int16Storage
} // namespace app::classes::types