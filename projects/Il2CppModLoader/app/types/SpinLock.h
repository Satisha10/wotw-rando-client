#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpinLock {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpinLock__Class** type_info;
        inline app::SpinLock__Class* get_class() {
            return il2cpp::get_class<app::SpinLock__Class>(type_info, "System.Threading", "SpinLock");
        }
        inline app::SpinLock* create() {
            return il2cpp::create_object<app::SpinLock>(get_class());
        }
        inline app::SpinLock__Boxed* box(app::SpinLock value) {
            return il2cpp::box_value<app::SpinLock__Boxed>(get_class(), value);
        }
    } // namespace SpinLock
} // namespace app::classes::types