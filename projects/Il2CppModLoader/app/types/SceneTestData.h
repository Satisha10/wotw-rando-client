#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneTestData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneTestData__Class** type_info;
        inline app::SceneTestData__Class* get_class() {
            return il2cpp::get_class<app::SceneTestData__Class>(type_info, "Moon.HierarchyPerformanceTest", "SceneTestData");
        }
        inline app::SceneTestData* create() {
            return il2cpp::create_object<app::SceneTestData>(get_class());
        }
        inline app::SceneTestData__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneTestData__Array>(get_class(), size);
        }
        inline app::SceneTestData__Array* create_array(const std::vector<app::SceneTestData*>& items) {
            return il2cpp::array_new<app::SceneTestData__Array>(get_class(), items);
        }
    } // namespace SceneTestData
} // namespace app::classes::types