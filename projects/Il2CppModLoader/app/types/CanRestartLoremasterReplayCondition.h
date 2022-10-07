#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CanRestartLoremasterReplayCondition {
        namespace {
            app::CanRestartLoremasterReplayCondition__Class* type_info_ref = nullptr;
        }
        app::CanRestartLoremasterReplayCondition__Class** type_info = &type_info_ref;
        inline app::CanRestartLoremasterReplayCondition__Class* get_class() {
            return il2cpp::get_class<app::CanRestartLoremasterReplayCondition__Class>(type_info, "", "CanRestartLoremasterReplayCondition");
        }
        inline app::CanRestartLoremasterReplayCondition* create() {
            return il2cpp::create_object<app::CanRestartLoremasterReplayCondition>(get_class());
        }
    } // namespace CanRestartLoremasterReplayCondition
} // namespace app::classes::types