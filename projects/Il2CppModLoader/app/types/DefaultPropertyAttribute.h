#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultPropertyAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultPropertyAttribute__Class** type_info;
        inline app::DefaultPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultPropertyAttribute__Class>(type_info, "System.ComponentModel", "DefaultPropertyAttribute");
        }
        inline app::DefaultPropertyAttribute* create() {
            return il2cpp::create_object<app::DefaultPropertyAttribute>(get_class());
        }
    } // namespace DefaultPropertyAttribute
} // namespace app::classes::types