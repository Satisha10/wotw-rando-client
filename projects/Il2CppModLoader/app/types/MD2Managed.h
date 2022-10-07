#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MD2Managed {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MD2Managed__Class** type_info;
        inline app::MD2Managed__Class* get_class() {
            return il2cpp::get_class<app::MD2Managed__Class>(type_info, "Mono.Security.Cryptography", "MD2Managed");
        }
        inline app::MD2Managed* create() {
            return il2cpp::create_object<app::MD2Managed>(get_class());
        }
    } // namespace MD2Managed
} // namespace app::classes::types