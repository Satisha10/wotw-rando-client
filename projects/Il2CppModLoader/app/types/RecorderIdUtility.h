#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderIdUtility {
        namespace {
            app::RecorderIdUtility__Class* type_info_ref = nullptr;
        }
        app::RecorderIdUtility__Class** type_info = &type_info_ref;
        inline app::RecorderIdUtility__Class* get_class() {
            return il2cpp::get_class<app::RecorderIdUtility__Class>(type_info, "", "RecorderIdUtility");
        }
        inline app::RecorderIdUtility* create() {
            return il2cpp::create_object<app::RecorderIdUtility>(get_class());
        }
    } // namespace RecorderIdUtility
} // namespace app::classes::types