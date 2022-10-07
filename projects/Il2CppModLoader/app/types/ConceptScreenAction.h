#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConceptScreenAction {
        namespace {
            app::ConceptScreenAction__Class* type_info_ref = nullptr;
        }
        app::ConceptScreenAction__Class** type_info = &type_info_ref;
        inline app::ConceptScreenAction__Class* get_class() {
            return il2cpp::get_class<app::ConceptScreenAction__Class>(type_info, "", "ConceptScreenAction");
        }
        inline app::ConceptScreenAction* create() {
            return il2cpp::create_object<app::ConceptScreenAction>(get_class());
        }
    } // namespace ConceptScreenAction
} // namespace app::classes::types