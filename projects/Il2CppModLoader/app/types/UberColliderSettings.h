#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberColliderSettings {
        namespace {
            app::UberColliderSettings__Class* type_info_ref = nullptr;
        }
        app::UberColliderSettings__Class** type_info = &type_info_ref;
        inline app::UberColliderSettings__Class* get_class() {
            return il2cpp::get_class<app::UberColliderSettings__Class>(type_info, "", "UberColliderSettings");
        }
        inline app::UberColliderSettings* create() {
            return il2cpp::create_object<app::UberColliderSettings>(get_class());
        }
    } // namespace UberColliderSettings
} // namespace app::classes::types