#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnhighlightMapStoneAction {
        namespace {
            app::UnhighlightMapStoneAction__Class* type_info_ref = nullptr;
        }
        app::UnhighlightMapStoneAction__Class** type_info = &type_info_ref;
        inline app::UnhighlightMapStoneAction__Class* get_class() {
            return il2cpp::get_class<app::UnhighlightMapStoneAction__Class>(type_info, "", "UnhighlightMapStoneAction");
        }
        inline app::UnhighlightMapStoneAction* create() {
            return il2cpp::create_object<app::UnhighlightMapStoneAction>(get_class());
        }
    } // namespace UnhighlightMapStoneAction
} // namespace app::classes::types