#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NamespaceListV1Compat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NamespaceListV1Compat__Class** type_info;
        inline app::NamespaceListV1Compat__Class* get_class() {
            return il2cpp::get_class<app::NamespaceListV1Compat__Class>(type_info, "System.Xml.Schema", "NamespaceListV1Compat");
        }
        inline app::NamespaceListV1Compat* create() {
            return il2cpp::create_object<app::NamespaceListV1Compat>(get_class());
        }
    } // namespace NamespaceListV1Compat
} // namespace app::classes::types