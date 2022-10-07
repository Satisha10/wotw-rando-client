#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FallLink {
        namespace {
            app::FallLink__Class* type_info_ref = nullptr;
        }
        app::FallLink__Class** type_info = &type_info_ref;
        inline app::FallLink__Class* get_class() {
            return il2cpp::get_class<app::FallLink__Class>(type_info, "", "FallLink");
        }
        inline app::FallLink* create() {
            return il2cpp::create_object<app::FallLink>(get_class());
        }
    } // namespace FallLink
} // namespace app::classes::types