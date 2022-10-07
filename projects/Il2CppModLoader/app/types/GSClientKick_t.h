#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GSClientKick_t {
        namespace {
            app::GSClientKick_t__Class* type_info_ref = nullptr;
        }
        app::GSClientKick_t__Class** type_info = &type_info_ref;
        inline app::GSClientKick_t__Class* get_class() {
            return il2cpp::get_class<app::GSClientKick_t__Class>(type_info, "Steamworks", "GSClientKick_t");
        }
        inline app::GSClientKick_t* create() {
            return il2cpp::create_object<app::GSClientKick_t>(get_class());
        }
        inline app::GSClientKick_t__Boxed* box(app::GSClientKick_t value) {
            return il2cpp::box_value<app::GSClientKick_t__Boxed>(get_class(), value);
        }
    } // namespace GSClientKick_t
} // namespace app::classes::types