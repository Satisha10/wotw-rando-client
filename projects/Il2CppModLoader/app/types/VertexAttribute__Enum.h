#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VertexAttribute__Enum {
        namespace {
            app::VertexAttribute__Enum__Class* type_info_ref = nullptr;
        }
        app::VertexAttribute__Enum__Class** type_info = &type_info_ref;
        inline app::VertexAttribute__Enum__Class* get_class() {
            return il2cpp::get_class<app::VertexAttribute__Enum__Class>(type_info, "UnityEngine.Rendering", "VertexAttribute");
        }
        inline app::VertexAttribute__Enum* create() {
            return il2cpp::create_object<app::VertexAttribute__Enum>(get_class());
        }
    } // namespace VertexAttribute__Enum
} // namespace app::classes::types