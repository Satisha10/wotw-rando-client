#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetAuthSessionTicketResponse_t {
        namespace {
            app::GetAuthSessionTicketResponse_t__Class* type_info_ref = nullptr;
        }
        app::GetAuthSessionTicketResponse_t__Class** type_info = &type_info_ref;
        inline app::GetAuthSessionTicketResponse_t__Class* get_class() {
            return il2cpp::get_class<app::GetAuthSessionTicketResponse_t__Class>(type_info, "Steamworks", "GetAuthSessionTicketResponse_t");
        }
        inline app::GetAuthSessionTicketResponse_t* create() {
            return il2cpp::create_object<app::GetAuthSessionTicketResponse_t>(get_class());
        }
        inline app::GetAuthSessionTicketResponse_t__Boxed* box(app::GetAuthSessionTicketResponse_t value) {
            return il2cpp::box_value<app::GetAuthSessionTicketResponse_t__Boxed>(get_class(), value);
        }
    } // namespace GetAuthSessionTicketResponse_t
} // namespace app::classes::types