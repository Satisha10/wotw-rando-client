#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NullValueHandling__Enum_1 {
        namespace {
            app::NullValueHandling__Enum_1__Class* type_info_ref = nullptr;
        }
        app::NullValueHandling__Enum_1__Class** type_info = &type_info_ref;
        inline app::NullValueHandling__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::NullValueHandling__Enum_1__Class>(type_info, "PlayFab.Json", "NullValueHandling");
        }
        inline app::NullValueHandling__Enum_1* create() {
            return il2cpp::create_object<app::NullValueHandling__Enum_1>(get_class());
        }
    } // namespace NullValueHandling__Enum_1
} // namespace app::classes::types