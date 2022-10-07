#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MatchmakingPlayerAttributes {
        namespace {
            app::MatchmakingPlayerAttributes__Class* type_info_ref = nullptr;
        }
        app::MatchmakingPlayerAttributes__Class** type_info = &type_info_ref;
        inline app::MatchmakingPlayerAttributes__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingPlayerAttributes__Class>(type_info, "PlayFab.MultiplayerModels", "MatchmakingPlayerAttributes");
        }
        inline app::MatchmakingPlayerAttributes* create() {
            return il2cpp::create_object<app::MatchmakingPlayerAttributes>(get_class());
        }
    } // namespace MatchmakingPlayerAttributes
} // namespace app::classes::types