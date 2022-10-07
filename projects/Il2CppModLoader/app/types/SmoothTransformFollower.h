#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SmoothTransformFollower {
        namespace {
            app::SmoothTransformFollower__Class* type_info_ref = nullptr;
        }
        app::SmoothTransformFollower__Class** type_info = &type_info_ref;
        inline app::SmoothTransformFollower__Class* get_class() {
            return il2cpp::get_class<app::SmoothTransformFollower__Class>(type_info, "", "SmoothTransformFollower");
        }
        inline app::SmoothTransformFollower* create() {
            return il2cpp::create_object<app::SmoothTransformFollower>(get_class());
        }
    } // namespace SmoothTransformFollower
} // namespace app::classes::types