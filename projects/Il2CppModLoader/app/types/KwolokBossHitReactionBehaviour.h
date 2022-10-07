#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossHitReactionBehaviour {
        namespace {
            app::KwolokBossHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::KwolokBossHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossHitReactionBehaviour__Class>(type_info, "", "KwolokBossHitReactionBehaviour");
        }
        inline app::KwolokBossHitReactionBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossHitReactionBehaviour>(get_class());
        }
    } // namespace KwolokBossHitReactionBehaviour
} // namespace app::classes::types