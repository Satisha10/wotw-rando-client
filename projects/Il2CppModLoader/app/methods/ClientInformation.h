#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ClientInformation {
    IL2CPP_REGISTER_METHOD(0x02E8E470, void, SetProvider, (app::IBuildInformationProvider * provider))
    IL2CPP_REGISTER_METHOD(0x02E8E520, app::String *, get_Revision, ())
    IL2CPP_REGISTER_METHOD(0x02E8E5E0, void, cctor, ())
}