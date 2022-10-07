#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetupModifierTargetGizmoAttribute {
        namespace {
            app::SetupModifierTargetGizmoAttribute__Class* type_info_ref = nullptr;
        }
        app::SetupModifierTargetGizmoAttribute__Class** type_info = &type_info_ref;
        inline app::SetupModifierTargetGizmoAttribute__Class* get_class() {
            return il2cpp::get_class<app::SetupModifierTargetGizmoAttribute__Class>(type_info, "", "SetupModifierTargetGizmoAttribute");
        }
        inline app::SetupModifierTargetGizmoAttribute* create() {
            return il2cpp::create_object<app::SetupModifierTargetGizmoAttribute>(get_class());
        }
    } // namespace SetupModifierTargetGizmoAttribute
} // namespace app::classes::types