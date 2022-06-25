#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinPetrifiedFogController {
    IL2CPP_REGISTER_METHOD(0x008B0120, app::ZoneDamageSettings *, get_DamageSettings, (app::SeinPetrifiedFogController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B01E0, void, Awake, (app::SeinPetrifiedFogController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, IsDurationUIVisible, (app::SeinPetrifiedFogController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B0370, void, HideDurationUI, (app::SeinPetrifiedFogController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B0480, void, ShowDurationUI, (app::SeinPetrifiedFogController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinPetrifiedFogController * this_ptr))
}