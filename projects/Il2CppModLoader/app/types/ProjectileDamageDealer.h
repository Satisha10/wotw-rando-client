#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProjectileDamageDealer {
        namespace {
            app::ProjectileDamageDealer__Class* type_info_ref = nullptr;
        }
        app::ProjectileDamageDealer__Class** type_info = &type_info_ref;
        inline app::ProjectileDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::ProjectileDamageDealer__Class>(type_info, "", "ProjectileDamageDealer");
        }
        inline app::ProjectileDamageDealer* create() {
            return il2cpp::create_object<app::ProjectileDamageDealer>(get_class());
        }
    } // namespace ProjectileDamageDealer
} // namespace app::classes::types