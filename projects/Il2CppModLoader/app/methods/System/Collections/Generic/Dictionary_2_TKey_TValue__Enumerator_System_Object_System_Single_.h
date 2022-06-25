#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x001363F0, void, ctor, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single___Boxed * this_ptr, app::Dictionary_2_System_Object_System_Single_ * dictionary, int32_t get_enumerator_ret_type))
    IL2CPP_REGISTER_METHOD(0x001BDC00, bool, MoveNext, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04798F78, Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single__MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00136440, app::KeyValuePair_2_System_Object_System_Single_, get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001BDC10, app::Object *, IEnumerator_get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755AC8, Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single__System_Collections_IEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001BDC20, void, IEnumerator_Reset, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04763FE0, Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single__System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001BDCF0, app::DictionaryEntry, IDictionaryEnumerator_get_Entry, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04713348, Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single__System_Collections_IDictionaryEnumerator_get_Entry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001BDE70, app::Object *, IDictionaryEnumerator_get_Key, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04753748, Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single__System_Collections_IDictionaryEnumerator_get_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001BDF60, app::Object *, IDictionaryEnumerator_get_Value, (app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478FAE0, Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Single__System_Collections_IDictionaryEnumerator_get_Value__MethodInfo)
}