#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ContrastGain {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_ContrastGain__Class** type_info;
        inline app::ShaderID_ContrastGain__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ContrastGain__Class>(type_info, "Colorful", "ShaderID_ContrastGain");
        }
        inline app::ShaderID_ContrastGain* create() {
            return il2cpp::create_object<app::ShaderID_ContrastGain>(get_class());
        }
    } // namespace ShaderID_ContrastGain
} // namespace app::classes::types