#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRScreenshots_RequestScreenshot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRScreenshots_RequestScreenshot__Class** type_info;
        inline app::IVRScreenshots_RequestScreenshot__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_RequestScreenshot__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_RequestScreenshot");
        }
        inline app::IVRScreenshots_RequestScreenshot* create() {
            return il2cpp::create_object<app::IVRScreenshots_RequestScreenshot>(get_class());
        }
    } // namespace IVRScreenshots_RequestScreenshot
} // namespace app::classes::types