#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Network::Web::MainThreadDelegate {
    IL2CPP_REGISTER_METHOD(0x02E95C80, app::MainThreadDelegate *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x02E95F90, void, Create, (app::MainThreadDelegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E962B0, void, TimeToWork, (app::MainThreadDelegate * this_ptr, app::Object * sender, app::ElapsedEventArgs * e))
    IL2CPP_REGISTER_METHODINFO(0x047493A0, MainThreadDelegate_TimeToWork__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E96420, void, Update, (app::MainThreadDelegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E96590, void, Add, (app::MainThreadDelegate * this_ptr, app::Action * action))
    IL2CPP_REGISTER_METHOD(0x02E966E0, void, Init, ())
    IL2CPP_REGISTER_METHOD(0x02E96790, void, ctor, (app::MainThreadDelegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}