#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XAttributeWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XAttributeWrapper__Class** type_info;
        inline app::XAttributeWrapper__Class* get_class() {
            return il2cpp::get_class<app::XAttributeWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XAttributeWrapper");
        }
        inline app::XAttributeWrapper* create() {
            return il2cpp::create_object<app::XAttributeWrapper>(get_class());
        }
    } // namespace XAttributeWrapper
} // namespace app::classes::types