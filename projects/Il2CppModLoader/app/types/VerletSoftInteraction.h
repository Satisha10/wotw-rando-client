#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletSoftInteraction {
        namespace {
            app::VerletSoftInteraction__Class* type_info_ref = nullptr;
        }
        app::VerletSoftInteraction__Class** type_info = &type_info_ref;
        inline app::VerletSoftInteraction__Class* get_class() {
            return il2cpp::get_class<app::VerletSoftInteraction__Class>(type_info, "", "VerletSoftInteraction");
        }
        inline app::VerletSoftInteraction* create() {
            return il2cpp::create_object<app::VerletSoftInteraction>(get_class());
        }
    } // namespace VerletSoftInteraction
} // namespace app::classes::types