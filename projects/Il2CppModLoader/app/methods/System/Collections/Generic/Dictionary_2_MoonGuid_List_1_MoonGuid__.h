#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_MoonGuid_List_1_MoonGuid__ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_MoonGuid_List_1_MoonGuid_ * this_ptr, app::MoonGuid * key))
    IL2CPP_REGISTER_METHODINFO(0x04780088, Dictionary_2_MoonGuid_List_1_MoonGuid__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_MoonGuid_List_1_MoonGuid_ * this_ptr, app::MoonGuid * key, app::List_1_MoonGuid_ * value))
    IL2CPP_REGISTER_METHODINFO(0x04703378, Dictionary_2_MoonGuid_List_1_MoonGuid__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::List_1_MoonGuid_ *, get_Item, (app::Dictionary_2_MoonGuid_List_1_MoonGuid_ * this_ptr, app::MoonGuid * key))
    IL2CPP_REGISTER_METHODINFO(0x04705B40, Dictionary_2_MoonGuid_List_1_MoonGuid__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, (app::Dictionary_2_MoonGuid_List_1_MoonGuid_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04771CB0, Dictionary_2_MoonGuid_List_1_MoonGuid___ctor__MethodInfo)
}