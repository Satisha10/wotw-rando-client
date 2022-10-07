#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StormZone {
        namespace {
            app::StormZone__Class* type_info_ref = nullptr;
        }
        app::StormZone__Class** type_info = &type_info_ref;
        inline app::StormZone__Class* get_class() {
            return il2cpp::get_class<app::StormZone__Class>(type_info, "", "StormZone");
        }
        inline app::StormZone* create() {
            return il2cpp::create_object<app::StormZone>(get_class());
        }
    } // namespace StormZone
} // namespace app::classes::types