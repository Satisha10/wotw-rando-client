#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropSlugHitReactionBehaviour {
        namespace {
            app::DropSlugHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::DropSlugHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::DropSlugHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::DropSlugHitReactionBehaviour__Class>(type_info, "", "DropSlugHitReactionBehaviour");
        }
        inline app::DropSlugHitReactionBehaviour* create() {
            return il2cpp::create_object<app::DropSlugHitReactionBehaviour>(get_class());
        }
    } // namespace DropSlugHitReactionBehaviour
} // namespace app::classes::types