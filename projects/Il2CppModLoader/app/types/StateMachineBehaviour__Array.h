#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateMachineBehaviour__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StateMachineBehaviour__Array__Class** type_info;
        inline app::StateMachineBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::StateMachineBehaviour__Array__Class>(type_info, "UnityEngine", "StateMachineBehaviour[]");
        }
        inline app::StateMachineBehaviour__Array* create() {
            return il2cpp::create_object<app::StateMachineBehaviour__Array>(get_class());
        }
    } // namespace StateMachineBehaviour__Array
} // namespace app::classes::types