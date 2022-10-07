#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeltaTimeManager_ControllerType__Enum__Array {
        namespace {
            app::DeltaTimeManager_ControllerType__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::DeltaTimeManager_ControllerType__Enum__Array__Class** type_info = &type_info_ref;
        inline app::DeltaTimeManager_ControllerType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::DeltaTimeManager_ControllerType__Enum__Array__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "DeltaTimeManager+ControllerType[]");
        }
        inline app::DeltaTimeManager_ControllerType__Enum__Array* create() {
            return il2cpp::create_object<app::DeltaTimeManager_ControllerType__Enum__Array>(get_class());
        }
    } // namespace DeltaTimeManager_ControllerType__Enum__Array
} // namespace app::classes::types