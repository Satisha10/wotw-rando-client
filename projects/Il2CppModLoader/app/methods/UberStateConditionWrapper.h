#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberStateConditionWrapper {
    IL2CPP_REGISTER_METHOD(0x0128B4D0, bool, Validate, (app::UberStateConditionWrapper * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberStateConditionWrapper * this_ptr))
}