#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GraphicsJobsSyncPoint__Enum__Array {
        namespace {
            app::GraphicsJobsSyncPoint__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::GraphicsJobsSyncPoint__Enum__Array__Class** type_info = &type_info_ref;
        inline app::GraphicsJobsSyncPoint__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::GraphicsJobsSyncPoint__Enum__Array__Class>(type_info, "UnityEngine.Experimental.Rendering", "GraphicsJobsSyncPoint[]");
        }
        inline app::GraphicsJobsSyncPoint__Enum__Array* create() {
            return il2cpp::create_object<app::GraphicsJobsSyncPoint__Enum__Array>(get_class());
        }
    } // namespace GraphicsJobsSyncPoint__Enum__Array
} // namespace app::classes::types