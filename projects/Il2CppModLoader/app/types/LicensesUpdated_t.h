#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LicensesUpdated_t {
        namespace {
            app::LicensesUpdated_t__Class* type_info_ref = nullptr;
        }
        app::LicensesUpdated_t__Class** type_info = &type_info_ref;
        inline app::LicensesUpdated_t__Class* get_class() {
            return il2cpp::get_class<app::LicensesUpdated_t__Class>(type_info, "Steamworks", "LicensesUpdated_t");
        }
        inline app::LicensesUpdated_t* create() {
            return il2cpp::create_object<app::LicensesUpdated_t>(get_class());
        }
        inline app::LicensesUpdated_t__Boxed* box(app::LicensesUpdated_t value) {
            return il2cpp::box_value<app::LicensesUpdated_t__Boxed>(get_class(), value);
        }
    } // namespace LicensesUpdated_t
} // namespace app::classes::types