#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicPropertyCollection_DynamicPropertyReg {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicPropertyCollection_DynamicPropertyReg__Class** type_info;
        inline app::DynamicPropertyCollection_DynamicPropertyReg__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicPropertyCollection_DynamicPropertyReg__Class>(type_info, "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection", "DynamicPropertyReg");
        }
        inline app::DynamicPropertyCollection_DynamicPropertyReg* create() {
            return il2cpp::create_object<app::DynamicPropertyCollection_DynamicPropertyReg>(get_class());
        }
    } // namespace DynamicPropertyCollection_DynamicPropertyReg
} // namespace app::classes::types