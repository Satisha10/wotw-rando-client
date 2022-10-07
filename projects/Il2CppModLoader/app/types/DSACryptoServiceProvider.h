#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DSACryptoServiceProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DSACryptoServiceProvider__Class** type_info;
        inline app::DSACryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::DSACryptoServiceProvider__Class>(type_info, "System.Security.Cryptography", "DSACryptoServiceProvider");
        }
        inline app::DSACryptoServiceProvider* create() {
            return il2cpp::create_object<app::DSACryptoServiceProvider>(get_class());
        }
    } // namespace DSACryptoServiceProvider
} // namespace app::classes::types