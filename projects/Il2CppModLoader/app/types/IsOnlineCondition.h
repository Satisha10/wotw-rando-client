#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsOnlineCondition {
        namespace {
            app::IsOnlineCondition__Class* type_info_ref = nullptr;
        }
        app::IsOnlineCondition__Class** type_info = &type_info_ref;
        inline app::IsOnlineCondition__Class* get_class() {
            return il2cpp::get_class<app::IsOnlineCondition__Class>(type_info, "", "IsOnlineCondition");
        }
        inline app::IsOnlineCondition* create() {
            return il2cpp::create_object<app::IsOnlineCondition>(get_class());
        }
    } // namespace IsOnlineCondition
} // namespace app::classes::types