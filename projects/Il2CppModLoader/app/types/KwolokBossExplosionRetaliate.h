#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossExplosionRetaliate {
        namespace {
            app::KwolokBossExplosionRetaliate__Class* type_info_ref = nullptr;
        }
        app::KwolokBossExplosionRetaliate__Class** type_info = &type_info_ref;
        inline app::KwolokBossExplosionRetaliate__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossExplosionRetaliate__Class>(type_info, "", "KwolokBossExplosionRetaliate");
        }
        inline app::KwolokBossExplosionRetaliate* create() {
            return il2cpp::create_object<app::KwolokBossExplosionRetaliate>(get_class());
        }
    } // namespace KwolokBossExplosionRetaliate
} // namespace app::classes::types