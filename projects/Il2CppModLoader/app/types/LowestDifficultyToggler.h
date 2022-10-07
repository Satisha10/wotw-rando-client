#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LowestDifficultyToggler {
        namespace {
            app::LowestDifficultyToggler__Class* type_info_ref = nullptr;
        }
        app::LowestDifficultyToggler__Class** type_info = &type_info_ref;
        inline app::LowestDifficultyToggler__Class* get_class() {
            return il2cpp::get_class<app::LowestDifficultyToggler__Class>(type_info, "", "LowestDifficultyToggler");
        }
        inline app::LowestDifficultyToggler* create() {
            return il2cpp::create_object<app::LowestDifficultyToggler>(get_class());
        }
    } // namespace LowestDifficultyToggler
} // namespace app::classes::types