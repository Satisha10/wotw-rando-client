#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NintendoSwitchDirectory {
        namespace {
            app::NintendoSwitchDirectory__Class* type_info_ref = nullptr;
        }
        app::NintendoSwitchDirectory__Class** type_info = &type_info_ref;
        inline app::NintendoSwitchDirectory__Class* get_class() {
            return il2cpp::get_class<app::NintendoSwitchDirectory__Class>(type_info, "", "NintendoSwitchDirectory");
        }
        inline app::NintendoSwitchDirectory* create() {
            return il2cpp::create_object<app::NintendoSwitchDirectory>(get_class());
        }
    } // namespace NintendoSwitchDirectory
} // namespace app::classes::types