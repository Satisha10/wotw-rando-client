#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCText_BoundingMode__Enum {
        namespace {
            app::CCText_BoundingMode__Enum__Class* type_info_ref = nullptr;
        }
        app::CCText_BoundingMode__Enum__Class** type_info = &type_info_ref;
        inline app::CCText_BoundingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CCText_BoundingMode__Enum__Class>(type_info, "", "CCText", "BoundingMode");
        }
        inline app::CCText_BoundingMode__Enum* create() {
            return il2cpp::create_object<app::CCText_BoundingMode__Enum>(get_class());
        }
    } // namespace CCText_BoundingMode__Enum
} // namespace app::classes::types