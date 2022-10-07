#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XDRSchema {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XDRSchema__Class** type_info;
        inline app::XDRSchema__Class* get_class() {
            return il2cpp::get_class<app::XDRSchema__Class>(type_info, "System.Data", "XDRSchema");
        }
        inline app::XDRSchema* create() {
            return il2cpp::create_object<app::XDRSchema>(get_class());
        }
    } // namespace XDRSchema
} // namespace app::classes::types