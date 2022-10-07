#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HmdMatrix44_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HmdMatrix44_t__Class** type_info;
        inline app::HmdMatrix44_t__Class* get_class() {
            return il2cpp::get_class<app::HmdMatrix44_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "HmdMatrix44_t");
        }
        inline app::HmdMatrix44_t* create() {
            return il2cpp::create_object<app::HmdMatrix44_t>(get_class());
        }
        inline app::HmdMatrix44_t__Boxed* box(app::HmdMatrix44_t value) {
            return il2cpp::box_value<app::HmdMatrix44_t__Boxed>(get_class(), value);
        }
    } // namespace HmdMatrix44_t
} // namespace app::classes::types