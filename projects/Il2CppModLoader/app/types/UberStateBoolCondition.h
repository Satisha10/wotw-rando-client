#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateBoolCondition {
        namespace {
            app::UberStateBoolCondition__Class* type_info_ref = nullptr;
        }
        app::UberStateBoolCondition__Class** type_info = &type_info_ref;
        inline app::UberStateBoolCondition__Class* get_class() {
            return il2cpp::get_class<app::UberStateBoolCondition__Class>(type_info, "", "UberStateBoolCondition");
        }
        inline app::UberStateBoolCondition* create() {
            return il2cpp::create_object<app::UberStateBoolCondition>(get_class());
        }
    } // namespace UberStateBoolCondition
} // namespace app::classes::types