#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateInventory_QuestItem__Array {
        namespace {
            app::PlayerUberStateInventory_QuestItem__Array__Class* type_info_ref = nullptr;
        }
        app::PlayerUberStateInventory_QuestItem__Array__Class** type_info = &type_info_ref;
        inline app::PlayerUberStateInventory_QuestItem__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateInventory_QuestItem__Array__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateInventory+QuestItem[]");
        }
        inline app::PlayerUberStateInventory_QuestItem__Array* create() {
            return il2cpp::create_object<app::PlayerUberStateInventory_QuestItem__Array>(get_class());
        }
    } // namespace PlayerUberStateInventory_QuestItem__Array
} // namespace app::classes::types