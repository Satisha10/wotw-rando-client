#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_1_Nullable_1_Int32__ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_1_Nullable_1_Int32_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01938310, app::Nullable_1_Int32_, Invoke, (app::Func_1_Nullable_1_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::Func_1_Nullable_1_Int32_ * this_ptr, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F52480, app::Nullable_1_Int32_, EndInvoke, (app::Func_1_Nullable_1_Int32_ * this_ptr, app::IAsyncResult * result))
}