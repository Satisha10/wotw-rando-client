#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeakPrefab__Array {
        namespace {
            app::WeakPrefab__Array__Class* type_info_ref = nullptr;
        }
        app::WeakPrefab__Array__Class** type_info = &type_info_ref;
        inline app::WeakPrefab__Array__Class* get_class() {
            return il2cpp::get_class<app::WeakPrefab__Array__Class>(type_info, "", "WeakPrefab[]");
        }
        inline app::WeakPrefab__Array* create() {
            return il2cpp::create_object<app::WeakPrefab__Array>(get_class());
        }
    } // namespace WeakPrefab__Array
} // namespace app::classes::types