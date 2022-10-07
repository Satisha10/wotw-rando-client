#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RedeemCouponResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RedeemCouponResult_1__Class** type_info;
        inline app::RedeemCouponResult_1__Class* get_class() {
            return il2cpp::get_class<app::RedeemCouponResult_1__Class>(type_info, "PlayFab.ServerModels", "RedeemCouponResult");
        }
        inline app::RedeemCouponResult_1* create() {
            return il2cpp::create_object<app::RedeemCouponResult_1>(get_class());
        }
    } // namespace RedeemCouponResult_1
} // namespace app::classes::types