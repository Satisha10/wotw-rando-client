#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HasPurchasedGardenerProjectCondition {
        namespace {
            app::HasPurchasedGardenerProjectCondition__Class* type_info_ref = nullptr;
        }
        app::HasPurchasedGardenerProjectCondition__Class** type_info = &type_info_ref;
        inline app::HasPurchasedGardenerProjectCondition__Class* get_class() {
            return il2cpp::get_class<app::HasPurchasedGardenerProjectCondition__Class>(type_info, "", "HasPurchasedGardenerProjectCondition");
        }
        inline app::HasPurchasedGardenerProjectCondition* create() {
            return il2cpp::create_object<app::HasPurchasedGardenerProjectCondition>(get_class());
        }
    } // namespace HasPurchasedGardenerProjectCondition
} // namespace app::classes::types