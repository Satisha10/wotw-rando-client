#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReadOnlyAttribute_1 {
        namespace {
            app::ReadOnlyAttribute_1__Class* type_info_ref = nullptr;
        }
        app::ReadOnlyAttribute_1__Class** type_info = &type_info_ref;
        inline app::ReadOnlyAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::ReadOnlyAttribute_1__Class>(type_info, "Unity.Collections", "ReadOnlyAttribute");
        }
        inline app::ReadOnlyAttribute_1* create() {
            return il2cpp::create_object<app::ReadOnlyAttribute_1>(get_class());
        }
    } // namespace ReadOnlyAttribute_1
} // namespace app::classes::types