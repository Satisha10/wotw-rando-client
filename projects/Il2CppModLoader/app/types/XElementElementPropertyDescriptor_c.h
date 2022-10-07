#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XElementElementPropertyDescriptor_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XElementElementPropertyDescriptor_c__Class** type_info;
        inline app::XElementElementPropertyDescriptor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XElementElementPropertyDescriptor_c__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XElementElementPropertyDescriptor", "<>c");
        }
        inline app::XElementElementPropertyDescriptor_c* create() {
            return il2cpp::create_object<app::XElementElementPropertyDescriptor_c>(get_class());
        }
    } // namespace XElementElementPropertyDescriptor_c
} // namespace app::classes::types