#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveWorldObjectiveIcon {
        namespace {
            app::MoveWorldObjectiveIcon__Class* type_info_ref = nullptr;
        }
        app::MoveWorldObjectiveIcon__Class** type_info = &type_info_ref;
        inline app::MoveWorldObjectiveIcon__Class* get_class() {
            return il2cpp::get_class<app::MoveWorldObjectiveIcon__Class>(type_info, "", "MoveWorldObjectiveIcon");
        }
        inline app::MoveWorldObjectiveIcon* create() {
            return il2cpp::create_object<app::MoveWorldObjectiveIcon>(get_class());
        }
    } // namespace MoveWorldObjectiveIcon
} // namespace app::classes::types