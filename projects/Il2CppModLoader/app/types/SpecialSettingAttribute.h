#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpecialSettingAttribute {
        namespace {
            app::SpecialSettingAttribute__Class* type_info_ref = nullptr;
        }
        app::SpecialSettingAttribute__Class** type_info = &type_info_ref;
        inline app::SpecialSettingAttribute__Class* get_class() {
            return il2cpp::get_class<app::SpecialSettingAttribute__Class>(type_info, "System.Configuration", "SpecialSettingAttribute");
        }
        inline app::SpecialSettingAttribute* create() {
            return il2cpp::create_object<app::SpecialSettingAttribute>(get_class());
        }
    } // namespace SpecialSettingAttribute
} // namespace app::classes::types