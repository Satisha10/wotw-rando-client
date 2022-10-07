#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlReaderSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlReaderSettings__Class** type_info;
        inline app::XmlReaderSettings__Class* get_class() {
            return il2cpp::get_class<app::XmlReaderSettings__Class>(type_info, "System.Xml", "XmlReaderSettings");
        }
        inline app::XmlReaderSettings* create() {
            return il2cpp::create_object<app::XmlReaderSettings>(get_class());
        }
    } // namespace XmlReaderSettings
} // namespace app::classes::types