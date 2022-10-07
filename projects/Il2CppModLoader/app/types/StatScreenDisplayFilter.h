#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatScreenDisplayFilter {
        namespace {
            app::StatScreenDisplayFilter__Class* type_info_ref = nullptr;
        }
        app::StatScreenDisplayFilter__Class** type_info = &type_info_ref;
        inline app::StatScreenDisplayFilter__Class* get_class() {
            return il2cpp::get_class<app::StatScreenDisplayFilter__Class>(type_info, "", "StatScreenDisplayFilter");
        }
        inline app::StatScreenDisplayFilter* create() {
            return il2cpp::create_object<app::StatScreenDisplayFilter>(get_class());
        }
        inline app::StatScreenDisplayFilter__Array* create_array(int size) {
            return il2cpp::array_new<app::StatScreenDisplayFilter__Array>(get_class(), size);
        }
        inline app::StatScreenDisplayFilter__Array* create_array(const std::vector<app::StatScreenDisplayFilter*>& items) {
            return il2cpp::array_new<app::StatScreenDisplayFilter__Array>(get_class(), items);
        }
    } // namespace StatScreenDisplayFilter
} // namespace app::classes::types