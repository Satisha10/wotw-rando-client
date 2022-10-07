#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerHoldingTorchCondition {
        namespace {
            app::PlayerHoldingTorchCondition__Class* type_info_ref = nullptr;
        }
        app::PlayerHoldingTorchCondition__Class** type_info = &type_info_ref;
        inline app::PlayerHoldingTorchCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerHoldingTorchCondition__Class>(type_info, "", "PlayerHoldingTorchCondition");
        }
        inline app::PlayerHoldingTorchCondition* create() {
            return il2cpp::create_object<app::PlayerHoldingTorchCondition>(get_class());
        }
    } // namespace PlayerHoldingTorchCondition
} // namespace app::classes::types