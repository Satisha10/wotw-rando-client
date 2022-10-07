#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LanguageCondition {
        namespace {
            app::LanguageCondition__Class* type_info_ref = nullptr;
        }
        app::LanguageCondition__Class** type_info = &type_info_ref;
        inline app::LanguageCondition__Class* get_class() {
            return il2cpp::get_class<app::LanguageCondition__Class>(type_info, "", "LanguageCondition");
        }
        inline app::LanguageCondition* create() {
            return il2cpp::create_object<app::LanguageCondition>(get_class());
        }
    } // namespace LanguageCondition
} // namespace app::classes::types