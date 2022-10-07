#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_UpdateKinect {
        namespace {
            app::EarlyUpdate_UpdateKinect__Class* type_info_ref = nullptr;
        }
        app::EarlyUpdate_UpdateKinect__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_UpdateKinect__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_UpdateKinect__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "UpdateKinect");
        }
        inline app::EarlyUpdate_UpdateKinect* create() {
            return il2cpp::create_object<app::EarlyUpdate_UpdateKinect>(get_class());
        }
        inline app::EarlyUpdate_UpdateKinect__Boxed* box(app::EarlyUpdate_UpdateKinect value) {
            return il2cpp::box_value<app::EarlyUpdate_UpdateKinect__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_UpdateKinect
} // namespace app::classes::types