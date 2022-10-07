#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JSONNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JSONNode__Class** type_info;
        inline app::JSONNode__Class* get_class() {
            return il2cpp::get_class<app::JSONNode__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "JSONNode");
        }
        inline app::JSONNode* create() {
            return il2cpp::create_object<app::JSONNode>(get_class());
        }
        inline app::JSONNode__Array* create_array(int size) {
            return il2cpp::array_new<app::JSONNode__Array>(get_class(), size);
        }
        inline app::JSONNode__Array* create_array(const std::vector<app::JSONNode*>& items) {
            return il2cpp::array_new<app::JSONNode__Array>(get_class(), items);
        }
    } // namespace JSONNode
} // namespace app::classes::types