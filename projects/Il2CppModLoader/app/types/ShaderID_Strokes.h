#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Strokes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Strokes__Class** type_info;
        inline app::ShaderID_Strokes__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Strokes__Class>(type_info, "Colorful", "ShaderID_Strokes");
        }
        inline app::ShaderID_Strokes* create() {
            return il2cpp::create_object<app::ShaderID_Strokes>(get_class());
        }
    } // namespace ShaderID_Strokes
} // namespace app::classes::types