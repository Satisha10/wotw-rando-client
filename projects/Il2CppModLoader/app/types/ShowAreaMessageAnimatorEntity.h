#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowAreaMessageAnimatorEntity {
        namespace {
            app::ShowAreaMessageAnimatorEntity__Class* type_info_ref = nullptr;
        }
        app::ShowAreaMessageAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::ShowAreaMessageAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowAreaMessageAnimatorEntity__Class>(type_info, "", "ShowAreaMessageAnimatorEntity");
        }
        inline app::ShowAreaMessageAnimatorEntity* create() {
            return il2cpp::create_object<app::ShowAreaMessageAnimatorEntity>(get_class());
        }
    } // namespace ShowAreaMessageAnimatorEntity
} // namespace app::classes::types