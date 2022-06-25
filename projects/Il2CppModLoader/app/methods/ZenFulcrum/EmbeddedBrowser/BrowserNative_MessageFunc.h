#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_MessageFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_MessageFunc * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::BrowserNative_MessageFunc * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_MessageFunc * this_ptr, app::String * message, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_MessageFunc * this_ptr, app::IAsyncResult * result))
}