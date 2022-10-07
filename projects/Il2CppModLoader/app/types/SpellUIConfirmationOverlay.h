#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellUIConfirmationOverlay {
        namespace {
            app::SpellUIConfirmationOverlay__Class* type_info_ref = nullptr;
        }
        app::SpellUIConfirmationOverlay__Class** type_info = &type_info_ref;
        inline app::SpellUIConfirmationOverlay__Class* get_class() {
            return il2cpp::get_class<app::SpellUIConfirmationOverlay__Class>(type_info, "", "SpellUIConfirmationOverlay");
        }
        inline app::SpellUIConfirmationOverlay* create() {
            return il2cpp::create_object<app::SpellUIConfirmationOverlay>(get_class());
        }
    } // namespace SpellUIConfirmationOverlay
} // namespace app::classes::types