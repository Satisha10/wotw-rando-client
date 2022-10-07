#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse {
        namespace {
            app::ISteamMatchmakingServerListResponse__Class* type_info_ref = nullptr;
        }
        app::ISteamMatchmakingServerListResponse__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingServerListResponse__Class* get_class() {
            return il2cpp::get_class<app::ISteamMatchmakingServerListResponse__Class>(type_info, "Steamworks", "ISteamMatchmakingServerListResponse");
        }
        inline app::ISteamMatchmakingServerListResponse* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse
} // namespace app::classes::types