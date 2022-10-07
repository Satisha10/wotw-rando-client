#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Uri_Offset {
        namespace {
            app::Uri_Offset__Class* type_info_ref = nullptr;
        }
        app::Uri_Offset__Class** type_info = &type_info_ref;
        inline app::Uri_Offset__Class* get_class() {
            return il2cpp::get_nested_class<app::Uri_Offset__Class>(type_info, "System", "Uri", "Offset");
        }
        inline app::Uri_Offset* create() {
            return il2cpp::create_object<app::Uri_Offset>(get_class());
        }
        inline app::Uri_Offset__Boxed* box(app::Uri_Offset value) {
            return il2cpp::box_value<app::Uri_Offset__Boxed>(get_class(), value);
        }
    } // namespace Uri_Offset
} // namespace app::classes::types