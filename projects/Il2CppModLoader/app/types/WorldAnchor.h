#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldAnchor {
        namespace {
            app::WorldAnchor__Class* type_info_ref = nullptr;
        }
        app::WorldAnchor__Class** type_info = &type_info_ref;
        inline app::WorldAnchor__Class* get_class() {
            return il2cpp::get_class<app::WorldAnchor__Class>(type_info, "UnityEngine.XR.WSA", "WorldAnchor");
        }
        inline app::WorldAnchor* create() {
            return il2cpp::create_object<app::WorldAnchor>(get_class());
        }
    } // namespace WorldAnchor
} // namespace app::classes::types