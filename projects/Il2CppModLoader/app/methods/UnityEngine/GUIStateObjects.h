#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::GUIStateObjects {
    IL2CPP_REGISTER_METHOD(0x029F2C10, app::Object *, GetStateObject, (app::Type * t, int32_t control_i_d))
    IL2CPP_REGISTER_METHOD(0x029F2DD0, void, cctor, ())
}