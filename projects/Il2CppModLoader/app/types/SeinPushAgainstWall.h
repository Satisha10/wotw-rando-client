#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinPushAgainstWall {
        namespace {
            app::SeinPushAgainstWall__Class* type_info_ref = nullptr;
        }
        app::SeinPushAgainstWall__Class** type_info = &type_info_ref;
        inline app::SeinPushAgainstWall__Class* get_class() {
            return il2cpp::get_class<app::SeinPushAgainstWall__Class>(type_info, "", "SeinPushAgainstWall");
        }
        inline app::SeinPushAgainstWall* create() {
            return il2cpp::create_object<app::SeinPushAgainstWall>(get_class());
        }
    } // namespace SeinPushAgainstWall
} // namespace app::classes::types