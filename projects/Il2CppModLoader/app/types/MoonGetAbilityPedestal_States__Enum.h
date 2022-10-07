#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonGetAbilityPedestal_States__Enum {
        namespace {
            app::MoonGetAbilityPedestal_States__Enum__Class* type_info_ref = nullptr;
        }
        app::MoonGetAbilityPedestal_States__Enum__Class** type_info = &type_info_ref;
        inline app::MoonGetAbilityPedestal_States__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonGetAbilityPedestal_States__Enum__Class>(type_info, "", "MoonGetAbilityPedestal", "States");
        }
        inline app::MoonGetAbilityPedestal_States__Enum* create() {
            return il2cpp::create_object<app::MoonGetAbilityPedestal_States__Enum>(get_class());
        }
    } // namespace MoonGetAbilityPedestal_States__Enum
} // namespace app::classes::types