#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetCameraSettingsAction {
        namespace {
            app::SetCameraSettingsAction__Class* type_info_ref = nullptr;
        }
        app::SetCameraSettingsAction__Class** type_info = &type_info_ref;
        inline app::SetCameraSettingsAction__Class* get_class() {
            return il2cpp::get_class<app::SetCameraSettingsAction__Class>(type_info, "", "SetCameraSettingsAction");
        }
        inline app::SetCameraSettingsAction* create() {
            return il2cpp::create_object<app::SetCameraSettingsAction>(get_class());
        }
    } // namespace SetCameraSettingsAction
} // namespace app::classes::types