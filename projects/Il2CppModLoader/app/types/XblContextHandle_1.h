#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblContextHandle_1 {
        namespace {
            app::XblContextHandle_1__Class* type_info_ref = nullptr;
        }
        app::XblContextHandle_1__Class** type_info = &type_info_ref;
        inline app::XblContextHandle_1__Class* get_class() {
            return il2cpp::get_class<app::XblContextHandle_1__Class>(type_info, "XGamingRuntime.Interop", "XblContextHandle");
        }
        inline app::XblContextHandle_1* create() {
            return il2cpp::create_object<app::XblContextHandle_1>(get_class());
        }
        inline app::XblContextHandle_1__Boxed* box(app::XblContextHandle_1 value) {
            return il2cpp::box_value<app::XblContextHandle_1__Boxed>(get_class(), value);
        }
    } // namespace XblContextHandle_1
} // namespace app::classes::types