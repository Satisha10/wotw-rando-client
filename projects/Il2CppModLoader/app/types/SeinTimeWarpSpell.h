#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinTimeWarpSpell {
        namespace {
            app::SeinTimeWarpSpell__Class* type_info_ref = nullptr;
        }
        app::SeinTimeWarpSpell__Class** type_info = &type_info_ref;
        inline app::SeinTimeWarpSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinTimeWarpSpell__Class>(type_info, "", "SeinTimeWarpSpell");
        }
        inline app::SeinTimeWarpSpell* create() {
            return il2cpp::create_object<app::SeinTimeWarpSpell>(get_class());
        }
    } // namespace SeinTimeWarpSpell
} // namespace app::classes::types