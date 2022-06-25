#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayColor {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetOverlayColor * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02D7F190, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayColor * this_ptr, uint64_t ul_overlay_handle, float f_red, float f_green, float f_blue))
    IL2CPP_REGISTER_METHOD(0x02D7F600, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayColor * this_ptr, uint64_t ul_overlay_handle, float f_red, float f_green, float f_blue, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayColor * this_ptr, app::IAsyncResult * result))
}