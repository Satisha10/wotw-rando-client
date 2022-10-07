#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonBuilder_Object {
        namespace {
            app::JsonBuilder_Object__Class* type_info_ref = nullptr;
        }
        app::JsonBuilder_Object__Class** type_info = &type_info_ref;
        inline app::JsonBuilder_Object__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonBuilder_Object__Class>(type_info, "Moon", "JsonBuilder", "Object");
        }
        inline app::JsonBuilder_Object* create() {
            return il2cpp::create_object<app::JsonBuilder_Object>(get_class());
        }
        inline app::JsonBuilder_Object__Boxed* box(app::JsonBuilder_Object value) {
            return il2cpp::box_value<app::JsonBuilder_Object__Boxed>(get_class(), value);
        }
    } // namespace JsonBuilder_Object
} // namespace app::classes::types