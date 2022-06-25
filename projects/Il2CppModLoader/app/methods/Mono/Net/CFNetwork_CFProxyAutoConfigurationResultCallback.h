#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Net::CFNetwork_CFProxyAutoConfigurationResultCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CFNetwork_CFProxyAutoConfigurationResultCallback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0143DA20, void, Invoke, (app::CFNetwork_CFProxyAutoConfigurationResultCallback * this_ptr, void * client, void * proxy_list, void * error))
    IL2CPP_REGISTER_METHOD(0x02176C40, app::IAsyncResult *, BeginInvoke, (app::CFNetwork_CFProxyAutoConfigurationResultCallback * this_ptr, void * client, void * proxy_list, void * error, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::CFNetwork_CFProxyAutoConfigurationResultCallback * this_ptr, app::IAsyncResult * result))
}