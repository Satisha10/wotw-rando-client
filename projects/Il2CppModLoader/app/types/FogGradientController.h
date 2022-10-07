#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FogGradientController {
        namespace {
            app::FogGradientController__Class* type_info_ref = nullptr;
        }
        app::FogGradientController__Class** type_info = &type_info_ref;
        inline app::FogGradientController__Class* get_class() {
            return il2cpp::get_class<app::FogGradientController__Class>(type_info, "", "FogGradientController");
        }
        inline app::FogGradientController* create() {
            return il2cpp::create_object<app::FogGradientController>(get_class());
        }
    } // namespace FogGradientController
} // namespace app::classes::types