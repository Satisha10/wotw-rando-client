#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayableBehaviour {
        namespace {
            app::PlayableBehaviour__Class* type_info_ref = nullptr;
        }
        app::PlayableBehaviour__Class** type_info = &type_info_ref;
        inline app::PlayableBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PlayableBehaviour__Class>(type_info, "UnityEngine.Playables", "PlayableBehaviour");
        }
        inline app::PlayableBehaviour* create() {
            return il2cpp::create_object<app::PlayableBehaviour>(get_class());
        }
    } // namespace PlayableBehaviour
} // namespace app::classes::types