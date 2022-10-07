#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuMeditateSpell {
        namespace {
            app::KuMeditateSpell__Class* type_info_ref = nullptr;
        }
        app::KuMeditateSpell__Class** type_info = &type_info_ref;
        inline app::KuMeditateSpell__Class* get_class() {
            return il2cpp::get_class<app::KuMeditateSpell__Class>(type_info, "", "KuMeditateSpell");
        }
        inline app::KuMeditateSpell* create() {
            return il2cpp::create_object<app::KuMeditateSpell>(get_class());
        }
    } // namespace KuMeditateSpell
} // namespace app::classes::types