#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SHA512 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SHA512__Class** type_info;
        inline app::SHA512__Class* get_class() {
            return il2cpp::get_class<app::SHA512__Class>(type_info, "System.Security.Cryptography", "SHA512");
        }
        inline app::SHA512* create() {
            return il2cpp::create_object<app::SHA512>(get_class());
        }
    } // namespace SHA512
} // namespace app::classes::types