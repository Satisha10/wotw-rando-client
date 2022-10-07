#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializationSetupGroup_StateChange {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializationSetupGroup_StateChange__Class** type_info;
        inline app::SerializationSetupGroup_StateChange__Class* get_class() {
            return il2cpp::get_nested_class<app::SerializationSetupGroup_StateChange__Class>(type_info, "", "SerializationSetupGroup", "StateChange");
        }
        inline app::SerializationSetupGroup_StateChange* create() {
            return il2cpp::create_object<app::SerializationSetupGroup_StateChange>(get_class());
        }
    } // namespace SerializationSetupGroup_StateChange
} // namespace app::classes::types