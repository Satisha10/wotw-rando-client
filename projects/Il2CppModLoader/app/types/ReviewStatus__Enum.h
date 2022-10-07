#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReviewStatus__Enum {
        namespace {
            app::ReviewStatus__Enum__Class* type_info_ref = nullptr;
        }
        app::ReviewStatus__Enum__Class** type_info = &type_info_ref;
        inline app::ReviewStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReviewStatus__Enum__Class>(type_info, "Moon.ReviewFramework", "ReviewStatus");
        }
        inline app::ReviewStatus__Enum* create() {
            return il2cpp::create_object<app::ReviewStatus__Enum>(get_class());
        }
    } // namespace ReviewStatus__Enum
} // namespace app::classes::types