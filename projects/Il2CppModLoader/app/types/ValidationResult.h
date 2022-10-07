#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidationResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValidationResult__Class** type_info;
        inline app::ValidationResult__Class* get_class() {
            return il2cpp::get_class<app::ValidationResult__Class>(type_info, "Mono.Security.Interface", "ValidationResult");
        }
        inline app::ValidationResult* create() {
            return il2cpp::create_object<app::ValidationResult>(get_class());
        }
    } // namespace ValidationResult
} // namespace app::classes::types