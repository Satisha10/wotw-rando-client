#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugPlayerTeleporter_LocomotionRequestMode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugPlayerTeleporter_LocomotionRequestMode__Enum__Class** type_info;
        inline app::DebugPlayerTeleporter_LocomotionRequestMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugPlayerTeleporter_LocomotionRequestMode__Enum__Class>(type_info, "", "DebugPlayerTeleporter", "LocomotionRequestMode");
        }
        inline app::DebugPlayerTeleporter_LocomotionRequestMode__Enum* create() {
            return il2cpp::create_object<app::DebugPlayerTeleporter_LocomotionRequestMode__Enum>(get_class());
        }
    } // namespace DebugPlayerTeleporter_LocomotionRequestMode__Enum
} // namespace app::classes::types