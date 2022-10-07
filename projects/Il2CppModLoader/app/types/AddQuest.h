#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddQuest {
        namespace {
            app::AddQuest__Class* type_info_ref = nullptr;
        }
        app::AddQuest__Class** type_info = &type_info_ref;
        inline app::AddQuest__Class* get_class() {
            return il2cpp::get_class<app::AddQuest__Class>(type_info, "", "AddQuest");
        }
        inline app::AddQuest* create() {
            return il2cpp::create_object<app::AddQuest>(get_class());
        }
    } // namespace AddQuest
} // namespace app::classes::types