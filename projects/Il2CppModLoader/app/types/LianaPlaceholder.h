#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LianaPlaceholder {
        namespace {
            app::LianaPlaceholder__Class* type_info_ref = nullptr;
        }
        app::LianaPlaceholder__Class** type_info = &type_info_ref;
        inline app::LianaPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::LianaPlaceholder__Class>(type_info, "", "LianaPlaceholder");
        }
        inline app::LianaPlaceholder* create() {
            return il2cpp::create_object<app::LianaPlaceholder>(get_class());
        }
    } // namespace LianaPlaceholder
} // namespace app::classes::types