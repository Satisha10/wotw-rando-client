#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_2_Moon_JsonParser_Slot_UInt64_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Moon_JsonParser_Slot_UInt64_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x0472EA40, Func_2_Moon_JsonParser_Slot_UInt64___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02887790, uint64_t, Invoke, (app::Func_2_Moon_JsonParser_Slot_UInt64_ * this_ptr, app::JsonParser_Slot arg))
    IL2CPP_REGISTER_METHOD(0x02F9D790, app::IAsyncResult *, BeginInvoke, (app::Func_2_Moon_JsonParser_Slot_UInt64_ * this_ptr, app::JsonParser_Slot arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F52480, uint64_t, EndInvoke, (app::Func_2_Moon_JsonParser_Slot_UInt64_ * this_ptr, app::IAsyncResult * result))
}