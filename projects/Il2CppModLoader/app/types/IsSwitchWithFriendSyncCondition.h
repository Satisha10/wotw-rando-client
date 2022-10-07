#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsSwitchWithFriendSyncCondition {
        namespace {
            app::IsSwitchWithFriendSyncCondition__Class* type_info_ref = nullptr;
        }
        app::IsSwitchWithFriendSyncCondition__Class** type_info = &type_info_ref;
        inline app::IsSwitchWithFriendSyncCondition__Class* get_class() {
            return il2cpp::get_class<app::IsSwitchWithFriendSyncCondition__Class>(type_info, "", "IsSwitchWithFriendSyncCondition");
        }
        inline app::IsSwitchWithFriendSyncCondition* create() {
            return il2cpp::create_object<app::IsSwitchWithFriendSyncCondition>(get_class());
        }
    } // namespace IsSwitchWithFriendSyncCondition
} // namespace app::classes::types