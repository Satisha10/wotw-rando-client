#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NetSectionGroup {
        namespace {
            app::NetSectionGroup__Class* type_info_ref = nullptr;
        }
        app::NetSectionGroup__Class** type_info = &type_info_ref;
        inline app::NetSectionGroup__Class* get_class() {
            return il2cpp::get_class<app::NetSectionGroup__Class>(type_info, "System.Net.Configuration", "NetSectionGroup");
        }
        inline app::NetSectionGroup* create() {
            return il2cpp::create_object<app::NetSectionGroup>(get_class());
        }
    } // namespace NetSectionGroup
} // namespace app::classes::types