#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderFrame__Array {
        namespace {
            app::RecorderFrame__Array__Class* type_info_ref = nullptr;
        }
        app::RecorderFrame__Array__Class** type_info = &type_info_ref;
        inline app::RecorderFrame__Array__Class* get_class() {
            return il2cpp::get_class<app::RecorderFrame__Array__Class>(type_info, "", "RecorderFrame[]");
        }
        inline app::RecorderFrame__Array* create() {
            return il2cpp::create_object<app::RecorderFrame__Array>(get_class());
        }
    } // namespace RecorderFrame__Array
} // namespace app::classes::types