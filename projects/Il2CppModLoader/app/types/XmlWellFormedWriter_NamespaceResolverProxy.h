#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_NamespaceResolverProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlWellFormedWriter_NamespaceResolverProxy__Class** type_info;
        inline app::XmlWellFormedWriter_NamespaceResolverProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_NamespaceResolverProxy__Class>(type_info, "System.Xml", "XmlWellFormedWriter", "NamespaceResolverProxy");
        }
        inline app::XmlWellFormedWriter_NamespaceResolverProxy* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_NamespaceResolverProxy>(get_class());
        }
    } // namespace XmlWellFormedWriter_NamespaceResolverProxy
} // namespace app::classes::types