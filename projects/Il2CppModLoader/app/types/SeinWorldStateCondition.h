#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinWorldStateCondition {
        namespace {
            app::SeinWorldStateCondition__Class* type_info_ref = nullptr;
        }
        app::SeinWorldStateCondition__Class** type_info = &type_info_ref;
        inline app::SeinWorldStateCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinWorldStateCondition__Class>(type_info, "", "SeinWorldStateCondition");
        }
        inline app::SeinWorldStateCondition* create() {
            return il2cpp::create_object<app::SeinWorldStateCondition>(get_class());
        }
    } // namespace SeinWorldStateCondition
} // namespace app::classes::types