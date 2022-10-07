#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGlowSpell {
        namespace {
            app::SeinGlowSpell__Class* type_info_ref = nullptr;
        }
        app::SeinGlowSpell__Class** type_info = &type_info_ref;
        inline app::SeinGlowSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinGlowSpell__Class>(type_info, "", "SeinGlowSpell");
        }
        inline app::SeinGlowSpell* create() {
            return il2cpp::create_object<app::SeinGlowSpell>(get_class());
        }
    } // namespace SeinGlowSpell
} // namespace app::classes::types