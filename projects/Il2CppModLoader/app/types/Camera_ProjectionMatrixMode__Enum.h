#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Camera_ProjectionMatrixMode__Enum {
        namespace {
            app::Camera_ProjectionMatrixMode__Enum__Class* type_info_ref = nullptr;
        }
        app::Camera_ProjectionMatrixMode__Enum__Class** type_info = &type_info_ref;
        inline app::Camera_ProjectionMatrixMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Camera_ProjectionMatrixMode__Enum__Class>(type_info, "UnityEngine", "Camera", "ProjectionMatrixMode");
        }
        inline app::Camera_ProjectionMatrixMode__Enum* create() {
            return il2cpp::create_object<app::Camera_ProjectionMatrixMode__Enum>(get_class());
        }
    } // namespace Camera_ProjectionMatrixMode__Enum
} // namespace app::classes::types