#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Internal_SubsystemDescriptors {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Internal_SubsystemDescriptors__Class** type_info;
        inline app::Internal_SubsystemDescriptors__Class* get_class() {
            return il2cpp::get_class<app::Internal_SubsystemDescriptors__Class>(type_info, "UnityEngine.Experimental", "Internal_SubsystemDescriptors");
        }
        inline app::Internal_SubsystemDescriptors* create() {
            return il2cpp::create_object<app::Internal_SubsystemDescriptors>(get_class());
        }
    } // namespace Internal_SubsystemDescriptors
} // namespace app::classes::types