#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509ExtensionCollection_2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509ExtensionCollection_2__Class** type_info;
        inline app::X509ExtensionCollection_2__Class* get_class() {
            return il2cpp::get_class<app::X509ExtensionCollection_2__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ExtensionCollection");
        }
        inline app::X509ExtensionCollection_2* create() {
            return il2cpp::create_object<app::X509ExtensionCollection_2>(get_class());
        }
    } // namespace X509ExtensionCollection_2
} // namespace app::classes::types