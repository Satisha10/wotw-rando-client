#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICachableInput__Array {
        namespace {
            app::ICachableInput__Array__Class* type_info_ref = nullptr;
        }
        app::ICachableInput__Array__Class** type_info = &type_info_ref;
        inline app::ICachableInput__Array__Class* get_class() {
            return il2cpp::get_class<app::ICachableInput__Array__Class>(type_info, "SmartInput", "ICachableInput[]");
        }
        inline app::ICachableInput__Array* create() {
            return il2cpp::create_object<app::ICachableInput__Array>(get_class());
        }
    } // namespace ICachableInput__Array
} // namespace app::classes::types