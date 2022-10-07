#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvasEditorTextureCache__Array {
        namespace {
            app::LightCanvasEditorTextureCache__Array__Class* type_info_ref = nullptr;
        }
        app::LightCanvasEditorTextureCache__Array__Class** type_info = &type_info_ref;
        inline app::LightCanvasEditorTextureCache__Array__Class* get_class() {
            return il2cpp::get_class<app::LightCanvasEditorTextureCache__Array__Class>(type_info, "", "LightCanvasEditorTextureCache[]");
        }
        inline app::LightCanvasEditorTextureCache__Array* create() {
            return il2cpp::create_object<app::LightCanvasEditorTextureCache__Array>(get_class());
        }
    } // namespace LightCanvasEditorTextureCache__Array
} // namespace app::classes::types