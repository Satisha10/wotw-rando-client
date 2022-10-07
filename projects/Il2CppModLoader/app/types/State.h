#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace State {
        namespace {
            app::State__Class* type_info_ref = nullptr;
        }
        app::State__Class** type_info = &type_info_ref;
        inline app::State__Class* get_class() {
            return il2cpp::get_class<app::State__Class>(type_info, "AK.Wwise", "State");
        }
        inline app::State* create() {
            return il2cpp::create_object<app::State>(get_class());
        }
        inline app::State__Array* create_array(int size) {
            return il2cpp::array_new<app::State__Array>(get_class(), size);
        }
        inline app::State__Array* create_array(const std::vector<app::State*>& items) {
            return il2cpp::array_new<app::State__Array>(get_class(), items);
        }
    } // namespace State
} // namespace app::classes::types