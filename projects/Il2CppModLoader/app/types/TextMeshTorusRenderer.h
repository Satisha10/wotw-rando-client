#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextMeshTorusRenderer {
        namespace {
            app::TextMeshTorusRenderer__Class* type_info_ref = nullptr;
        }
        app::TextMeshTorusRenderer__Class** type_info = &type_info_ref;
        inline app::TextMeshTorusRenderer__Class* get_class() {
            return il2cpp::get_class<app::TextMeshTorusRenderer__Class>(type_info, "CatlikeCoding.TextBox", "TextMeshTorusRenderer");
        }
        inline app::TextMeshTorusRenderer* create() {
            return il2cpp::create_object<app::TextMeshTorusRenderer>(get_class());
        }
    } // namespace TextMeshTorusRenderer
} // namespace app::classes::types