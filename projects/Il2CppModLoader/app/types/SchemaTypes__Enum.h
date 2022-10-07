#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SchemaTypes__Enum {
        namespace {
            app::SchemaTypes__Enum__Class* type_info_ref = nullptr;
        }
        app::SchemaTypes__Enum__Class** type_info = &type_info_ref;
        inline app::SchemaTypes__Enum__Class* get_class() {
            return il2cpp::get_class<app::SchemaTypes__Enum__Class>(type_info, "System.Xml.Serialization", "SchemaTypes");
        }
        inline app::SchemaTypes__Enum* create() {
            return il2cpp::create_object<app::SchemaTypes__Enum>(get_class());
        }
    } // namespace SchemaTypes__Enum
} // namespace app::classes::types