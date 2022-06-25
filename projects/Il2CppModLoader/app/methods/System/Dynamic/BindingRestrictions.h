#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Dynamic::BindingRestrictions {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BindingRestrictions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F88370, app::BindingRestrictions *, Merge, (app::BindingRestrictions * this_ptr, app::BindingRestrictions * restrictions))
    IL2CPP_REGISTER_METHOD(0x01F885C0, app::BindingRestrictions *, GetTypeRestriction_1, (app::Expression * expression, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01F887B0, app::BindingRestrictions *, GetTypeRestriction_2, (app::DynamicMetaObject * obj))
    IL2CPP_REGISTER_METHOD(0x01F888C0, app::BindingRestrictions *, GetInstanceRestriction, (app::Expression * expression, app::Object * instance))
    IL2CPP_REGISTER_METHOD(0x00980110, app::Expression *, ToExpression, (app::BindingRestrictions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F88AA0, app::String *, get_DebugView, (app::BindingRestrictions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F88AE0, void, cctor, ())
}