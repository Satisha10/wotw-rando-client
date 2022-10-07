#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreditsTextPosition {
        namespace {
            app::CreditsTextPosition__Class* type_info_ref = nullptr;
        }
        app::CreditsTextPosition__Class** type_info = &type_info_ref;
        inline app::CreditsTextPosition__Class* get_class() {
            return il2cpp::get_class<app::CreditsTextPosition__Class>(type_info, "", "CreditsTextPosition");
        }
        inline app::CreditsTextPosition* create() {
            return il2cpp::create_object<app::CreditsTextPosition>(get_class());
        }
    } // namespace CreditsTextPosition
} // namespace app::classes::types