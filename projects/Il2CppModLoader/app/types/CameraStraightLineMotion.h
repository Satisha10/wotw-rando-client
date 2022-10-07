#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraStraightLineMotion {
        namespace {
            app::CameraStraightLineMotion__Class* type_info_ref = nullptr;
        }
        app::CameraStraightLineMotion__Class** type_info = &type_info_ref;
        inline app::CameraStraightLineMotion__Class* get_class() {
            return il2cpp::get_class<app::CameraStraightLineMotion__Class>(type_info, "", "CameraStraightLineMotion");
        }
        inline app::CameraStraightLineMotion* create() {
            return il2cpp::create_object<app::CameraStraightLineMotion>(get_class());
        }
    } // namespace CameraStraightLineMotion
} // namespace app::classes::types