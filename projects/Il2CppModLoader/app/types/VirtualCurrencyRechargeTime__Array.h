#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VirtualCurrencyRechargeTime__Array {
        namespace {
            app::VirtualCurrencyRechargeTime__Array__Class* type_info_ref = nullptr;
        }
        app::VirtualCurrencyRechargeTime__Array__Class** type_info = &type_info_ref;
        inline app::VirtualCurrencyRechargeTime__Array__Class* get_class() {
            return il2cpp::get_class<app::VirtualCurrencyRechargeTime__Array__Class>(type_info, "PlayFab.ClientModels", "VirtualCurrencyRechargeTime[]");
        }
        inline app::VirtualCurrencyRechargeTime__Array* create() {
            return il2cpp::create_object<app::VirtualCurrencyRechargeTime__Array>(get_class());
        }
    } // namespace VirtualCurrencyRechargeTime__Array
} // namespace app::classes::types