#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCMoonTextColorer {
        namespace {
            app::CCMoonTextColorer__Class* type_info_ref = nullptr;
        }
        app::CCMoonTextColorer__Class** type_info = &type_info_ref;
        inline app::CCMoonTextColorer__Class* get_class() {
            return il2cpp::get_class<app::CCMoonTextColorer__Class>(type_info, "", "CCMoonTextColorer");
        }
        inline app::CCMoonTextColorer* create() {
            return il2cpp::create_object<app::CCMoonTextColorer>(get_class());
        }
    } // namespace CCMoonTextColorer
} // namespace app::classes::types