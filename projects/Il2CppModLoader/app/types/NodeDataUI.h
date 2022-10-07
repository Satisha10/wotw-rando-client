#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NodeDataUI {
        namespace {
            app::NodeDataUI__Class* type_info_ref = nullptr;
        }
        app::NodeDataUI__Class** type_info = &type_info_ref;
        inline app::NodeDataUI__Class* get_class() {
            return il2cpp::get_class<app::NodeDataUI__Class>(type_info, "Moon.BehaviourSystem.BTEditor", "NodeDataUI");
        }
        inline app::NodeDataUI* create() {
            return il2cpp::create_object<app::NodeDataUI>(get_class());
        }
        inline app::NodeDataUI__Array* create_array(int size) {
            return il2cpp::array_new<app::NodeDataUI__Array>(get_class(), size);
        }
        inline app::NodeDataUI__Array* create_array(const std::vector<app::NodeDataUI*>& items) {
            return il2cpp::array_new<app::NodeDataUI__Array>(get_class(), items);
        }
    } // namespace NodeDataUI
} // namespace app::classes::types