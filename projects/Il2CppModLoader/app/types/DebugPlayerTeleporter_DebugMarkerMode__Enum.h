#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugPlayerTeleporter_DebugMarkerMode__Enum {
        namespace {
            app::DebugPlayerTeleporter_DebugMarkerMode__Enum__Class* type_info_ref = nullptr;
        }
        app::DebugPlayerTeleporter_DebugMarkerMode__Enum__Class** type_info = &type_info_ref;
        inline app::DebugPlayerTeleporter_DebugMarkerMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugPlayerTeleporter_DebugMarkerMode__Enum__Class>(type_info, "", "DebugPlayerTeleporter", "DebugMarkerMode");
        }
        inline app::DebugPlayerTeleporter_DebugMarkerMode__Enum* create() {
            return il2cpp::create_object<app::DebugPlayerTeleporter_DebugMarkerMode__Enum>(get_class());
        }
    } // namespace DebugPlayerTeleporter_DebugMarkerMode__Enum
} // namespace app::classes::types