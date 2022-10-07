#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FABRIKChain__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FABRIKChain__Array__Class** type_info;
        inline app::FABRIKChain__Array__Class* get_class() {
            return il2cpp::get_class<app::FABRIKChain__Array__Class>(type_info, "RootMotion.FinalIK", "FABRIKChain[]");
        }
        inline app::FABRIKChain__Array* create() {
            return il2cpp::create_object<app::FABRIKChain__Array>(get_class());
        }
    } // namespace FABRIKChain__Array
} // namespace app::classes::types