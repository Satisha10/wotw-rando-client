#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterFall_WaterLine__Array {
        namespace {
            app::WaterFall_WaterLine__Array__Class* type_info_ref = nullptr;
        }
        app::WaterFall_WaterLine__Array__Class** type_info = &type_info_ref;
        inline app::WaterFall_WaterLine__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterFall_WaterLine__Array__Class>(type_info, "Moon", "WaterFall+WaterLine[]");
        }
        inline app::WaterFall_WaterLine__Array* create() {
            return il2cpp::create_object<app::WaterFall_WaterLine__Array>(get_class());
        }
    } // namespace WaterFall_WaterLine__Array
} // namespace app::classes::types