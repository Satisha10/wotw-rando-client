#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_1_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x029FD8B0, void, Invoke, (app::Action_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 obj))
    IL2CPP_REGISTER_METHODINFO(0x047447D0, Action_1_UnityEngine_Vector3__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_UnityEngine_Vector3_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x04768830, Action_1_UnityEngine_Vector3___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C0D150, app::IAsyncResult *, BeginInvoke, (app::Action_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UnityEngine_Vector3_ * this_ptr, app::IAsyncResult * result))
}