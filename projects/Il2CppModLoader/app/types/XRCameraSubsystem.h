#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XRCameraSubsystem {
        namespace {
            app::XRCameraSubsystem__Class* type_info_ref = nullptr;
        }
        app::XRCameraSubsystem__Class** type_info = &type_info_ref;
        inline app::XRCameraSubsystem__Class* get_class() {
            return il2cpp::get_class<app::XRCameraSubsystem__Class>(type_info, "UnityEngine.Experimental.XR", "XRCameraSubsystem");
        }
        inline app::XRCameraSubsystem* create() {
            return il2cpp::create_object<app::XRCameraSubsystem>(get_class());
        }
    } // namespace XRCameraSubsystem
} // namespace app::classes::types