#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitReaction_HitPointEffector__Array {
        namespace {
            app::HitReaction_HitPointEffector__Array__Class* type_info_ref = nullptr;
        }
        app::HitReaction_HitPointEffector__Array__Class** type_info = &type_info_ref;
        inline app::HitReaction_HitPointEffector__Array__Class* get_class() {
            return il2cpp::get_class<app::HitReaction_HitPointEffector__Array__Class>(type_info, "RootMotion.FinalIK", "HitReaction+HitPointEffector[]");
        }
        inline app::HitReaction_HitPointEffector__Array* create() {
            return il2cpp::create_object<app::HitReaction_HitPointEffector__Array>(get_class());
        }
    } // namespace HitReaction_HitPointEffector__Array
} // namespace app::classes::types