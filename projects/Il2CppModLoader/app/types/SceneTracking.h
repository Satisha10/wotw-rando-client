#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneTracking {
        namespace {
            app::SceneTracking__Class* type_info_ref = nullptr;
        }
        app::SceneTracking__Class** type_info = &type_info_ref;
        inline app::SceneTracking__Class* get_class() {
            return il2cpp::get_class<app::SceneTracking__Class>(type_info, "Moon.EditorTools.SceneTracking", "SceneTracking");
        }
        inline app::SceneTracking* create() {
            return il2cpp::create_object<app::SceneTracking>(get_class());
        }
    } // namespace SceneTracking
} // namespace app::classes::types