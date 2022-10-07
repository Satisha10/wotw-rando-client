#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollisionTriggerSetupData {
        namespace {
            app::CollisionTriggerSetupData__Class* type_info_ref = nullptr;
        }
        app::CollisionTriggerSetupData__Class** type_info = &type_info_ref;
        inline app::CollisionTriggerSetupData__Class* get_class() {
            return il2cpp::get_class<app::CollisionTriggerSetupData__Class>(type_info, "", "CollisionTriggerSetupData");
        }
        inline app::CollisionTriggerSetupData* create() {
            return il2cpp::create_object<app::CollisionTriggerSetupData>(get_class());
        }
        inline app::CollisionTriggerSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::CollisionTriggerSetupData__Array>(get_class(), size);
        }
        inline app::CollisionTriggerSetupData__Array* create_array(const std::vector<app::CollisionTriggerSetupData*>& items) {
            return il2cpp::array_new<app::CollisionTriggerSetupData__Array>(get_class(), items);
        }
    } // namespace CollisionTriggerSetupData
} // namespace app::classes::types