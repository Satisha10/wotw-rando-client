#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LightTorchZone {
    IL2CPP_REGISTER_METHOD(0x00FA2CA0, void, Awake, (app::LightTorchZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA2D30, void, OnDestroy, (app::LightTorchZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA2DB0, bool, IsInside, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LightTorchZone * this_ptr))
}