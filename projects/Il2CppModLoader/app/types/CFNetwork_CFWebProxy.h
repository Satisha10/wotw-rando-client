#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CFNetwork_CFWebProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CFNetwork_CFWebProxy__Class** type_info;
        inline app::CFNetwork_CFWebProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::CFNetwork_CFWebProxy__Class>(type_info, "Mono.Net", "CFNetwork", "CFWebProxy");
        }
        inline app::CFNetwork_CFWebProxy* create() {
            return il2cpp::create_object<app::CFNetwork_CFWebProxy>(get_class());
        }
    } // namespace CFNetwork_CFWebProxy
} // namespace app::classes::types