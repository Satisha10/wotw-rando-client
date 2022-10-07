#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRScreenshots_UpdateScreenshotProgress {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRScreenshots_UpdateScreenshotProgress__Class** type_info;
        inline app::IVRScreenshots_UpdateScreenshotProgress__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_UpdateScreenshotProgress__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_UpdateScreenshotProgress");
        }
        inline app::IVRScreenshots_UpdateScreenshotProgress* create() {
            return il2cpp::create_object<app::IVRScreenshots_UpdateScreenshotProgress>(get_class());
        }
    } // namespace IVRScreenshots_UpdateScreenshotProgress
} // namespace app::classes::types