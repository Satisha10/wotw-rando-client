#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityModelAnimationCurveProcessor {
    IL2CPP_REGISTER_METHOD(0x012ABB10, void, ProcessCurves, (app::UnityModelAnimationCurveProcessor * this_ptr, app::GameObject * model, float step, float start, float end))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnityModelAnimationCurveProcessor * this_ptr))
}