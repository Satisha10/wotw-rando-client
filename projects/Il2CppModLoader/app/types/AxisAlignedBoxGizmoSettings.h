#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AxisAlignedBoxGizmoSettings {
        namespace {
            app::AxisAlignedBoxGizmoSettings__Class* type_info_ref = nullptr;
        }
        app::AxisAlignedBoxGizmoSettings__Class** type_info = &type_info_ref;
        inline app::AxisAlignedBoxGizmoSettings__Class* get_class() {
            return il2cpp::get_class<app::AxisAlignedBoxGizmoSettings__Class>(type_info, "Moon", "AxisAlignedBoxGizmoSettings");
        }
        inline app::AxisAlignedBoxGizmoSettings* create() {
            return il2cpp::create_object<app::AxisAlignedBoxGizmoSettings>(get_class());
        }
    } // namespace AxisAlignedBoxGizmoSettings
} // namespace app::classes::types