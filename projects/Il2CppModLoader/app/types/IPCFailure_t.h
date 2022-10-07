#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPCFailure_t {
        namespace {
            app::IPCFailure_t__Class* type_info_ref = nullptr;
        }
        app::IPCFailure_t__Class** type_info = &type_info_ref;
        inline app::IPCFailure_t__Class* get_class() {
            return il2cpp::get_class<app::IPCFailure_t__Class>(type_info, "Steamworks", "IPCFailure_t");
        }
        inline app::IPCFailure_t* create() {
            return il2cpp::create_object<app::IPCFailure_t>(get_class());
        }
        inline app::IPCFailure_t__Boxed* box(app::IPCFailure_t value) {
            return il2cpp::box_value<app::IPCFailure_t__Boxed>(get_class(), value);
        }
    } // namespace IPCFailure_t
} // namespace app::classes::types