#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AchievementUploader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AchievementUploader__Class** type_info;
        inline app::AchievementUploader__Class* get_class() {
            return il2cpp::get_class<app::AchievementUploader__Class>(type_info, "Grdk", "AchievementUploader");
        }
        inline app::AchievementUploader* create() {
            return il2cpp::create_object<app::AchievementUploader>(get_class());
        }
    } // namespace AchievementUploader
} // namespace app::classes::types