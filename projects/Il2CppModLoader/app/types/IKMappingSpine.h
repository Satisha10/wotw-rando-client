#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKMappingSpine {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKMappingSpine__Class** type_info;
        inline app::IKMappingSpine__Class* get_class() {
            return il2cpp::get_class<app::IKMappingSpine__Class>(type_info, "RootMotion.FinalIK", "IKMappingSpine");
        }
        inline app::IKMappingSpine* create() {
            return il2cpp::create_object<app::IKMappingSpine>(get_class());
        }
    } // namespace IKMappingSpine
} // namespace app::classes::types