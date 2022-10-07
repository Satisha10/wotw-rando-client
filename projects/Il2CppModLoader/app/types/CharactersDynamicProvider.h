#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharactersDynamicProvider {
        namespace {
            app::CharactersDynamicProvider__Class* type_info_ref = nullptr;
        }
        app::CharactersDynamicProvider__Class** type_info = &type_info_ref;
        inline app::CharactersDynamicProvider__Class* get_class() {
            return il2cpp::get_class<app::CharactersDynamicProvider__Class>(type_info, "", "CharactersDynamicProvider");
        }
        inline app::CharactersDynamicProvider* create() {
            return il2cpp::create_object<app::CharactersDynamicProvider>(get_class());
        }
    } // namespace CharactersDynamicProvider
} // namespace app::classes::types