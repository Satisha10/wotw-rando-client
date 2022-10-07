#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataRowView {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataRowView__Class** type_info;
        inline app::DataRowView__Class* get_class() {
            return il2cpp::get_class<app::DataRowView__Class>(type_info, "System.Data", "DataRowView");
        }
        inline app::DataRowView* create() {
            return il2cpp::create_object<app::DataRowView>(get_class());
        }
        inline app::DataRowView__Array* create_array(int size) {
            return il2cpp::array_new<app::DataRowView__Array>(get_class(), size);
        }
        inline app::DataRowView__Array* create_array(const std::vector<app::DataRowView*>& items) {
            return il2cpp::array_new<app::DataRowView__Array>(get_class(), items);
        }
    } // namespace DataRowView
} // namespace app::classes::types