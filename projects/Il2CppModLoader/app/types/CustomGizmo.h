#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomGizmo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CustomGizmo__Class** type_info;
        inline app::CustomGizmo__Class* get_class() {
            return il2cpp::get_class<app::CustomGizmo__Class>(type_info, "Moon", "CustomGizmo");
        }
        inline app::CustomGizmo* create() {
            return il2cpp::create_object<app::CustomGizmo>(get_class());
        }
    } // namespace CustomGizmo
} // namespace app::classes::types