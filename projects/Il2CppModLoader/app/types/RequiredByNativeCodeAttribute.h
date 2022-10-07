#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequiredByNativeCodeAttribute {
        namespace {
            app::RequiredByNativeCodeAttribute__Class* type_info_ref = nullptr;
        }
        app::RequiredByNativeCodeAttribute__Class** type_info = &type_info_ref;
        inline app::RequiredByNativeCodeAttribute__Class* get_class() {
            return il2cpp::get_class<app::RequiredByNativeCodeAttribute__Class>(type_info, "UnityEngine.Scripting", "RequiredByNativeCodeAttribute");
        }
        inline app::RequiredByNativeCodeAttribute* create() {
            return il2cpp::create_object<app::RequiredByNativeCodeAttribute>(get_class());
        }
    } // namespace RequiredByNativeCodeAttribute
} // namespace app::classes::types