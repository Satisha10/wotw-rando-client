#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_AttributeProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeDescriptor_AttributeProvider__Class** type_info;
        inline app::TypeDescriptor_AttributeProvider__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_AttributeProvider__Class>(type_info, "System.ComponentModel", "TypeDescriptor", "AttributeProvider");
        }
        inline app::TypeDescriptor_AttributeProvider* create() {
            return il2cpp::create_object<app::TypeDescriptor_AttributeProvider>(get_class());
        }
    } // namespace TypeDescriptor_AttributeProvider
} // namespace app::classes::types