#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProbabilityCondition {
        namespace {
            app::ProbabilityCondition__Class* type_info_ref = nullptr;
        }
        app::ProbabilityCondition__Class** type_info = &type_info_ref;
        inline app::ProbabilityCondition__Class* get_class() {
            return il2cpp::get_class<app::ProbabilityCondition__Class>(type_info, "Moon.BehaviourSystem", "ProbabilityCondition");
        }
        inline app::ProbabilityCondition* create() {
            return il2cpp::create_object<app::ProbabilityCondition>(get_class());
        }
    } // namespace ProbabilityCondition
} // namespace app::classes::types