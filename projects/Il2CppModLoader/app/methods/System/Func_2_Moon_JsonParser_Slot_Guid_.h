#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_2_Moon_JsonParser_Slot_Guid_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Moon_JsonParser_Slot_Guid_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x0477CE60, Func_2_Moon_JsonParser_Slot_Guid___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028867C0, app::Guid, Invoke, (app::Func_2_Moon_JsonParser_Slot_Guid_ * this_ptr, app::JsonParser_Slot arg))
    IL2CPP_REGISTER_METHOD(0x02886D00, app::IAsyncResult *, BeginInvoke, (app::Func_2_Moon_JsonParser_Slot_Guid_ * this_ptr, app::JsonParser_Slot arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x01C7A680, app::Guid, EndInvoke, (app::Func_2_Moon_JsonParser_Slot_Guid_ * this_ptr, app::IAsyncResult * result))
}