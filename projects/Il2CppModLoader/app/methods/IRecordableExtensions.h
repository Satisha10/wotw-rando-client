#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::IRecordableExtensions {
    IL2CPP_REGISTER_METHOD(0x02557A10, app::Component_1 *, AsComponent, (app::IRecordable * recordable))
    IL2CPP_REGISTER_METHOD(0x02557AD0, int32_t, GetInstanceID, (app::IRecordable * recordable))
    IL2CPP_REGISTER_METHOD(0x02557B00, app::GameObject *, GetGameObject, (app::IRecordable * recordable))
}