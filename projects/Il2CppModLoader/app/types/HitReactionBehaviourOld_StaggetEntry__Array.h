#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviourOld_StaggetEntry__Array {
        namespace {
            app::HitReactionBehaviourOld_StaggetEntry__Array__Class* type_info_ref = nullptr;
        }
        app::HitReactionBehaviourOld_StaggetEntry__Array__Class** type_info = &type_info_ref;
        inline app::HitReactionBehaviourOld_StaggetEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::HitReactionBehaviourOld_StaggetEntry__Array__Class>(type_info, "Moon", "HitReactionBehaviourOld+StaggetEntry[]");
        }
        inline app::HitReactionBehaviourOld_StaggetEntry__Array* create() {
            return il2cpp::create_object<app::HitReactionBehaviourOld_StaggetEntry__Array>(get_class());
        }
    } // namespace HitReactionBehaviourOld_StaggetEntry__Array
} // namespace app::classes::types