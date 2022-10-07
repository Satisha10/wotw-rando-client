#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivateAndHold {
        namespace {
            app::ActivateAndHold__Class* type_info_ref = nullptr;
        }
        app::ActivateAndHold__Class** type_info = &type_info_ref;
        inline app::ActivateAndHold__Class* get_class() {
            return il2cpp::get_class<app::ActivateAndHold__Class>(type_info, "", "ActivateAndHold");
        }
        inline app::ActivateAndHold* create() {
            return il2cpp::create_object<app::ActivateAndHold>(get_class());
        }
    } // namespace ActivateAndHold
} // namespace app::classes::types