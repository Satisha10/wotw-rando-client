#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationScriptPlayable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationScriptPlayable__Class** type_info;
        inline app::AnimationScriptPlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimationScriptPlayable__Class>(type_info, "UnityEngine.Experimental.Animations", "AnimationScriptPlayable");
        }
        inline app::AnimationScriptPlayable* create() {
            return il2cpp::create_object<app::AnimationScriptPlayable>(get_class());
        }
        inline app::AnimationScriptPlayable__Boxed* box(app::AnimationScriptPlayable value) {
            return il2cpp::box_value<app::AnimationScriptPlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimationScriptPlayable
} // namespace app::classes::types