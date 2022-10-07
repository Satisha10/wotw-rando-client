#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsXboxSeriesSCondition {
        namespace {
            app::IsXboxSeriesSCondition__Class* type_info_ref = nullptr;
        }
        app::IsXboxSeriesSCondition__Class** type_info = &type_info_ref;
        inline app::IsXboxSeriesSCondition__Class* get_class() {
            return il2cpp::get_class<app::IsXboxSeriesSCondition__Class>(type_info, "", "IsXboxSeriesSCondition");
        }
        inline app::IsXboxSeriesSCondition* create() {
            return il2cpp::create_object<app::IsXboxSeriesSCondition>(get_class());
        }
    } // namespace IsXboxSeriesSCondition
} // namespace app::classes::types