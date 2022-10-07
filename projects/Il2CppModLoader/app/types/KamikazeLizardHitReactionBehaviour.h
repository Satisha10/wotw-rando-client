#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeLizardHitReactionBehaviour {
        namespace {
            app::KamikazeLizardHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::KamikazeLizardHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::KamikazeLizardHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KamikazeLizardHitReactionBehaviour__Class>(type_info, "", "KamikazeLizardHitReactionBehaviour");
        }
        inline app::KamikazeLizardHitReactionBehaviour* create() {
            return il2cpp::create_object<app::KamikazeLizardHitReactionBehaviour>(get_class());
        }
    } // namespace KamikazeLizardHitReactionBehaviour
} // namespace app::classes::types