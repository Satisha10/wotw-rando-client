#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PickupMessageIcon {
    IL2CPP_REGISTER_METHOD(0x01159630, void, SetIcon, (app::PickupMessageIcon * this_ptr, app::Texture2D * icon))
    IL2CPP_REGISTER_METHOD(0x011596E0, void, SetName, (app::PickupMessageIcon * this_ptr, app::MessageProvider * name))
    IL2CPP_REGISTER_METHOD(0x011597A0, void, SetSubText, (app::PickupMessageIcon * this_ptr, app::PickupMessageIcon_PickupType__Enum type))
    IL2CPP_REGISTER_METHOD(0x011598C0, void, SetDescription, (app::PickupMessageIcon * this_ptr, app::MessageProvider * description))
    IL2CPP_REGISTER_METHOD(0x01159980, void, SetFromContext, (app::PickupMessageIcon * this_ptr, app::PickupContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PickupMessageIcon * this_ptr))
}