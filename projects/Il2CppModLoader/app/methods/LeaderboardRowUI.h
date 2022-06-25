#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LeaderboardRowUI {
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::String *, get_UserHandle, (app::LeaderboardRowUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B8370, app::Rect, get_Bounds, (app::LeaderboardRowUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B8540, void, SetContent, (app::LeaderboardRowUI * this_ptr, app::LeaderboardData_Entry * entry))
    IL2CPP_REGISTER_METHOD(0x014D9200, void, Awake, (app::LeaderboardRowUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443CC0, void, Show, (app::LeaderboardRowUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (app::LeaderboardRowUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B8A80, void, Highlight, (app::LeaderboardRowUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B8AD0, void, Unhighlight, (app::LeaderboardRowUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LeaderboardRowUI * this_ptr))
}