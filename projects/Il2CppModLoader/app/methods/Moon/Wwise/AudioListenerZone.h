#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Wwise::AudioListenerZone {
    IL2CPP_REGISTER_METHOD(0x02709950, app::String *, get_GizmoText, (app::AudioListenerZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027099E0, void, OnEnable, (app::AudioListenerZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447380, void, OnDisable, (app::AudioListenerZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AudioListenerZone * this_ptr))
}