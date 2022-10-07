#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerHoldingLarvaCondition {
        namespace {
            app::PlayerHoldingLarvaCondition__Class* type_info_ref = nullptr;
        }
        app::PlayerHoldingLarvaCondition__Class** type_info = &type_info_ref;
        inline app::PlayerHoldingLarvaCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerHoldingLarvaCondition__Class>(type_info, "", "PlayerHoldingLarvaCondition");
        }
        inline app::PlayerHoldingLarvaCondition* create() {
            return il2cpp::create_object<app::PlayerHoldingLarvaCondition>(get_class());
        }
    } // namespace PlayerHoldingLarvaCondition
} // namespace app::classes::types