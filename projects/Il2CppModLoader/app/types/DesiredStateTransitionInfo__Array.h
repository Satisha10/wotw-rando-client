#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesiredStateTransitionInfo__Array {
        namespace {
            app::DesiredStateTransitionInfo__Array__Class* type_info_ref = nullptr;
        }
        app::DesiredStateTransitionInfo__Array__Class** type_info = &type_info_ref;
        inline app::DesiredStateTransitionInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::DesiredStateTransitionInfo__Array__Class>(type_info, "Moon", "DesiredStateTransitionInfo[]");
        }
        inline app::DesiredStateTransitionInfo__Array* create() {
            return il2cpp::create_object<app::DesiredStateTransitionInfo__Array>(get_class());
        }
    } // namespace DesiredStateTransitionInfo__Array
} // namespace app::classes::types