#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::InteropServices::COMException {
    IL2CPP_REGISTER_METHOD(0x01A93CC0, void, ctor_1, (app::COMException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A93D50, void, ctor_2, (app::COMException * this_ptr, app::String * message, int32_t error_code))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::COMException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01A93D80, app::String *, ToString, (app::COMException * this_ptr))
}