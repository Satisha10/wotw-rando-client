#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransportContext {
        namespace {
            app::TransportContext__Class* type_info_ref = nullptr;
        }
        app::TransportContext__Class** type_info = &type_info_ref;
        inline app::TransportContext__Class* get_class() {
            return il2cpp::get_class<app::TransportContext__Class>(type_info, "System.Net", "TransportContext");
        }
        inline app::TransportContext* create() {
            return il2cpp::create_object<app::TransportContext>(get_class());
        }
    } // namespace TransportContext
} // namespace app::classes::types