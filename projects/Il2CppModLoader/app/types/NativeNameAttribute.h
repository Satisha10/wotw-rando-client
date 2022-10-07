#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeNameAttribute {
        namespace {
            app::NativeNameAttribute__Class* type_info_ref = nullptr;
        }
        app::NativeNameAttribute__Class** type_info = &type_info_ref;
        inline app::NativeNameAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeNameAttribute__Class>(type_info, "UnityEngine.Bindings", "NativeNameAttribute");
        }
        inline app::NativeNameAttribute* create() {
            return il2cpp::create_object<app::NativeNameAttribute>(get_class());
        }
    } // namespace NativeNameAttribute
} // namespace app::classes::types