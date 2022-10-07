#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEntry__Array {
        namespace {
            app::IEntry__Array__Class* type_info_ref = nullptr;
        }
        app::IEntry__Array__Class** type_info = &type_info_ref;
        inline app::IEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::IEntry__Array__Class>(type_info, "", "IEntry[]");
        }
        inline app::IEntry__Array* create() {
            return il2cpp::create_object<app::IEntry__Array>(get_class());
        }
    } // namespace IEntry__Array
} // namespace app::classes::types