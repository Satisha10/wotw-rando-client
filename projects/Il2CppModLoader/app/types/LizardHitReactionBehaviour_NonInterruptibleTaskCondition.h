#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardHitReactionBehaviour_NonInterruptibleTaskCondition {
        namespace {
            app::LizardHitReactionBehaviour_NonInterruptibleTaskCondition__Class* type_info_ref = nullptr;
        }
        app::LizardHitReactionBehaviour_NonInterruptibleTaskCondition__Class** type_info = &type_info_ref;
        inline app::LizardHitReactionBehaviour_NonInterruptibleTaskCondition__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardHitReactionBehaviour_NonInterruptibleTaskCondition__Class>(type_info, "", "LizardHitReactionBehaviour", "NonInterruptibleTaskCondition");
        }
        inline app::LizardHitReactionBehaviour_NonInterruptibleTaskCondition* create() {
            return il2cpp::create_object<app::LizardHitReactionBehaviour_NonInterruptibleTaskCondition>(get_class());
        }
    } // namespace LizardHitReactionBehaviour_NonInterruptibleTaskCondition
} // namespace app::classes::types