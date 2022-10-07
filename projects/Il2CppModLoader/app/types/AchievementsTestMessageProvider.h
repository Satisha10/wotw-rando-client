#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AchievementsTestMessageProvider {
        namespace {
            app::AchievementsTestMessageProvider__Class* type_info_ref = nullptr;
        }
        app::AchievementsTestMessageProvider__Class** type_info = &type_info_ref;
        inline app::AchievementsTestMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::AchievementsTestMessageProvider__Class>(type_info, "", "AchievementsTestMessageProvider");
        }
        inline app::AchievementsTestMessageProvider* create() {
            return il2cpp::create_object<app::AchievementsTestMessageProvider>(get_class());
        }
    } // namespace AchievementsTestMessageProvider
} // namespace app::classes::types