#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollisionStayTrigger {
        namespace {
            app::CollisionStayTrigger__Class* type_info_ref = nullptr;
        }
        app::CollisionStayTrigger__Class** type_info = &type_info_ref;
        inline app::CollisionStayTrigger__Class* get_class() {
            return il2cpp::get_class<app::CollisionStayTrigger__Class>(type_info, "", "CollisionStayTrigger");
        }
        inline app::CollisionStayTrigger* create() {
            return il2cpp::create_object<app::CollisionStayTrigger>(get_class());
        }
    } // namespace CollisionStayTrigger
} // namespace app::classes::types