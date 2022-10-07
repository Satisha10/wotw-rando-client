#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MidpointRounding__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MidpointRounding__Enum__Class** type_info;
        inline app::MidpointRounding__Enum__Class* get_class() {
            return il2cpp::get_class<app::MidpointRounding__Enum__Class>(type_info, "System", "MidpointRounding");
        }
        inline app::MidpointRounding__Enum* create() {
            return il2cpp::create_object<app::MidpointRounding__Enum>(get_class());
        }
    } // namespace MidpointRounding__Enum
} // namespace app::classes::types