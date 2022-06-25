#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayFab::PlayFabMatchmakerAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01A2DB40, void, ForgetAllCredentials, ())
    IL2CPP_REGISTER_METHOD(0x01A2DBD0, void, AuthUser, (app::AuthUserRequest * request, app::Action_1_PlayFab_MatchmakerModels_AuthUserResponse_ * result_callback, app::Action_1_PlayFab_PlayFabError_ * error_callback, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2DCE0, void, PlayerJoined, (app::PlayerJoinedRequest * request, app::Action_1_PlayFab_MatchmakerModels_PlayerJoinedResponse_ * result_callback, app::Action_1_PlayFab_PlayFabError_ * error_callback, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2DDF0, void, PlayerLeft, (app::PlayerLeftRequest * request, app::Action_1_PlayFab_MatchmakerModels_PlayerLeftResponse_ * result_callback, app::Action_1_PlayFab_PlayFabError_ * error_callback, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2DF00, void, StartGame, (app::StartGameRequest_1 * request, app::Action_1_PlayFab_MatchmakerModels_StartGameResponse_ * result_callback, app::Action_1_PlayFab_PlayFabError_ * error_callback, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2E010, void, UserInfo, (app::UserInfoRequest * request, app::Action_1_PlayFab_MatchmakerModels_UserInfoResponse_ * result_callback, app::Action_1_PlayFab_PlayFabError_ * error_callback, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers))
}