#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StaticTree {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StaticTree__Class** type_info;
        inline app::StaticTree__Class* get_class() {
            return il2cpp::get_class<app::StaticTree__Class>(type_info, "Ionic.Zlib", "StaticTree");
        }
        inline app::StaticTree* create() {
            return il2cpp::create_object<app::StaticTree>(get_class());
        }
    } // namespace StaticTree
} // namespace app::classes::types