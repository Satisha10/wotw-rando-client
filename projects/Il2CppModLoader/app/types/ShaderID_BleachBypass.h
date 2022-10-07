#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_BleachBypass {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_BleachBypass__Class** type_info;
        inline app::ShaderID_BleachBypass__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_BleachBypass__Class>(type_info, "Colorful", "ShaderID_BleachBypass");
        }
        inline app::ShaderID_BleachBypass* create() {
            return il2cpp::create_object<app::ShaderID_BleachBypass>(get_class());
        }
    } // namespace ShaderID_BleachBypass
} // namespace app::classes::types