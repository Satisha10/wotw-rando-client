#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MortarHitReaction {
        namespace {
            app::MortarHitReaction__Class* type_info_ref = nullptr;
        }
        app::MortarHitReaction__Class** type_info = &type_info_ref;
        inline app::MortarHitReaction__Class* get_class() {
            return il2cpp::get_class<app::MortarHitReaction__Class>(type_info, "", "MortarHitReaction");
        }
        inline app::MortarHitReaction* create() {
            return il2cpp::create_object<app::MortarHitReaction>(get_class());
        }
    } // namespace MortarHitReaction
} // namespace app::classes::types