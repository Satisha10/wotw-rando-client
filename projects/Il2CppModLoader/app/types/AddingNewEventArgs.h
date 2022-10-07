#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddingNewEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddingNewEventArgs__Class** type_info;
        inline app::AddingNewEventArgs__Class* get_class() {
            return il2cpp::get_class<app::AddingNewEventArgs__Class>(type_info, "System.ComponentModel", "AddingNewEventArgs");
        }
        inline app::AddingNewEventArgs* create() {
            return il2cpp::create_object<app::AddingNewEventArgs>(get_class());
        }
    } // namespace AddingNewEventArgs
} // namespace app::classes::types