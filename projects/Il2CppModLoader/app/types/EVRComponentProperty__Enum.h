#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRComponentProperty__Enum {
        namespace {
            app::EVRComponentProperty__Enum__Class* type_info_ref = nullptr;
        }
        app::EVRComponentProperty__Enum__Class** type_info = &type_info_ref;
        inline app::EVRComponentProperty__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRComponentProperty__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRComponentProperty");
        }
        inline app::EVRComponentProperty__Enum* create() {
            return il2cpp::create_object<app::EVRComponentProperty__Enum>(get_class());
        }
    } // namespace EVRComponentProperty__Enum
} // namespace app::classes::types