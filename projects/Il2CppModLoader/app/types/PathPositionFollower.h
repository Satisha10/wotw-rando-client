#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PathPositionFollower {
        namespace {
            app::PathPositionFollower__Class* type_info_ref = nullptr;
        }
        app::PathPositionFollower__Class** type_info = &type_info_ref;
        inline app::PathPositionFollower__Class* get_class() {
            return il2cpp::get_class<app::PathPositionFollower__Class>(type_info, "", "PathPositionFollower");
        }
        inline app::PathPositionFollower* create() {
            return il2cpp::create_object<app::PathPositionFollower>(get_class());
        }
    } // namespace PathPositionFollower
} // namespace app::classes::types