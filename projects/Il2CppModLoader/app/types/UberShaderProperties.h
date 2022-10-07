#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderProperties {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderProperties__Class** type_info;
        inline app::UberShaderProperties__Class* get_class() {
            return il2cpp::get_class<app::UberShaderProperties__Class>(type_info, "", "UberShaderProperties");
        }
        inline app::UberShaderProperties* create() {
            return il2cpp::create_object<app::UberShaderProperties>(get_class());
        }
    } // namespace UberShaderProperties
} // namespace app::classes::types