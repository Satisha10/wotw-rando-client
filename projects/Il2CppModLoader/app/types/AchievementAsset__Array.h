#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AchievementAsset__Array {
        namespace {
            app::AchievementAsset__Array__Class* type_info_ref = nullptr;
        }
        app::AchievementAsset__Array__Class** type_info = &type_info_ref;
        inline app::AchievementAsset__Array__Class* get_class() {
            return il2cpp::get_class<app::AchievementAsset__Array__Class>(type_info, "", "AchievementAsset[]");
        }
        inline app::AchievementAsset__Array* create() {
            return il2cpp::create_object<app::AchievementAsset__Array>(get_class());
        }
    } // namespace AchievementAsset__Array
} // namespace app::classes::types