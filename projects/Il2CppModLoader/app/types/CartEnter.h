#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartEnter {
        namespace {
            app::CartEnter__Class* type_info_ref = nullptr;
        }
        app::CartEnter__Class** type_info = &type_info_ref;
        inline app::CartEnter__Class* get_class() {
            return il2cpp::get_class<app::CartEnter__Class>(type_info, "", "CartEnter");
        }
        inline app::CartEnter* create() {
            return il2cpp::create_object<app::CartEnter>(get_class());
        }
    } // namespace CartEnter
} // namespace app::classes::types