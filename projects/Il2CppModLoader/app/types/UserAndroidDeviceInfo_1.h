#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserAndroidDeviceInfo_1 {
        namespace {
            app::UserAndroidDeviceInfo_1__Class* type_info_ref = nullptr;
        }
        app::UserAndroidDeviceInfo_1__Class** type_info = &type_info_ref;
        inline app::UserAndroidDeviceInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserAndroidDeviceInfo_1__Class>(type_info, "PlayFab.ServerModels", "UserAndroidDeviceInfo");
        }
        inline app::UserAndroidDeviceInfo_1* create() {
            return il2cpp::create_object<app::UserAndroidDeviceInfo_1>(get_class());
        }
    } // namespace UserAndroidDeviceInfo_1
} // namespace app::classes::types