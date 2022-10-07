#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyBabySandWormNew {
        namespace {
            app::LegacyBabySandWormNew__Class* type_info_ref = nullptr;
        }
        app::LegacyBabySandWormNew__Class** type_info = &type_info_ref;
        inline app::LegacyBabySandWormNew__Class* get_class() {
            return il2cpp::get_class<app::LegacyBabySandWormNew__Class>(type_info, "", "LegacyBabySandWormNew");
        }
        inline app::LegacyBabySandWormNew* create() {
            return il2cpp::create_object<app::LegacyBabySandWormNew>(get_class());
        }
    } // namespace LegacyBabySandWormNew
} // namespace app::classes::types