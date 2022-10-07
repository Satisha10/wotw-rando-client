#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerInRangeCondition {
        namespace {
            app::PlayerInRangeCondition__Class* type_info_ref = nullptr;
        }
        app::PlayerInRangeCondition__Class** type_info = &type_info_ref;
        inline app::PlayerInRangeCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerInRangeCondition__Class>(type_info, "fsm", "PlayerInRangeCondition");
        }
        inline app::PlayerInRangeCondition* create() {
            return il2cpp::create_object<app::PlayerInRangeCondition>(get_class());
        }
    } // namespace PlayerInRangeCondition
} // namespace app::classes::types