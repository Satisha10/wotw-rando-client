#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameLobbyStartedEventData {
        namespace {
            app::GameLobbyStartedEventData__Class* type_info_ref = nullptr;
        }
        app::GameLobbyStartedEventData__Class** type_info = &type_info_ref;
        inline app::GameLobbyStartedEventData__Class* get_class() {
            return il2cpp::get_class<app::GameLobbyStartedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GameLobbyStartedEventData");
        }
        inline app::GameLobbyStartedEventData* create() {
            return il2cpp::create_object<app::GameLobbyStartedEventData>(get_class());
        }
    } // namespace GameLobbyStartedEventData
} // namespace app::classes::types