#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FollowPositionRotation {
        namespace {
            app::FollowPositionRotation__Class* type_info_ref = nullptr;
        }
        app::FollowPositionRotation__Class** type_info = &type_info_ref;
        inline app::FollowPositionRotation__Class* get_class() {
            return il2cpp::get_class<app::FollowPositionRotation__Class>(type_info, "", "FollowPositionRotation");
        }
        inline app::FollowPositionRotation* create() {
            return il2cpp::create_object<app::FollowPositionRotation>(get_class());
        }
    } // namespace FollowPositionRotation
} // namespace app::classes::types