#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegisterSkipCutsceneAction {
        namespace {
            app::RegisterSkipCutsceneAction__Class* type_info_ref = nullptr;
        }
        app::RegisterSkipCutsceneAction__Class** type_info = &type_info_ref;
        inline app::RegisterSkipCutsceneAction__Class* get_class() {
            return il2cpp::get_class<app::RegisterSkipCutsceneAction__Class>(type_info, "", "RegisterSkipCutsceneAction");
        }
        inline app::RegisterSkipCutsceneAction* create() {
            return il2cpp::create_object<app::RegisterSkipCutsceneAction>(get_class());
        }
    } // namespace RegisterSkipCutsceneAction
} // namespace app::classes::types