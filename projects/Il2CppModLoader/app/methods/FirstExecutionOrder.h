#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FirstExecutionOrder {
    IL2CPP_REGISTER_METHOD(0x01266800, void, Awake, (app::FirstExecutionOrder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012668C0, void, Start, (app::FirstExecutionOrder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FirstExecutionOrder * this_ptr))
}