#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Water_WaterMode__Enum {
        namespace {
            app::Water_WaterMode__Enum__Class* type_info_ref = nullptr;
        }
        app::Water_WaterMode__Enum__Class** type_info = &type_info_ref;
        inline app::Water_WaterMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Water_WaterMode__Enum__Class>(type_info, "", "Water", "WaterMode");
        }
        inline app::Water_WaterMode__Enum* create() {
            return il2cpp::create_object<app::Water_WaterMode__Enum>(get_class());
        }
    } // namespace Water_WaterMode__Enum
} // namespace app::classes::types