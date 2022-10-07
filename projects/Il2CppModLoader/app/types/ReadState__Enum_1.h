#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReadState__Enum_1 {
        namespace {
            app::ReadState__Enum_1__Class* type_info_ref = nullptr;
        }
        app::ReadState__Enum_1__Class** type_info = &type_info_ref;
        inline app::ReadState__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::ReadState__Enum_1__Class>(type_info, "System.Xml", "ReadState");
        }
        inline app::ReadState__Enum_1* create() {
            return il2cpp::create_object<app::ReadState__Enum_1>(get_class());
        }
        inline app::ReadState__Enum_1__Array* create_array(int size) {
            return il2cpp::array_new<app::ReadState__Enum_1__Array>(get_class(), size);
        }
        inline app::ReadState__Enum_1__Array* create_array(const std::vector<app::ReadState__Enum_1*>& items) {
            return il2cpp::array_new<app::ReadState__Enum_1__Array>(get_class(), items);
        }
    } // namespace ReadState__Enum_1
} // namespace app::classes::types