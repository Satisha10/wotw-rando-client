#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriBar {
        namespace {
            app::OriBar__Class* type_info_ref = nullptr;
        }
        app::OriBar__Class** type_info = &type_info_ref;
        inline app::OriBar__Class* get_class() {
            return il2cpp::get_class<app::OriBar__Class>(type_info, "", "OriBar");
        }
        inline app::OriBar* create() {
            return il2cpp::create_object<app::OriBar>(get_class());
        }
    } // namespace OriBar
} // namespace app::classes::types