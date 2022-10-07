#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CullingCategoryManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CullingCategoryManager__Class** type_info;
        inline app::CullingCategoryManager__Class* get_class() {
            return il2cpp::get_class<app::CullingCategoryManager__Class>(type_info, "Moon.Rendering", "CullingCategoryManager");
        }
        inline app::CullingCategoryManager* create() {
            return il2cpp::create_object<app::CullingCategoryManager>(get_class());
        }
    } // namespace CullingCategoryManager
} // namespace app::classes::types