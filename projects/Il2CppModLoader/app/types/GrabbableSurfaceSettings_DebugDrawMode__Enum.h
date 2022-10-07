#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrabbableSurfaceSettings_DebugDrawMode__Enum {
        namespace {
            app::GrabbableSurfaceSettings_DebugDrawMode__Enum__Class* type_info_ref = nullptr;
        }
        app::GrabbableSurfaceSettings_DebugDrawMode__Enum__Class** type_info = &type_info_ref;
        inline app::GrabbableSurfaceSettings_DebugDrawMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GrabbableSurfaceSettings_DebugDrawMode__Enum__Class>(type_info, "", "GrabbableSurfaceSettings", "DebugDrawMode");
        }
        inline app::GrabbableSurfaceSettings_DebugDrawMode__Enum* create() {
            return il2cpp::create_object<app::GrabbableSurfaceSettings_DebugDrawMode__Enum>(get_class());
        }
    } // namespace GrabbableSurfaceSettings_DebugDrawMode__Enum
} // namespace app::classes::types