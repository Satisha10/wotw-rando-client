#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAxisInput__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAxisInput__Array__Class** type_info;
        inline app::IAxisInput__Array__Class* get_class() {
            return il2cpp::get_class<app::IAxisInput__Array__Class>(type_info, "SmartInput", "IAxisInput[]");
        }
        inline app::IAxisInput__Array* create() {
            return il2cpp::create_object<app::IAxisInput__Array>(get_class());
        }
    } // namespace IAxisInput__Array
} // namespace app::classes::types