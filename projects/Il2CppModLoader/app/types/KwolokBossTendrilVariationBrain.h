#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilVariationBrain {
        namespace {
            app::KwolokBossTendrilVariationBrain__Class* type_info_ref = nullptr;
        }
        app::KwolokBossTendrilVariationBrain__Class** type_info = &type_info_ref;
        inline app::KwolokBossTendrilVariationBrain__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTendrilVariationBrain__Class>(type_info, "", "KwolokBossTendrilVariationBrain");
        }
        inline app::KwolokBossTendrilVariationBrain* create() {
            return il2cpp::create_object<app::KwolokBossTendrilVariationBrain>(get_class());
        }
    } // namespace KwolokBossTendrilVariationBrain
} // namespace app::classes::types