#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::JetBrains::Annotations::UsedImplicitlyAttribute {
    IL2CPP_REGISTER_METHOD(0x02418CA0, void, ctor_1, (app::UsedImplicitlyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01857090, void, ctor_2, (app::UsedImplicitlyAttribute * this_ptr, app::ImplicitUseKindFlags__Enum use_kind_flags, app::ImplicitUseTargetFlags__Enum target_flags))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_UseKindFlags, (app::UsedImplicitlyAttribute * this_ptr, app::ImplicitUseKindFlags__Enum value))
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_TargetFlags, (app::UsedImplicitlyAttribute * this_ptr, app::ImplicitUseTargetFlags__Enum value))
}