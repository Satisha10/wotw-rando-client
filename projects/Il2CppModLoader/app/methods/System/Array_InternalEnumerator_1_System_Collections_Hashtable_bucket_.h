#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Array_InternalEnumerator_1_System_Collections_Hashtable_bucket_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_System_Collections_Hashtable_bucket___Boxed * this_ptr, app::Array * array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_System_Collections_Hashtable_bucket___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_System_Collections_Hashtable_bucket___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00199AF0, app::Hashtable_bucket, get_Current, (app::Array_InternalEnumerator_1_System_Collections_Hashtable_bucket___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794838, Array_InternalEnumerator_1_System_Collections_Hashtable_bucket__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_System_Collections_Hashtable_bucket___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00199B20, app::Object *, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_System_Collections_Hashtable_bucket___Boxed * this_ptr))
}