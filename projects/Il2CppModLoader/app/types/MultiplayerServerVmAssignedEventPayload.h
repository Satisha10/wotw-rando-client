#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmAssignedEventPayload {
        namespace {
            app::MultiplayerServerVmAssignedEventPayload__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerVmAssignedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerVmAssignedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmAssignedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerVmAssignedEventPayload");
        }
        inline app::MultiplayerServerVmAssignedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerVmAssignedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerVmAssignedEventPayload
} // namespace app::classes::types