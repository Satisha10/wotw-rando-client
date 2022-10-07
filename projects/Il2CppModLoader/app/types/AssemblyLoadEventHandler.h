#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssemblyLoadEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AssemblyLoadEventHandler__Class** type_info;
        inline app::AssemblyLoadEventHandler__Class* get_class() {
            return il2cpp::get_class<app::AssemblyLoadEventHandler__Class>(type_info, "System", "AssemblyLoadEventHandler");
        }
        inline app::AssemblyLoadEventHandler* create() {
            return il2cpp::create_object<app::AssemblyLoadEventHandler>(get_class());
        }
    } // namespace AssemblyLoadEventHandler
} // namespace app::classes::types