#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Nullable_1_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, (app::Nullable_1_Int32Enum___Boxed * this_ptr, app::Int32Enum__Enum value))
    IL2CPP_REGISTER_METHOD(0x001F6090, bool, get_HasValue, (app::Nullable_1_Int32Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0020E5F0, app::Int32Enum__Enum, get_Value, (app::Nullable_1_Int32Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04750A98, Nullable_1_Int32Enum__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0020E640, bool, Equals_1, (app::Nullable_1_Int32Enum___Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x0020E690, bool, Equals_2, (app::Nullable_1_Int32Enum___Boxed * this_ptr, app::Nullable_1_Int32Enum_ other))
    IL2CPP_REGISTER_METHOD(0x0020E7C0, int32_t, GetHashCode, (app::Nullable_1_Int32Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010E170, app::Int32Enum__Enum, GetValueOrDefault_1, (app::Nullable_1_Int32Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0020E4F0, app::Int32Enum__Enum, GetValueOrDefault_2, (app::Nullable_1_Int32Enum___Boxed * this_ptr, app::Int32Enum__Enum default_value))
    IL2CPP_REGISTER_METHOD(0x0020E860, app::String *, ToString, (app::Nullable_1_Int32Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254FA50, app::Object *, Box, (app::Nullable_1_Int32Enum_ o))
    IL2CPP_REGISTER_METHOD(0x02889570, app::Nullable_1_Int32Enum_, Unbox, (app::Object * o))
}