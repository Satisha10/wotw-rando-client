#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaInfo__Class** type_info;
        inline app::XmlSchemaInfo__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaInfo__Class>(type_info, "System.Xml.Schema", "XmlSchemaInfo");
        }
        inline app::XmlSchemaInfo* create() {
            return il2cpp::create_object<app::XmlSchemaInfo>(get_class());
        }
    } // namespace XmlSchemaInfo
} // namespace app::classes::types