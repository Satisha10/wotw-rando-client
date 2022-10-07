#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocomotionIdleBehaviour {
        namespace {
            app::SpiderBossLocomotionIdleBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLocomotionIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocomotionIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocomotionIdleBehaviour__Class>(type_info, "", "SpiderBossLocomotionIdleBehaviour");
        }
        inline app::SpiderBossLocomotionIdleBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocomotionIdleBehaviour>(get_class());
        }
    } // namespace SpiderBossLocomotionIdleBehaviour
} // namespace app::classes::types