#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectTypeDescriptionProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectTypeDescriptionProvider__Class** type_info;
        inline app::ReflectTypeDescriptionProvider__Class* get_class() {
            return il2cpp::get_class<app::ReflectTypeDescriptionProvider__Class>(type_info, "System.ComponentModel", "ReflectTypeDescriptionProvider");
        }
        inline app::ReflectTypeDescriptionProvider* create() {
            return il2cpp::create_object<app::ReflectTypeDescriptionProvider>(get_class());
        }
    } // namespace ReflectTypeDescriptionProvider
} // namespace app::classes::types