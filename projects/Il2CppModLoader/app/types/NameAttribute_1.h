#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameAttribute_1 {
        namespace {
            app::NameAttribute_1__Class* type_info_ref = nullptr;
        }
        app::NameAttribute_1__Class** type_info = &type_info_ref;
        inline app::NameAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::NameAttribute_1__Class>(type_info, "", "NameAttribute");
        }
        inline app::NameAttribute_1* create() {
            return il2cpp::create_object<app::NameAttribute_1>(get_class());
        }
    } // namespace NameAttribute_1
} // namespace app::classes::types