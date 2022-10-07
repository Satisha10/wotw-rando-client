#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeDisableUnsafePtrRestrictionAttribute {
        namespace {
            app::NativeDisableUnsafePtrRestrictionAttribute__Class* type_info_ref = nullptr;
        }
        app::NativeDisableUnsafePtrRestrictionAttribute__Class** type_info = &type_info_ref;
        inline app::NativeDisableUnsafePtrRestrictionAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeDisableUnsafePtrRestrictionAttribute__Class>(type_info, "Unity.Collections.LowLevel.Unsafe", "NativeDisableUnsafePtrRestrictionAttribute");
        }
        inline app::NativeDisableUnsafePtrRestrictionAttribute* create() {
            return il2cpp::create_object<app::NativeDisableUnsafePtrRestrictionAttribute>(get_class());
        }
    } // namespace NativeDisableUnsafePtrRestrictionAttribute
} // namespace app::classes::types