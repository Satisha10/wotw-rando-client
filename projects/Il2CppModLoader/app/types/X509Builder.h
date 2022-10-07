#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509Builder {
        namespace {
            app::X509Builder__Class* type_info_ref = nullptr;
        }
        app::X509Builder__Class** type_info = &type_info_ref;
        inline app::X509Builder__Class* get_class() {
            return il2cpp::get_class<app::X509Builder__Class>(type_info, "Mono.Security.X509", "X509Builder");
        }
        inline app::X509Builder* create() {
            return il2cpp::create_object<app::X509Builder>(get_class());
        }
    } // namespace X509Builder
} // namespace app::classes::types