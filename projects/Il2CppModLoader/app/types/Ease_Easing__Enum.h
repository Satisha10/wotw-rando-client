#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ease_Easing__Enum {
        namespace {
            app::Ease_Easing__Enum__Class* type_info_ref = nullptr;
        }
        app::Ease_Easing__Enum__Class** type_info = &type_info_ref;
        inline app::Ease_Easing__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Ease_Easing__Enum__Class>(type_info, "", "Ease", "Easing");
        }
        inline app::Ease_Easing__Enum* create() {
            return il2cpp::create_object<app::Ease_Easing__Enum>(get_class());
        }
    } // namespace Ease_Easing__Enum
} // namespace app::classes::types