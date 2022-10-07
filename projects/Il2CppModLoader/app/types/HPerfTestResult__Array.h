#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HPerfTestResult__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HPerfTestResult__Array__Class** type_info;
        inline app::HPerfTestResult__Array__Class* get_class() {
            return il2cpp::get_class<app::HPerfTestResult__Array__Class>(type_info, "Moon.HierarchyPerformanceTest", "HPerfTestResult[]");
        }
        inline app::HPerfTestResult__Array* create() {
            return il2cpp::create_object<app::HPerfTestResult__Array>(get_class());
        }
    } // namespace HPerfTestResult__Array
} // namespace app::classes::types