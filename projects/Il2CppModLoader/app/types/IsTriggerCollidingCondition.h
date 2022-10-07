#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsTriggerCollidingCondition {
        namespace {
            app::IsTriggerCollidingCondition__Class* type_info_ref = nullptr;
        }
        app::IsTriggerCollidingCondition__Class** type_info = &type_info_ref;
        inline app::IsTriggerCollidingCondition__Class* get_class() {
            return il2cpp::get_class<app::IsTriggerCollidingCondition__Class>(type_info, "", "IsTriggerCollidingCondition");
        }
        inline app::IsTriggerCollidingCondition* create() {
            return il2cpp::create_object<app::IsTriggerCollidingCondition>(get_class());
        }
    } // namespace IsTriggerCollidingCondition
} // namespace app::classes::types