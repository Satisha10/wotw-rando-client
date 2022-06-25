#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraSettingsZoneAnimator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::CameraSettingsZoneAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A9520, void, SampleValue, (app::CameraSettingsZoneAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x016A95E0, void, RestoreToOriginalState, (app::CameraSettingsZoneAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::CameraSettingsZoneAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::CameraSettingsZoneAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00990E80, void, ctor, (app::CameraSettingsZoneAnimator * this_ptr))
}