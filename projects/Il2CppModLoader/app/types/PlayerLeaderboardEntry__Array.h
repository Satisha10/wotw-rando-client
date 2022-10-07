#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerLeaderboardEntry__Array {
        namespace {
            app::PlayerLeaderboardEntry__Array__Class* type_info_ref = nullptr;
        }
        app::PlayerLeaderboardEntry__Array__Class** type_info = &type_info_ref;
        inline app::PlayerLeaderboardEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerLeaderboardEntry__Array__Class>(type_info, "PlayFab.ClientModels", "PlayerLeaderboardEntry[]");
        }
        inline app::PlayerLeaderboardEntry__Array* create() {
            return il2cpp::create_object<app::PlayerLeaderboardEntry__Array>(get_class());
        }
    } // namespace PlayerLeaderboardEntry__Array
} // namespace app::classes::types