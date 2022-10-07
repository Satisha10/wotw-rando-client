#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControlListOptions {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ControlListOptions__Class** type_info;
        inline app::ControlListOptions__Class* get_class() {
            return il2cpp::get_class<app::ControlListOptions__Class>(type_info, "", "ControlListOptions");
        }
        inline app::ControlListOptions* create() {
            return il2cpp::create_object<app::ControlListOptions>(get_class());
        }
    } // namespace ControlListOptions
} // namespace app::classes::types