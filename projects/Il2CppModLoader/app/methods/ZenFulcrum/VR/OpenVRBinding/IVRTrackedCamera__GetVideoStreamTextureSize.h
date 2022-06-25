#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetVideoStreamTextureSize {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRTrackedCamera_GetVideoStreamTextureSize * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00F524C0, app::EVRTrackedCameraError__Enum, Invoke, (app::IVRTrackedCamera_GetVideoStreamTextureSize * this_ptr, uint32_t n_device_index, app::EVRTrackedCameraFrameType__Enum e_frame_type, app::VRTextureBounds_t * p_texture_bounds, uint32_t * pn_width, uint32_t * pn_height))
    IL2CPP_REGISTER_METHOD(0x00F54A80, app::IAsyncResult *, BeginInvoke, (app::IVRTrackedCamera_GetVideoStreamTextureSize * this_ptr, uint32_t n_device_index, app::EVRTrackedCameraFrameType__Enum e_frame_type, app::VRTextureBounds_t * p_texture_bounds, uint32_t * pn_width, uint32_t * pn_height, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F52A90, app::EVRTrackedCameraError__Enum, EndInvoke, (app::IVRTrackedCamera_GetVideoStreamTextureSize * this_ptr, app::VRTextureBounds_t * p_texture_bounds, uint32_t * pn_width, uint32_t * pn_height, app::IAsyncResult * result))
}