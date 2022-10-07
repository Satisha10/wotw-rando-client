#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneRoot_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneRoot_c__Class** type_info;
        inline app::SceneRoot_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneRoot_c__Class>(type_info, "", "SceneRoot", "<>c");
        }
        inline app::SceneRoot_c* create() {
            return il2cpp::create_object<app::SceneRoot_c>(get_class());
        }
    } // namespace SceneRoot_c
} // namespace app::classes::types