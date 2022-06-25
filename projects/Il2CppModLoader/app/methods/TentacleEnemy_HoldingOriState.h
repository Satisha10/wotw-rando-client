#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TentacleEnemy_HoldingOriState {
    IL2CPP_REGISTER_METHOD(0x00CF6EC0, app::String *, get_Name, (app::TentacleEnemy_HoldingOriState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF6F40, void, OnBegin, (app::TentacleEnemy_HoldingOriState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF7220, void, OnInterrupt, (app::TentacleEnemy_HoldingOriState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF72E0, app::BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (app::TentacleEnemy_HoldingOriState * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x00CF7930, void, ctor, (app::TentacleEnemy_HoldingOriState * this_ptr))
}