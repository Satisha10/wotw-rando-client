#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TaskCanceledException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TaskCanceledException__Class** type_info;
        inline app::TaskCanceledException__Class* get_class() {
            return il2cpp::get_class<app::TaskCanceledException__Class>(type_info, "System.Threading.Tasks", "TaskCanceledException");
        }
        inline app::TaskCanceledException* create() {
            return il2cpp::create_object<app::TaskCanceledException>(get_class());
        }
    } // namespace TaskCanceledException
} // namespace app::classes::types