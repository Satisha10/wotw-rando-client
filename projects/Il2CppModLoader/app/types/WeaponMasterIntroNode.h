#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeaponMasterIntroNode {
        namespace {
            app::WeaponMasterIntroNode__Class* type_info_ref = nullptr;
        }
        app::WeaponMasterIntroNode__Class** type_info = &type_info_ref;
        inline app::WeaponMasterIntroNode__Class* get_class() {
            return il2cpp::get_class<app::WeaponMasterIntroNode__Class>(type_info, "", "WeaponMasterIntroNode");
        }
        inline app::WeaponMasterIntroNode* create() {
            return il2cpp::create_object<app::WeaponMasterIntroNode>(get_class());
        }
    } // namespace WeaponMasterIntroNode
} // namespace app::classes::types