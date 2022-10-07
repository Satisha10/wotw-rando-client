#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadSceneParameters {
        namespace {
            app::LoadSceneParameters__Class* type_info_ref = nullptr;
        }
        app::LoadSceneParameters__Class** type_info = &type_info_ref;
        inline app::LoadSceneParameters__Class* get_class() {
            return il2cpp::get_class<app::LoadSceneParameters__Class>(type_info, "UnityEngine.SceneManagement", "LoadSceneParameters");
        }
        inline app::LoadSceneParameters* create() {
            return il2cpp::create_object<app::LoadSceneParameters>(get_class());
        }
        inline app::LoadSceneParameters__Boxed* box(app::LoadSceneParameters value) {
            return il2cpp::box_value<app::LoadSceneParameters__Boxed>(get_class(), value);
        }
    } // namespace LoadSceneParameters
} // namespace app::classes::types