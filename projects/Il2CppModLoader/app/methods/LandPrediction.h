#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LandPrediction {
    IL2CPP_REGISTER_METHOD(0x006142D0, bool, get_GroundDetected, (app::LandPrediction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006142E0, void, set_GroundDetected, (app::LandPrediction * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F02D60, app::RaycastHit, get_Hit, (app::LandPrediction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F02D90, void, Init, (app::LandPrediction * this_ptr, app::Action_1_UnityEngine_RaycastHit_ * on_ground_detection_action, app::PlatformMovement * plataform_movement))
    IL2CPP_REGISTER_METHOD(0x00F02E30, void, Step, (app::LandPrediction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LandPrediction * this_ptr))
}