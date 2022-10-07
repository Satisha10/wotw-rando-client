#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Action__Array {
        namespace {
            app::Action__Array__Class* type_info_ref = nullptr;
        }
        app::Action__Array__Class** type_info = &type_info_ref;
        inline app::Action__Array__Class* get_class() {
            return il2cpp::get_class<app::Action__Array__Class>(type_info, "System", "Action[]");
        }
        inline app::Action__Array* create() {
            return il2cpp::create_object<app::Action__Array>(get_class());
        }
    } // namespace Action__Array
} // namespace app::classes::types