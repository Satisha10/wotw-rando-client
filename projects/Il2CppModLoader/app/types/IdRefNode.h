#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IdRefNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IdRefNode__Class** type_info;
        inline app::IdRefNode__Class* get_class() {
            return il2cpp::get_class<app::IdRefNode__Class>(type_info, "System.Xml.Schema", "IdRefNode");
        }
        inline app::IdRefNode* create() {
            return il2cpp::create_object<app::IdRefNode>(get_class());
        }
    } // namespace IdRefNode
} // namespace app::classes::types