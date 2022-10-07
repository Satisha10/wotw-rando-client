#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormReturnToWaterBehaviour {
        namespace {
            app::SandWormReturnToWaterBehaviour__Class* type_info_ref = nullptr;
        }
        app::SandWormReturnToWaterBehaviour__Class** type_info = &type_info_ref;
        inline app::SandWormReturnToWaterBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormReturnToWaterBehaviour__Class>(type_info, "", "SandWormReturnToWaterBehaviour");
        }
        inline app::SandWormReturnToWaterBehaviour* create() {
            return il2cpp::create_object<app::SandWormReturnToWaterBehaviour>(get_class());
        }
    } // namespace SandWormReturnToWaterBehaviour
} // namespace app::classes::types