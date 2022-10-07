#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyDoorSlot {
        namespace {
            app::LegacyDoorSlot__Class* type_info_ref = nullptr;
        }
        app::LegacyDoorSlot__Class** type_info = &type_info_ref;
        inline app::LegacyDoorSlot__Class* get_class() {
            return il2cpp::get_class<app::LegacyDoorSlot__Class>(type_info, "", "LegacyDoorSlot");
        }
        inline app::LegacyDoorSlot* create() {
            return il2cpp::create_object<app::LegacyDoorSlot>(get_class());
        }
    } // namespace LegacyDoorSlot
} // namespace app::classes::types