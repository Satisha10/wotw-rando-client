#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::AddingNewEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::AddingNewEventHandler * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::AddingNewEventHandler * this_ptr, app::Object * sender, app::AddingNewEventArgs * e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::AddingNewEventHandler * this_ptr, app::Object * sender, app::AddingNewEventArgs * e, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AddingNewEventHandler * this_ptr, app::IAsyncResult * result))
}