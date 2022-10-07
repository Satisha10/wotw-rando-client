#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Number {
        namespace {
            app::Number__Class* type_info_ref = nullptr;
        }
        app::Number__Class** type_info = &type_info_ref;
        inline app::Number__Class* get_class() {
            return il2cpp::get_class<app::Number__Class>(type_info, "System", "Number");
        }
        inline app::Number* create() {
            return il2cpp::create_object<app::Number>(get_class());
        }
    } // namespace Number
} // namespace app::classes::types