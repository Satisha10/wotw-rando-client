#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCommonOutputSettings_PanningRule__Enum {
        namespace {
            app::AkCommonOutputSettings_PanningRule__Enum__Class* type_info_ref = nullptr;
        }
        app::AkCommonOutputSettings_PanningRule__Enum__Class** type_info = &type_info_ref;
        inline app::AkCommonOutputSettings_PanningRule__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCommonOutputSettings_PanningRule__Enum__Class>(type_info, "", "AkCommonOutputSettings", "PanningRule");
        }
        inline app::AkCommonOutputSettings_PanningRule__Enum* create() {
            return il2cpp::create_object<app::AkCommonOutputSettings_PanningRule__Enum>(get_class());
        }
    } // namespace AkCommonOutputSettings_PanningRule__Enum
} // namespace app::classes::types