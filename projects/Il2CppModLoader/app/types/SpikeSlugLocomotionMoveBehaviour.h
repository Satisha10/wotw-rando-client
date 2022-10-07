#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugLocomotionMoveBehaviour {
        namespace {
            app::SpikeSlugLocomotionMoveBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpikeSlugLocomotionMoveBehaviour__Class** type_info = &type_info_ref;
        inline app::SpikeSlugLocomotionMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugLocomotionMoveBehaviour__Class>(type_info, "", "SpikeSlugLocomotionMoveBehaviour");
        }
        inline app::SpikeSlugLocomotionMoveBehaviour* create() {
            return il2cpp::create_object<app::SpikeSlugLocomotionMoveBehaviour>(get_class());
        }
    } // namespace SpikeSlugLocomotionMoveBehaviour
} // namespace app::classes::types