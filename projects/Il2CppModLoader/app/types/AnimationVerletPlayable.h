#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationVerletPlayable {
        namespace {
            app::AnimationVerletPlayable__Class* type_info_ref = nullptr;
        }
        app::AnimationVerletPlayable__Class** type_info = &type_info_ref;
        inline app::AnimationVerletPlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimationVerletPlayable__Class>(type_info, "UnityEngine.Animations", "AnimationVerletPlayable");
        }
        inline app::AnimationVerletPlayable* create() {
            return il2cpp::create_object<app::AnimationVerletPlayable>(get_class());
        }
        inline app::AnimationVerletPlayable__Boxed* box(app::AnimationVerletPlayable value) {
            return il2cpp::box_value<app::AnimationVerletPlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimationVerletPlayable
} // namespace app::classes::types