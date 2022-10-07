#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkillTreeAction {
        namespace {
            app::SkillTreeAction__Class* type_info_ref = nullptr;
        }
        app::SkillTreeAction__Class** type_info = &type_info_ref;
        inline app::SkillTreeAction__Class* get_class() {
            return il2cpp::get_class<app::SkillTreeAction__Class>(type_info, "", "SkillTreeAction");
        }
        inline app::SkillTreeAction* create() {
            return il2cpp::create_object<app::SkillTreeAction>(get_class());
        }
    } // namespace SkillTreeAction
} // namespace app::classes::types