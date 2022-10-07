#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CutsceneItem {
        namespace {
            app::CutsceneItem__Class* type_info_ref = nullptr;
        }
        app::CutsceneItem__Class** type_info = &type_info_ref;
        inline app::CutsceneItem__Class* get_class() {
            return il2cpp::get_class<app::CutsceneItem__Class>(type_info, "", "CutsceneItem");
        }
        inline app::CutsceneItem* create() {
            return il2cpp::create_object<app::CutsceneItem>(get_class());
        }
    } // namespace CutsceneItem
} // namespace app::classes::types