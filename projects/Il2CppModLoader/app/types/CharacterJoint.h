#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterJoint {
        namespace {
            app::CharacterJoint__Class* type_info_ref = nullptr;
        }
        app::CharacterJoint__Class** type_info = &type_info_ref;
        inline app::CharacterJoint__Class* get_class() {
            return il2cpp::get_class<app::CharacterJoint__Class>(type_info, "UnityEngine", "CharacterJoint");
        }
        inline app::CharacterJoint* create() {
            return il2cpp::create_object<app::CharacterJoint>(get_class());
        }
    } // namespace CharacterJoint
} // namespace app::classes::types