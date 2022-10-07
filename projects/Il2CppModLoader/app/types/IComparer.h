#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IComparer__Class** type_info;
        inline app::IComparer__Class* get_class() {
            return il2cpp::get_class<app::IComparer__Class>(type_info, "System.Collections", "IComparer");
        }
    } // namespace IComparer
} // namespace app::classes::types