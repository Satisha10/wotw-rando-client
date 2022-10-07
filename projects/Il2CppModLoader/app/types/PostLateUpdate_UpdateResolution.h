#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateResolution {
        namespace {
            app::PostLateUpdate_UpdateResolution__Class* type_info_ref = nullptr;
        }
        app::PostLateUpdate_UpdateResolution__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_UpdateResolution__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateResolution__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateResolution");
        }
        inline app::PostLateUpdate_UpdateResolution* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateResolution>(get_class());
        }
        inline app::PostLateUpdate_UpdateResolution__Boxed* box(app::PostLateUpdate_UpdateResolution value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateResolution__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateResolution
} // namespace app::classes::types