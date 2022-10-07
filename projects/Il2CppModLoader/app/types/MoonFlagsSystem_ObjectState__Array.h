#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonFlagsSystem_ObjectState__Array {
        namespace {
            app::MoonFlagsSystem_ObjectState__Array__Class* type_info_ref = nullptr;
        }
        app::MoonFlagsSystem_ObjectState__Array__Class** type_info = &type_info_ref;
        inline app::MoonFlagsSystem_ObjectState__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonFlagsSystem_ObjectState__Array__Class>(type_info, "", "MoonFlagsSystem+ObjectState[]");
        }
        inline app::MoonFlagsSystem_ObjectState__Array* create() {
            return il2cpp::create_object<app::MoonFlagsSystem_ObjectState__Array>(get_class());
        }
    } // namespace MoonFlagsSystem_ObjectState__Array
} // namespace app::classes::types