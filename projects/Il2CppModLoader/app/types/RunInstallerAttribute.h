#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RunInstallerAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RunInstallerAttribute__Class** type_info;
        inline app::RunInstallerAttribute__Class* get_class() {
            return il2cpp::get_class<app::RunInstallerAttribute__Class>(type_info, "System.ComponentModel", "RunInstallerAttribute");
        }
        inline app::RunInstallerAttribute* create() {
            return il2cpp::create_object<app::RunInstallerAttribute>(get_class());
        }
    } // namespace RunInstallerAttribute
} // namespace app::classes::types