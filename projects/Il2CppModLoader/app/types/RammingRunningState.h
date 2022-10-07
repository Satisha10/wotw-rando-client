#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingRunningState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RammingRunningState__Class** type_info;
        inline app::RammingRunningState__Class* get_class() {
            return il2cpp::get_class<app::RammingRunningState__Class>(type_info, "", "RammingRunningState");
        }
        inline app::RammingRunningState* create() {
            return il2cpp::create_object<app::RammingRunningState>(get_class());
        }
    } // namespace RammingRunningState
} // namespace app::classes::types