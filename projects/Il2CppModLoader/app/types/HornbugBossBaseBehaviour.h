#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornbugBossBaseBehaviour {
        namespace {
            app::HornbugBossBaseBehaviour__Class* type_info_ref = nullptr;
        }
        app::HornbugBossBaseBehaviour__Class** type_info = &type_info_ref;
        inline app::HornbugBossBaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornbugBossBaseBehaviour__Class>(type_info, "", "HornbugBossBaseBehaviour");
        }
        inline app::HornbugBossBaseBehaviour* create() {
            return il2cpp::create_object<app::HornbugBossBaseBehaviour>(get_class());
        }
    } // namespace HornbugBossBaseBehaviour
} // namespace app::classes::types