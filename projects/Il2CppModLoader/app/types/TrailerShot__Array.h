#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrailerShot__Array {
        namespace {
            app::TrailerShot__Array__Class* type_info_ref = nullptr;
        }
        app::TrailerShot__Array__Class** type_info = &type_info_ref;
        inline app::TrailerShot__Array__Class* get_class() {
            return il2cpp::get_class<app::TrailerShot__Array__Class>(type_info, "", "TrailerShot[]");
        }
        inline app::TrailerShot__Array* create() {
            return il2cpp::create_object<app::TrailerShot__Array>(get_class());
        }
    } // namespace TrailerShot__Array
} // namespace app::classes::types