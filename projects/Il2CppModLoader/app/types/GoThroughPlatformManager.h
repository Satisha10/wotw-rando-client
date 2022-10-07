#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GoThroughPlatformManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GoThroughPlatformManager__Class** type_info;
        inline app::GoThroughPlatformManager__Class* get_class() {
            return il2cpp::get_class<app::GoThroughPlatformManager__Class>(type_info, "", "GoThroughPlatformManager");
        }
        inline app::GoThroughPlatformManager* create() {
            return il2cpp::create_object<app::GoThroughPlatformManager>(get_class());
        }
    } // namespace GoThroughPlatformManager
} // namespace app::classes::types