#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimationAssociation {
        namespace {
            app::MoonAnimationAssociation__Class* type_info_ref = nullptr;
        }
        app::MoonAnimationAssociation__Class** type_info = &type_info_ref;
        inline app::MoonAnimationAssociation__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimationAssociation__Class>(type_info, "", "MoonAnimationAssociation");
        }
        inline app::MoonAnimationAssociation* create() {
            return il2cpp::create_object<app::MoonAnimationAssociation>(get_class());
        }
    } // namespace MoonAnimationAssociation
} // namespace app::classes::types