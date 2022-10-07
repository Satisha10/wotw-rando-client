#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetMirrorTextureGL {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_GetMirrorTextureGL__Class** type_info;
        inline app::IVRCompositor_GetMirrorTextureGL__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetMirrorTextureGL__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetMirrorTextureGL");
        }
        inline app::IVRCompositor_GetMirrorTextureGL* create() {
            return il2cpp::create_object<app::IVRCompositor_GetMirrorTextureGL>(get_class());
        }
    } // namespace IVRCompositor_GetMirrorTextureGL
} // namespace app::classes::types