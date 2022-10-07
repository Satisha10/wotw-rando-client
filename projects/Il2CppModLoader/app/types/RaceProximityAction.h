#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceProximityAction {
        namespace {
            app::RaceProximityAction__Class* type_info_ref = nullptr;
        }
        app::RaceProximityAction__Class** type_info = &type_info_ref;
        inline app::RaceProximityAction__Class* get_class() {
            return il2cpp::get_class<app::RaceProximityAction__Class>(type_info, "Moon.Race", "RaceProximityAction");
        }
        inline app::RaceProximityAction* create() {
            return il2cpp::create_object<app::RaceProximityAction>(get_class());
        }
    } // namespace RaceProximityAction
} // namespace app::classes::types