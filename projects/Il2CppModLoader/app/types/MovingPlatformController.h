#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MovingPlatformController {
        namespace {
            app::MovingPlatformController__Class* type_info_ref = nullptr;
        }
        app::MovingPlatformController__Class** type_info = &type_info_ref;
        inline app::MovingPlatformController__Class* get_class() {
            return il2cpp::get_class<app::MovingPlatformController__Class>(type_info, "", "MovingPlatformController");
        }
        inline app::MovingPlatformController* create() {
            return il2cpp::create_object<app::MovingPlatformController>(get_class());
        }
    } // namespace MovingPlatformController
} // namespace app::classes::types