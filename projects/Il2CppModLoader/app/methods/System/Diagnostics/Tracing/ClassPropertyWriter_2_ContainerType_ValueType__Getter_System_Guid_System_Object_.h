#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::ClassPropertyWriter_2_ContainerType_ValueType__Getter_System_Guid_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Guid_System_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02887790, app::Object *, Invoke, (app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Guid_System_Object_ * this_ptr, app::Guid container))
    IL2CPP_REGISTER_METHOD(0x02B32A20, app::IAsyncResult *, BeginInvoke, (app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Guid_System_Object_ * this_ptr, app::Guid container, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object *, EndInvoke, (app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Guid_System_Object_ * this_ptr, app::IAsyncResult * result))
}