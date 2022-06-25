#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRNotifications__RemoveNotification {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRNotifications_RemoveNotification * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02B33400, app::EVRNotificationError__Enum, Invoke, (app::IVRNotifications_RemoveNotification * this_ptr, uint32_t notification_id))
    IL2CPP_REGISTER_METHOD(0x02D78CA0, app::IAsyncResult *, BeginInvoke, (app::IVRNotifications_RemoveNotification * this_ptr, uint32_t notification_id, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRNotificationError__Enum, EndInvoke, (app::IVRNotifications_RemoveNotification * this_ptr, app::IAsyncResult * result))
}