#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberWaterForceActor {
    IL2CPP_REGISTER_METHOD(0x0129F010, void, Awake, (app::UberWaterForceActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129F190, void, FixedUpdate, (app::UberWaterForceActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, Update, (app::UberWaterForceActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129F1A0, void, Apply, (app::UberWaterForceActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129F350, void, ctor, (app::UberWaterForceActor * this_ptr))
}