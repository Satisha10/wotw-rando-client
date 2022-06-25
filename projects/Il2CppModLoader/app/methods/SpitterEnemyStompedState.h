#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpitterEnemyStompedState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::SpitterEnemyStompedState * this_ptr, app::SpitterEnemy * enemy))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::SpitterEnemyStompedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A1100, void, OnEnter, (app::SpitterEnemyStompedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::SpitterEnemyStompedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A1150, void, OnStomped, (app::SpitterEnemyStompedState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477F8D0, SpitterEnemyStompedState_OnStomped__MethodInfo)
}