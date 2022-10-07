#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Bloom {
        namespace {
            app::Bloom__Class* type_info_ref = nullptr;
        }
        app::Bloom__Class** type_info = &type_info_ref;
        inline app::Bloom__Class* get_class() {
            return il2cpp::get_class<app::Bloom__Class>(type_info, "UnityStandardAssets.ImageEffects", "Bloom");
        }
        inline app::Bloom* create() {
            return il2cpp::create_object<app::Bloom>(get_class());
        }
    } // namespace Bloom
} // namespace app::classes::types