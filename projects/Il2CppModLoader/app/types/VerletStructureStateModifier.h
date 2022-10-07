#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletStructureStateModifier {
        namespace {
            app::VerletStructureStateModifier__Class* type_info_ref = nullptr;
        }
        app::VerletStructureStateModifier__Class** type_info = &type_info_ref;
        inline app::VerletStructureStateModifier__Class* get_class() {
            return il2cpp::get_class<app::VerletStructureStateModifier__Class>(type_info, "", "VerletStructureStateModifier");
        }
        inline app::VerletStructureStateModifier* create() {
            return il2cpp::create_object<app::VerletStructureStateModifier>(get_class());
        }
    } // namespace VerletStructureStateModifier
} // namespace app::classes::types