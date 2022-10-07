#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PerformLoremasterReplayRestartAction {
        namespace {
            app::PerformLoremasterReplayRestartAction__Class* type_info_ref = nullptr;
        }
        app::PerformLoremasterReplayRestartAction__Class** type_info = &type_info_ref;
        inline app::PerformLoremasterReplayRestartAction__Class* get_class() {
            return il2cpp::get_class<app::PerformLoremasterReplayRestartAction__Class>(type_info, "", "PerformLoremasterReplayRestartAction");
        }
        inline app::PerformLoremasterReplayRestartAction* create() {
            return il2cpp::create_object<app::PerformLoremasterReplayRestartAction>(get_class());
        }
    } // namespace PerformLoremasterReplayRestartAction
} // namespace app::classes::types