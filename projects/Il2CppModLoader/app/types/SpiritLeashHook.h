#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLeashHook {
        namespace {
            app::SpiritLeashHook__Class* type_info_ref = nullptr;
        }
        app::SpiritLeashHook__Class** type_info = &type_info_ref;
        inline app::SpiritLeashHook__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashHook__Class>(type_info, "", "SpiritLeashHook");
        }
        inline app::SpiritLeashHook* create() {
            return il2cpp::create_object<app::SpiritLeashHook>(get_class());
        }
    } // namespace SpiritLeashHook
} // namespace app::classes::types