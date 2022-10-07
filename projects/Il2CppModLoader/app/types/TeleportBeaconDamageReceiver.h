#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TeleportBeaconDamageReceiver {
        namespace {
            app::TeleportBeaconDamageReceiver__Class* type_info_ref = nullptr;
        }
        app::TeleportBeaconDamageReceiver__Class** type_info = &type_info_ref;
        inline app::TeleportBeaconDamageReceiver__Class* get_class() {
            return il2cpp::get_class<app::TeleportBeaconDamageReceiver__Class>(type_info, "", "TeleportBeaconDamageReceiver");
        }
        inline app::TeleportBeaconDamageReceiver* create() {
            return il2cpp::create_object<app::TeleportBeaconDamageReceiver>(get_class());
        }
    } // namespace TeleportBeaconDamageReceiver
} // namespace app::classes::types