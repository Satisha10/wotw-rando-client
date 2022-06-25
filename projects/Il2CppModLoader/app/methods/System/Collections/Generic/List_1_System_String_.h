#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_System_String_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476BFB8, List_1_System_String___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_String_ * this_ptr, app::String * item))
    IL2CPP_REGISTER_METHODINFO(0x0476F3B0, List_1_System_String__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::String__Array *, ToArray, (app::List_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047092A8, List_1_System_String__ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477FC50, List_1_System_String__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::String *, get_Item, (app::List_1_System_String_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0478F1B0, List_1_System_String__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471CB78, List_1_System_String__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_System_String_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0475B5A0, List_1_System_String___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo_1, (app::List_1_System_String_ * this_ptr, int32_t index, app::String__Array * array, int32_t array_index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x047474D8, List_1_System_String__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_String_, GetEnumerator, (app::List_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047014C0, List_1_System_String__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_System_String_ * this_ptr, app::String * item))
    IL2CPP_REGISTER_METHODINFO(0x0475B330, List_1_System_String__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_3, (app::List_1_System_String_ * this_ptr, app::IEnumerable_1_System_String_ * collection))
    IL2CPP_REGISTER_METHODINFO(0x04776590, List_1_System_String___ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo_2, (app::List_1_System_String_ * this_ptr, app::String__Array * array, int32_t array_index))
    IL2CPP_REGISTER_METHODINFO(0x04784418, List_1_System_String__CopyTo_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_System_String_ * this_ptr, app::String * item))
    IL2CPP_REGISTER_METHODINFO(0x04781088, List_1_System_String__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_System_String_ * this_ptr, app::IEnumerable_1_System_String_ * collection))
    IL2CPP_REGISTER_METHODINFO(0x0478AF88, List_1_System_String__AddRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_System_String_ * this_ptr, int32_t index, app::String * item))
    IL2CPP_REGISTER_METHODINFO(0x0472C5F0, List_1_System_String__Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_System_String_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04755A90, List_1_System_String__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort, (app::List_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478FE40, List_1_System_String__Sort__MethodInfo)
}