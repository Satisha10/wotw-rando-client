#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BleachBypass {
        namespace {
            app::BleachBypass__Class* type_info_ref = nullptr;
        }
        app::BleachBypass__Class** type_info = &type_info_ref;
        inline app::BleachBypass__Class* get_class() {
            return il2cpp::get_class<app::BleachBypass__Class>(type_info, "Colorful", "BleachBypass");
        }
        inline app::BleachBypass* create() {
            return il2cpp::create_object<app::BleachBypass>(get_class());
        }
    } // namespace BleachBypass
} // namespace app::classes::types