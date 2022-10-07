#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SelectorNode {
        namespace {
            app::SelectorNode__Class* type_info_ref = nullptr;
        }
        app::SelectorNode__Class** type_info = &type_info_ref;
        inline app::SelectorNode__Class* get_class() {
            return il2cpp::get_class<app::SelectorNode__Class>(type_info, "Moon.BehaviourSystem", "SelectorNode");
        }
        inline app::SelectorNode* create() {
            return il2cpp::create_object<app::SelectorNode>(get_class());
        }
    } // namespace SelectorNode
} // namespace app::classes::types