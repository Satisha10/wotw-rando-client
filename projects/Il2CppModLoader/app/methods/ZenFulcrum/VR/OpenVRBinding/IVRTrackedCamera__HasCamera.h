#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__HasCamera {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRTrackedCamera_HasCamera * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00F51B50, app::EVRTrackedCameraError__Enum, Invoke, (app::IVRTrackedCamera_HasCamera * this_ptr, uint32_t n_device_index, bool * p_has_camera))
    IL2CPP_REGISTER_METHOD(0x00F54BB0, app::IAsyncResult *, BeginInvoke, (app::IVRTrackedCamera_HasCamera * this_ptr, uint32_t n_device_index, bool * p_has_camera, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVRTrackedCameraError__Enum, EndInvoke, (app::IVRTrackedCamera_HasCamera * this_ptr, bool * p_has_camera, app::IAsyncResult * result))
}