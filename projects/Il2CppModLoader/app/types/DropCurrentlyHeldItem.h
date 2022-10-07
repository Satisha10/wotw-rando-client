#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropCurrentlyHeldItem {
        namespace {
            app::DropCurrentlyHeldItem__Class* type_info_ref = nullptr;
        }
        app::DropCurrentlyHeldItem__Class** type_info = &type_info_ref;
        inline app::DropCurrentlyHeldItem__Class* get_class() {
            return il2cpp::get_class<app::DropCurrentlyHeldItem__Class>(type_info, "", "DropCurrentlyHeldItem");
        }
        inline app::DropCurrentlyHeldItem* create() {
            return il2cpp::create_object<app::DropCurrentlyHeldItem>(get_class());
        }
    } // namespace DropCurrentlyHeldItem
} // namespace app::classes::types