#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_PerformanceTestManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_PerformanceTestManager__Class** type_info;
        inline app::ShaderID_PerformanceTestManager__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_PerformanceTestManager__Class>(type_info, "", "ShaderID_PerformanceTestManager");
        }
        inline app::ShaderID_PerformanceTestManager* create() {
            return il2cpp::create_object<app::ShaderID_PerformanceTestManager>(get_class());
        }
    } // namespace ShaderID_PerformanceTestManager
} // namespace app::classes::types