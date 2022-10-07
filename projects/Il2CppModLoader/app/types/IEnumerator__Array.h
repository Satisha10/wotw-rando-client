#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEnumerator__Array {
        namespace {
            app::IEnumerator__Array__Class* type_info_ref = nullptr;
        }
        app::IEnumerator__Array__Class** type_info = &type_info_ref;
        inline app::IEnumerator__Array__Class* get_class() {
            return il2cpp::get_class<app::IEnumerator__Array__Class>(type_info, "System.Collections", "IEnumerator[]");
        }
        inline app::IEnumerator__Array* create() {
            return il2cpp::create_object<app::IEnumerator__Array>(get_class());
        }
    } // namespace IEnumerator__Array
} // namespace app::classes::types