#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Compiler::DelegateHelpers_VBCallSiteDelegate0_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DelegateHelpers_VBCallSiteDelegate0_1_System_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01D117F0, app::Object *, Invoke, (app::DelegateHelpers_VBCallSiteDelegate0_1_System_Object_ * this_ptr, app::Object * call_site, app::Object * instance))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::DelegateHelpers_VBCallSiteDelegate0_1_System_Object_ * this_ptr, app::Object * call_site, app::Object * instance, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object *, EndInvoke, (app::DelegateHelpers_VBCallSiteDelegate0_1_System_Object_ * this_ptr, app::IAsyncResult * result))
}