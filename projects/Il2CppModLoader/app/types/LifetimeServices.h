#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LifetimeServices {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LifetimeServices__Class** type_info;
        inline app::LifetimeServices__Class* get_class() {
            return il2cpp::get_class<app::LifetimeServices__Class>(type_info, "System.Runtime.Remoting.Lifetime", "LifetimeServices");
        }
        inline app::LifetimeServices* create() {
            return il2cpp::create_object<app::LifetimeServices>(get_class());
        }
    } // namespace LifetimeServices
} // namespace app::classes::types