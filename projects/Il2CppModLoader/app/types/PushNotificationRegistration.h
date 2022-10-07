#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PushNotificationRegistration {
        namespace {
            app::PushNotificationRegistration__Class* type_info_ref = nullptr;
        }
        app::PushNotificationRegistration__Class** type_info = &type_info_ref;
        inline app::PushNotificationRegistration__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationRegistration__Class>(type_info, "PlayFab.ServerModels", "PushNotificationRegistration");
        }
        inline app::PushNotificationRegistration* create() {
            return il2cpp::create_object<app::PushNotificationRegistration>(get_class());
        }
        inline app::PushNotificationRegistration__Array* create_array(int size) {
            return il2cpp::array_new<app::PushNotificationRegistration__Array>(get_class(), size);
        }
        inline app::PushNotificationRegistration__Array* create_array(const std::vector<app::PushNotificationRegistration*>& items) {
            return il2cpp::array_new<app::PushNotificationRegistration__Array>(get_class(), items);
        }
    } // namespace PushNotificationRegistration
} // namespace app::classes::types