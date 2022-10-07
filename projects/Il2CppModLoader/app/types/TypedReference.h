#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypedReference {
        namespace {
            app::TypedReference__Class* type_info_ref = nullptr;
        }
        app::TypedReference__Class** type_info = &type_info_ref;
        inline app::TypedReference__Class* get_class() {
            return il2cpp::get_class<app::TypedReference__Class>(type_info, "System", "TypedReference");
        }
        inline app::TypedReference* create() {
            return il2cpp::create_object<app::TypedReference>(get_class());
        }
        inline app::TypedReference__Boxed* box(app::TypedReference value) {
            return il2cpp::box_value<app::TypedReference__Boxed>(get_class(), value);
        }
    } // namespace TypedReference
} // namespace app::classes::types