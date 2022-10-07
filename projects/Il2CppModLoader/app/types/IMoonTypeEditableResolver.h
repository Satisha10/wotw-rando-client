#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonTypeEditableResolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMoonTypeEditableResolver__Class** type_info;
        inline app::IMoonTypeEditableResolver__Class* get_class() {
            return il2cpp::get_class<app::IMoonTypeEditableResolver__Class>(type_info, "Moon", "IMoonTypeEditableResolver");
        }
    } // namespace IMoonTypeEditableResolver
} // namespace app::classes::types