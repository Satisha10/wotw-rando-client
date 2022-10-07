#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DTSubStringType__Enum {
        namespace {
            app::DTSubStringType__Enum__Class* type_info_ref = nullptr;
        }
        app::DTSubStringType__Enum__Class** type_info = &type_info_ref;
        inline app::DTSubStringType__Enum__Class* get_class() {
            return il2cpp::get_class<app::DTSubStringType__Enum__Class>(type_info, "System", "DTSubStringType");
        }
        inline app::DTSubStringType__Enum* create() {
            return il2cpp::create_object<app::DTSubStringType__Enum>(get_class());
        }
    } // namespace DTSubStringType__Enum
} // namespace app::classes::types