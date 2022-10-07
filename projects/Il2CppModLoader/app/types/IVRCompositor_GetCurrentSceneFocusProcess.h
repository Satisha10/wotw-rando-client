#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetCurrentSceneFocusProcess {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_GetCurrentSceneFocusProcess__Class** type_info;
        inline app::IVRCompositor_GetCurrentSceneFocusProcess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetCurrentSceneFocusProcess__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetCurrentSceneFocusProcess");
        }
        inline app::IVRCompositor_GetCurrentSceneFocusProcess* create() {
            return il2cpp::create_object<app::IVRCompositor_GetCurrentSceneFocusProcess>(get_class());
        }
    } // namespace IVRCompositor_GetCurrentSceneFocusProcess
} // namespace app::classes::types