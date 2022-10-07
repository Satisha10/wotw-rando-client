#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoBombAttack {
        namespace {
            app::SkeetoBombAttack__Class* type_info_ref = nullptr;
        }
        app::SkeetoBombAttack__Class** type_info = &type_info_ref;
        inline app::SkeetoBombAttack__Class* get_class() {
            return il2cpp::get_class<app::SkeetoBombAttack__Class>(type_info, "", "SkeetoBombAttack");
        }
        inline app::SkeetoBombAttack* create() {
            return il2cpp::create_object<app::SkeetoBombAttack>(get_class());
        }
    } // namespace SkeetoBombAttack
} // namespace app::classes::types