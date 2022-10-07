#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinTimeToGroundCondition {
        namespace {
            app::SeinTimeToGroundCondition__Class* type_info_ref = nullptr;
        }
        app::SeinTimeToGroundCondition__Class** type_info = &type_info_ref;
        inline app::SeinTimeToGroundCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinTimeToGroundCondition__Class>(type_info, "", "SeinTimeToGroundCondition");
        }
        inline app::SeinTimeToGroundCondition* create() {
            return il2cpp::create_object<app::SeinTimeToGroundCondition>(get_class());
        }
    } // namespace SeinTimeToGroundCondition
} // namespace app::classes::types