#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SelectedSaveValidCondition {
        namespace {
            app::SelectedSaveValidCondition__Class* type_info_ref = nullptr;
        }
        app::SelectedSaveValidCondition__Class** type_info = &type_info_ref;
        inline app::SelectedSaveValidCondition__Class* get_class() {
            return il2cpp::get_class<app::SelectedSaveValidCondition__Class>(type_info, "", "SelectedSaveValidCondition");
        }
        inline app::SelectedSaveValidCondition* create() {
            return il2cpp::create_object<app::SelectedSaveValidCondition>(get_class());
        }
    } // namespace SelectedSaveValidCondition
} // namespace app::classes::types