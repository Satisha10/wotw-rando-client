#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetControllerAxisTypeNameFromEnum {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_GetControllerAxisTypeNameFromEnum * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00F52080, void *, Invoke, (app::IVRSystem_GetControllerAxisTypeNameFromEnum * this_ptr, app::EVRControllerAxisType__Enum e_axis_type))
    IL2CPP_REGISTER_METHOD(0x02CEAC40, app::IAsyncResult *, BeginInvoke, (app::IVRSystem_GetControllerAxisTypeNameFromEnum * this_ptr, app::EVRControllerAxisType__Enum e_axis_type, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F52480, void *, EndInvoke, (app::IVRSystem_GetControllerAxisTypeNameFromEnum * this_ptr, app::IAsyncResult * result))
}