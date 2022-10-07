#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILayoutIgnorer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ILayoutIgnorer__Class** type_info;
        inline app::ILayoutIgnorer__Class* get_class() {
            return il2cpp::get_class<app::ILayoutIgnorer__Class>(type_info, "UnityEngine.UI", "ILayoutIgnorer");
        }
    } // namespace ILayoutIgnorer
} // namespace app::classes::types