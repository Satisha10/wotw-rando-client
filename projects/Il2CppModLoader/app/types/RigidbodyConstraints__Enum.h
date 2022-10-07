#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RigidbodyConstraints__Enum {
        namespace {
            app::RigidbodyConstraints__Enum__Class* type_info_ref = nullptr;
        }
        app::RigidbodyConstraints__Enum__Class** type_info = &type_info_ref;
        inline app::RigidbodyConstraints__Enum__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyConstraints__Enum__Class>(type_info, "UnityEngine", "RigidbodyConstraints");
        }
        inline app::RigidbodyConstraints__Enum* create() {
            return il2cpp::create_object<app::RigidbodyConstraints__Enum>(get_class());
        }
    } // namespace RigidbodyConstraints__Enum
} // namespace app::classes::types