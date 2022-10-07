#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BloomAndFlares {
        namespace {
            app::BloomAndFlares__Class* type_info_ref = nullptr;
        }
        app::BloomAndFlares__Class** type_info = &type_info_ref;
        inline app::BloomAndFlares__Class* get_class() {
            return il2cpp::get_class<app::BloomAndFlares__Class>(type_info, "UnityStandardAssets.ImageEffects", "BloomAndFlares");
        }
        inline app::BloomAndFlares* create() {
            return il2cpp::create_object<app::BloomAndFlares>(get_class());
        }
    } // namespace BloomAndFlares
} // namespace app::classes::types