#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PushNotificationRegistration__Array {
        namespace {
            app::PushNotificationRegistration__Array__Class* type_info_ref = nullptr;
        }
        app::PushNotificationRegistration__Array__Class** type_info = &type_info_ref;
        inline app::PushNotificationRegistration__Array__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationRegistration__Array__Class>(type_info, "PlayFab.ServerModels", "PushNotificationRegistration[]");
        }
        inline app::PushNotificationRegistration__Array* create() {
            return il2cpp::create_object<app::PushNotificationRegistration__Array>(get_class());
        }
    } // namespace PushNotificationRegistration__Array
} // namespace app::classes::types