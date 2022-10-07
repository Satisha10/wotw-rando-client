#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserAchievementIconFetched_t {
        namespace {
            app::UserAchievementIconFetched_t__Class* type_info_ref = nullptr;
        }
        app::UserAchievementIconFetched_t__Class** type_info = &type_info_ref;
        inline app::UserAchievementIconFetched_t__Class* get_class() {
            return il2cpp::get_class<app::UserAchievementIconFetched_t__Class>(type_info, "Steamworks", "UserAchievementIconFetched_t");
        }
        inline app::UserAchievementIconFetched_t* create() {
            return il2cpp::create_object<app::UserAchievementIconFetched_t>(get_class());
        }
        inline app::UserAchievementIconFetched_t__Boxed* box(app::UserAchievementIconFetched_t value) {
            return il2cpp::box_value<app::UserAchievementIconFetched_t__Boxed>(get_class(), value);
        }
    } // namespace UserAchievementIconFetched_t
} // namespace app::classes::types