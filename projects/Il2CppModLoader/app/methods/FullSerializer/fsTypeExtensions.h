#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FullSerializer::fsTypeExtensions {
    IL2CPP_REGISTER_METHOD(0x0151CF10, app::String *, CSharpName_1, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0151CF20, app::String *, CSharpName_2, (app::Type * type, bool include_namespace, bool ensure_safe_declaration_name))
    IL2CPP_REGISTER_METHOD(0x0151CFC0, app::String *, CSharpName_3, (app::Type * type, bool include_namespace))
}