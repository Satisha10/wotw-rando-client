#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlIgnoreNamespaceReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlIgnoreNamespaceReader__Class** type_info;
        inline app::XmlIgnoreNamespaceReader__Class* get_class() {
            return il2cpp::get_class<app::XmlIgnoreNamespaceReader__Class>(type_info, "System.Data", "XmlIgnoreNamespaceReader");
        }
        inline app::XmlIgnoreNamespaceReader* create() {
            return il2cpp::create_object<app::XmlIgnoreNamespaceReader>(get_class());
        }
    } // namespace XmlIgnoreNamespaceReader
} // namespace app::classes::types