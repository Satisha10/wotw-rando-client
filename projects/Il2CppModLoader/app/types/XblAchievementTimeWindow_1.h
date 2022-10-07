#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementTimeWindow_1 {
        namespace {
            app::XblAchievementTimeWindow_1__Class* type_info_ref = nullptr;
        }
        app::XblAchievementTimeWindow_1__Class** type_info = &type_info_ref;
        inline app::XblAchievementTimeWindow_1__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementTimeWindow_1__Class>(type_info, "XGamingRuntime.Interop", "XblAchievementTimeWindow");
        }
        inline app::XblAchievementTimeWindow_1* create() {
            return il2cpp::create_object<app::XblAchievementTimeWindow_1>(get_class());
        }
        inline app::XblAchievementTimeWindow_1__Boxed* box(app::XblAchievementTimeWindow_1 value) {
            return il2cpp::box_value<app::XblAchievementTimeWindow_1__Boxed>(get_class(), value);
        }
    } // namespace XblAchievementTimeWindow_1
} // namespace app::classes::types