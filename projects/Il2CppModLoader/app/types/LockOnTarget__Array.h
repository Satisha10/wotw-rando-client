#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LockOnTarget__Array {
        namespace {
            app::LockOnTarget__Array__Class* type_info_ref = nullptr;
        }
        app::LockOnTarget__Array__Class** type_info = &type_info_ref;
        inline app::LockOnTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::LockOnTarget__Array__Class>(type_info, "", "LockOnTarget[]");
        }
        inline app::LockOnTarget__Array* create() {
            return il2cpp::create_object<app::LockOnTarget__Array>(get_class());
        }
    } // namespace LockOnTarget__Array
} // namespace app::classes::types