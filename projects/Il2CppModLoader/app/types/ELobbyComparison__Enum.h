#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ELobbyComparison__Enum {
        namespace {
            app::ELobbyComparison__Enum__Class* type_info_ref = nullptr;
        }
        app::ELobbyComparison__Enum__Class** type_info = &type_info_ref;
        inline app::ELobbyComparison__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELobbyComparison__Enum__Class>(type_info, "Steamworks", "ELobbyComparison");
        }
        inline app::ELobbyComparison__Enum* create() {
            return il2cpp::create_object<app::ELobbyComparison__Enum>(get_class());
        }
    } // namespace ELobbyComparison__Enum
} // namespace app::classes::types