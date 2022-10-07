#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletStructureAnimationPostprocess {
        namespace {
            app::VerletStructureAnimationPostprocess__Class* type_info_ref = nullptr;
        }
        app::VerletStructureAnimationPostprocess__Class** type_info = &type_info_ref;
        inline app::VerletStructureAnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::VerletStructureAnimationPostprocess__Class>(type_info, "Moon", "VerletStructureAnimationPostprocess");
        }
        inline app::VerletStructureAnimationPostprocess* create() {
            return il2cpp::create_object<app::VerletStructureAnimationPostprocess>(get_class());
        }
    } // namespace VerletStructureAnimationPostprocess
} // namespace app::classes::types