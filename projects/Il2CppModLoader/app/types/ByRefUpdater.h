#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ByRefUpdater {
        namespace {
            app::ByRefUpdater__Class* type_info_ref = nullptr;
        }
        app::ByRefUpdater__Class** type_info = &type_info_ref;
        inline app::ByRefUpdater__Class* get_class() {
            return il2cpp::get_class<app::ByRefUpdater__Class>(type_info, "System.Linq.Expressions.Interpreter", "ByRefUpdater");
        }
        inline app::ByRefUpdater* create() {
            return il2cpp::create_object<app::ByRefUpdater>(get_class());
        }
        inline app::ByRefUpdater__Array* create_array(int size) {
            return il2cpp::array_new<app::ByRefUpdater__Array>(get_class(), size);
        }
        inline app::ByRefUpdater__Array* create_array(const std::vector<app::ByRefUpdater*>& items) {
            return il2cpp::array_new<app::ByRefUpdater__Array>(get_class(), items);
        }
    } // namespace ByRefUpdater
} // namespace app::classes::types