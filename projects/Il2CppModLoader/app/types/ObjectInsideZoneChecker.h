#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectInsideZoneChecker {
        namespace {
            app::ObjectInsideZoneChecker__Class* type_info_ref = nullptr;
        }
        app::ObjectInsideZoneChecker__Class** type_info = &type_info_ref;
        inline app::ObjectInsideZoneChecker__Class* get_class() {
            return il2cpp::get_class<app::ObjectInsideZoneChecker__Class>(type_info, "", "ObjectInsideZoneChecker");
        }
        inline app::ObjectInsideZoneChecker* create() {
            return il2cpp::create_object<app::ObjectInsideZoneChecker>(get_class());
        }
    } // namespace ObjectInsideZoneChecker
} // namespace app::classes::types