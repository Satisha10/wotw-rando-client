#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerticalAnchorMode__Enum_1 {
        namespace {
            app::VerticalAnchorMode__Enum_1__Class* type_info_ref = nullptr;
        }
        app::VerticalAnchorMode__Enum_1__Class** type_info = &type_info_ref;
        inline app::VerticalAnchorMode__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::VerticalAnchorMode__Enum_1__Class>(type_info, "Moon.UI", "VerticalAnchorMode");
        }
        inline app::VerticalAnchorMode__Enum_1* create() {
            return il2cpp::create_object<app::VerticalAnchorMode__Enum_1>(get_class());
        }
    } // namespace VerticalAnchorMode__Enum_1
} // namespace app::classes::types