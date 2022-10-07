#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BossesNamesMessages {
        namespace {
            app::BossesNamesMessages__Class* type_info_ref = nullptr;
        }
        app::BossesNamesMessages__Class** type_info = &type_info_ref;
        inline app::BossesNamesMessages__Class* get_class() {
            return il2cpp::get_class<app::BossesNamesMessages__Class>(type_info, "", "BossesNamesMessages");
        }
        inline app::BossesNamesMessages* create() {
            return il2cpp::create_object<app::BossesNamesMessages>(get_class());
        }
    } // namespace BossesNamesMessages
} // namespace app::classes::types