#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Assembly__Array {
        namespace {
            app::Assembly__Array__Class* type_info_ref = nullptr;
        }
        app::Assembly__Array__Class** type_info = &type_info_ref;
        inline app::Assembly__Array__Class* get_class() {
            return il2cpp::get_class<app::Assembly__Array__Class>(type_info, "System.Reflection", "Assembly[]");
        }
        inline app::Assembly__Array* create() {
            return il2cpp::create_object<app::Assembly__Array>(get_class());
        }
    } // namespace Assembly__Array
} // namespace app::classes::types