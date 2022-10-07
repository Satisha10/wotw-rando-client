#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderAttackCategory__Enum {
        namespace {
            app::SpiderAttackCategory__Enum__Class* type_info_ref = nullptr;
        }
        app::SpiderAttackCategory__Enum__Class** type_info = &type_info_ref;
        inline app::SpiderAttackCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiderAttackCategory__Enum__Class>(type_info, "", "SpiderAttackCategory");
        }
        inline app::SpiderAttackCategory__Enum* create() {
            return il2cpp::create_object<app::SpiderAttackCategory__Enum>(get_class());
        }
    } // namespace SpiderAttackCategory__Enum
} // namespace app::classes::types