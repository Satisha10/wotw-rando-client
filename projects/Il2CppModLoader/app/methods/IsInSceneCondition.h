#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::IsInSceneCondition {
    IL2CPP_REGISTER_METHOD(0x006462E0, app::SceneMetaData *, get_CurrentMetaData, (app::IsInSceneCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006463E0, bool, Validate, (app::IsInSceneCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsInSceneCondition * this_ptr))
}