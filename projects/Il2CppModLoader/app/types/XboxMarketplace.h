#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxMarketplace {
        namespace {
            app::XboxMarketplace__Class* type_info_ref = nullptr;
        }
        app::XboxMarketplace__Class** type_info = &type_info_ref;
        inline app::XboxMarketplace__Class* get_class() {
            return il2cpp::get_class<app::XboxMarketplace__Class>(type_info, "", "XboxMarketplace");
        }
        inline app::XboxMarketplace* create() {
            return il2cpp::create_object<app::XboxMarketplace>(get_class());
        }
    } // namespace XboxMarketplace
} // namespace app::classes::types