#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Activation::RemoteActivationAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::RemoteActivationAttribute * this_ptr, app::IList * context_properties))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsContextOK, (app::RemoteActivationAttribute * this_ptr, app::Context * ctx, app::IConstructionCallMessage * ctor))
    IL2CPP_REGISTER_METHOD(0x01A99390, void, GetPropertiesForNewContext, (app::RemoteActivationAttribute * this_ptr, app::IConstructionCallMessage * ctor))
}