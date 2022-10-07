#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GCMessageFailed_t {
        namespace {
            app::GCMessageFailed_t__Class* type_info_ref = nullptr;
        }
        app::GCMessageFailed_t__Class** type_info = &type_info_ref;
        inline app::GCMessageFailed_t__Class* get_class() {
            return il2cpp::get_class<app::GCMessageFailed_t__Class>(type_info, "Steamworks", "GCMessageFailed_t");
        }
        inline app::GCMessageFailed_t* create() {
            return il2cpp::create_object<app::GCMessageFailed_t>(get_class());
        }
        inline app::GCMessageFailed_t__Boxed* box(app::GCMessageFailed_t value) {
            return il2cpp::box_value<app::GCMessageFailed_t__Boxed>(get_class(), value);
        }
    } // namespace GCMessageFailed_t
} // namespace app::classes::types