#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace P3D_Brush_LightPaintBlur {
        extern IL2CPP_MODLOADER_DLLEXPORT app::P3D_Brush_LightPaintBlur__Class** type_info;
        inline app::P3D_Brush_LightPaintBlur__Class* get_class() {
            return il2cpp::get_nested_class<app::P3D_Brush_LightPaintBlur__Class>(type_info, "", "P3D_Brush", "LightPaintBlur");
        }
        inline app::P3D_Brush_LightPaintBlur* create() {
            return il2cpp::create_object<app::P3D_Brush_LightPaintBlur>(get_class());
        }
    } // namespace P3D_Brush_LightPaintBlur
} // namespace app::classes::types