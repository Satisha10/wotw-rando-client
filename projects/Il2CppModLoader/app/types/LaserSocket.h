#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserSocket {
        namespace {
            app::LaserSocket__Class* type_info_ref = nullptr;
        }
        app::LaserSocket__Class** type_info = &type_info_ref;
        inline app::LaserSocket__Class* get_class() {
            return il2cpp::get_class<app::LaserSocket__Class>(type_info, "", "LaserSocket");
        }
        inline app::LaserSocket* create() {
            return il2cpp::create_object<app::LaserSocket>(get_class());
        }
    } // namespace LaserSocket
} // namespace app::classes::types