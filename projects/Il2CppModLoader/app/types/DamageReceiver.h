#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageReceiver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageReceiver__Class** type_info;
        inline app::DamageReceiver__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiver__Class>(type_info, "Moon", "DamageReceiver");
        }
        inline app::DamageReceiver* create() {
            return il2cpp::create_object<app::DamageReceiver>(get_class());
        }
        inline app::DamageReceiver__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageReceiver__Array>(get_class(), size);
        }
        inline app::DamageReceiver__Array* create_array(const std::vector<app::DamageReceiver*>& items) {
            return il2cpp::array_new<app::DamageReceiver__Array>(get_class(), items);
        }
    } // namespace DamageReceiver
} // namespace app::classes::types