#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LineDescent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LineDescent__Class** type_info;
        inline app::LineDescent__Class* get_class() {
            return il2cpp::get_class<app::LineDescent__Class>(type_info, "CatlikeCoding.TextBox", "LineDescent");
        }
        inline app::LineDescent* create() {
            return il2cpp::create_object<app::LineDescent>(get_class());
        }
        inline app::LineDescent__Boxed* box(app::LineDescent value) {
            return il2cpp::box_value<app::LineDescent__Boxed>(get_class(), value);
        }
        inline app::LineDescent__Array* create_array(int size) {
            return il2cpp::array_new<app::LineDescent__Array>(get_class(), size);
        }
        inline app::LineDescent__Array* create_array(const std::vector<app::LineDescent>& items) {
            return il2cpp::array_new<app::LineDescent__Array>(get_class(), items);
        }
    } // namespace LineDescent
} // namespace app::classes::types