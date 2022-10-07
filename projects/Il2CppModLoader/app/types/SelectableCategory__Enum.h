#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SelectableCategory__Enum {
        namespace {
            app::SelectableCategory__Enum__Class* type_info_ref = nullptr;
        }
        app::SelectableCategory__Enum__Class** type_info = &type_info_ref;
        inline app::SelectableCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::SelectableCategory__Enum__Class>(type_info, "Moon.EditorTools", "SelectableCategory");
        }
        inline app::SelectableCategory__Enum* create() {
            return il2cpp::create_object<app::SelectableCategory__Enum>(get_class());
        }
    } // namespace SelectableCategory__Enum
} // namespace app::classes::types