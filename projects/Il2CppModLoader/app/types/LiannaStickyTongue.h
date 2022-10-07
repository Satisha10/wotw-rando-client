#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LiannaStickyTongue {
        namespace {
            app::LiannaStickyTongue__Class* type_info_ref = nullptr;
        }
        app::LiannaStickyTongue__Class** type_info = &type_info_ref;
        inline app::LiannaStickyTongue__Class* get_class() {
            return il2cpp::get_class<app::LiannaStickyTongue__Class>(type_info, "", "LiannaStickyTongue");
        }
        inline app::LiannaStickyTongue* create() {
            return il2cpp::create_object<app::LiannaStickyTongue>(get_class());
        }
    } // namespace LiannaStickyTongue
} // namespace app::classes::types