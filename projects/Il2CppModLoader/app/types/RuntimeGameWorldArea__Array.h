#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeGameWorldArea__Array {
        namespace {
            app::RuntimeGameWorldArea__Array__Class* type_info_ref = nullptr;
        }
        app::RuntimeGameWorldArea__Array__Class** type_info = &type_info_ref;
        inline app::RuntimeGameWorldArea__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeGameWorldArea__Array__Class>(type_info, "", "RuntimeGameWorldArea[]");
        }
        inline app::RuntimeGameWorldArea__Array* create() {
            return il2cpp::create_object<app::RuntimeGameWorldArea__Array>(get_class());
        }
    } // namespace RuntimeGameWorldArea__Array
} // namespace app::classes::types