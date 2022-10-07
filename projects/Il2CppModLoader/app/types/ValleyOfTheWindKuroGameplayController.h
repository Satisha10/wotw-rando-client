#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValleyOfTheWindKuroGameplayController {
        namespace {
            app::ValleyOfTheWindKuroGameplayController__Class* type_info_ref = nullptr;
        }
        app::ValleyOfTheWindKuroGameplayController__Class** type_info = &type_info_ref;
        inline app::ValleyOfTheWindKuroGameplayController__Class* get_class() {
            return il2cpp::get_class<app::ValleyOfTheWindKuroGameplayController__Class>(type_info, "", "ValleyOfTheWindKuroGameplayController");
        }
        inline app::ValleyOfTheWindKuroGameplayController* create() {
            return il2cpp::create_object<app::ValleyOfTheWindKuroGameplayController>(get_class());
        }
    } // namespace ValleyOfTheWindKuroGameplayController
} // namespace app::classes::types