#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceStartAction {
        namespace {
            app::RaceStartAction__Class* type_info_ref = nullptr;
        }
        app::RaceStartAction__Class** type_info = &type_info_ref;
        inline app::RaceStartAction__Class* get_class() {
            return il2cpp::get_class<app::RaceStartAction__Class>(type_info, "Moon.Race", "RaceStartAction");
        }
        inline app::RaceStartAction* create() {
            return il2cpp::create_object<app::RaceStartAction>(get_class());
        }
    } // namespace RaceStartAction
} // namespace app::classes::types