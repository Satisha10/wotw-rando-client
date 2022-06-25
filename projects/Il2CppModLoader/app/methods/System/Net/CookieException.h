#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::CookieException {
    IL2CPP_REGISTER_METHOD(0x01EA7840, void, ctor_1, (app::CookieException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A1CA20, void, ctor_2, (app::CookieException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01A1CA40, void, ctor_3, (app::CookieException * this_ptr, app::String * message, app::Exception * inner))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_4, (app::CookieException * this_ptr, app::SerializationInfo * serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01BCD870, void, ISerializable_GetObjectData, (app::CookieException * this_ptr, app::SerializationInfo * serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01BCD870, void, GetObjectData, (app::CookieException * this_ptr, app::SerializationInfo * serialization_info, app::StreamingContext streaming_context))
}