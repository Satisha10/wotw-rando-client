#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BushSetupController {
        namespace {
            app::BushSetupController__Class* type_info_ref = nullptr;
        }
        app::BushSetupController__Class** type_info = &type_info_ref;
        inline app::BushSetupController__Class* get_class() {
            return il2cpp::get_class<app::BushSetupController__Class>(type_info, "", "BushSetupController");
        }
        inline app::BushSetupController* create() {
            return il2cpp::create_object<app::BushSetupController>(get_class());
        }
    } // namespace BushSetupController
} // namespace app::classes::types