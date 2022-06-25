#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::BossCameraSetup {
    IL2CPP_REGISTER_METHOD(0x00CBCC50, bool, get_IsSuspended, (app::BossCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBCC60, void, set_IsSuspended, (app::BossCameraSetup * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00CBCEC0, app::SuspendableMask__Enum, get_Mask, (app::BossCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBCED0, void, set_Mask, (app::BossCameraSetup * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00CBCEE0, void, Awake, (app::BossCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBD000, void, OnDestroy, (app::BossCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBD0A0, void, OnEnable, (app::BossCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBD220, void, OnDisable, (app::BossCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBD390, bool, LinecastIgnoringSand, (app::BossCameraSetup * this_ptr, app::Vector3 p1, app::Vector3 p2, app::RaycastHit * hit_info, app::LayerMask raycast_mask))
    IL2CPP_REGISTER_METHOD(0x00CBD700, void, FixedUpdate, (app::BossCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBE810, void, ResetCameraTargetTransformPosition, (app::BossCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBE890, void, OnDrawGizmosSelected, (app::BossCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBED60, void, ctor, (app::BossCameraSetup * this_ptr))
}