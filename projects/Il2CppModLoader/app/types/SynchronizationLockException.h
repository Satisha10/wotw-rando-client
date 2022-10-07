#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SynchronizationLockException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SynchronizationLockException__Class** type_info;
        inline app::SynchronizationLockException__Class* get_class() {
            return il2cpp::get_class<app::SynchronizationLockException__Class>(type_info, "System.Threading", "SynchronizationLockException");
        }
        inline app::SynchronizationLockException* create() {
            return il2cpp::create_object<app::SynchronizationLockException>(get_class());
        }
    } // namespace SynchronizationLockException
} // namespace app::classes::types