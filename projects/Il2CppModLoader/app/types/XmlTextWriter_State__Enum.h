#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTextWriter_State__Enum {
        namespace {
            app::XmlTextWriter_State__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlTextWriter_State__Enum__Class** type_info = &type_info_ref;
        inline app::XmlTextWriter_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextWriter_State__Enum__Class>(type_info, "System.Xml", "XmlTextWriter", "State");
        }
        inline app::XmlTextWriter_State__Enum* create() {
            return il2cpp::create_object<app::XmlTextWriter_State__Enum>(get_class());
        }
        inline app::XmlTextWriter_State__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlTextWriter_State__Enum__Array>(get_class(), size);
        }
        inline app::XmlTextWriter_State__Enum__Array* create_array(const std::vector<app::XmlTextWriter_State__Enum*>& items) {
            return il2cpp::array_new<app::XmlTextWriter_State__Enum__Array>(get_class(), items);
        }
    } // namespace XmlTextWriter_State__Enum
} // namespace app::classes::types