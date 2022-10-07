#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimationAssociation_AnimationAssociationEntry__Array {
        namespace {
            app::MoonAnimationAssociation_AnimationAssociationEntry__Array__Class* type_info_ref = nullptr;
        }
        app::MoonAnimationAssociation_AnimationAssociationEntry__Array__Class** type_info = &type_info_ref;
        inline app::MoonAnimationAssociation_AnimationAssociationEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimationAssociation_AnimationAssociationEntry__Array__Class>(type_info, "", "MoonAnimationAssociation+AnimationAssociationEntry[]");
        }
        inline app::MoonAnimationAssociation_AnimationAssociationEntry__Array* create() {
            return il2cpp::create_object<app::MoonAnimationAssociation_AnimationAssociationEntry__Array>(get_class());
        }
    } // namespace MoonAnimationAssociation_AnimationAssociationEntry__Array
} // namespace app::classes::types