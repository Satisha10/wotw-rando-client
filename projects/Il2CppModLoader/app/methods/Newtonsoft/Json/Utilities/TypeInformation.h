#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::TypeInformation {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type *, get_Type, (app::TypeInformation_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Type, (app::TypeInformation_1 * this_ptr, app::Type * value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::PrimitiveTypeCode__Enum, get_TypeCode, (app::TypeInformation_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_TypeCode, (app::TypeInformation_1 * this_ptr, app::PrimitiveTypeCode__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TypeInformation_1 * this_ptr))
}