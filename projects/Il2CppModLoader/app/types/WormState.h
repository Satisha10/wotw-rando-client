#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WormState {
        namespace {
            app::WormState__Class* type_info_ref = nullptr;
        }
        app::WormState__Class** type_info = &type_info_ref;
        inline app::WormState__Class* get_class() {
            return il2cpp::get_class<app::WormState__Class>(type_info, "", "WormState");
        }
        inline app::WormState* create() {
            return il2cpp::create_object<app::WormState>(get_class());
        }
    } // namespace WormState
} // namespace app::classes::types