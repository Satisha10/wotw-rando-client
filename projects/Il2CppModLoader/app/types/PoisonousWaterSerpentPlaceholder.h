#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PoisonousWaterSerpentPlaceholder {
        namespace {
            app::PoisonousWaterSerpentPlaceholder__Class* type_info_ref = nullptr;
        }
        app::PoisonousWaterSerpentPlaceholder__Class** type_info = &type_info_ref;
        inline app::PoisonousWaterSerpentPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::PoisonousWaterSerpentPlaceholder__Class>(type_info, "", "PoisonousWaterSerpentPlaceholder");
        }
        inline app::PoisonousWaterSerpentPlaceholder* create() {
            return il2cpp::create_object<app::PoisonousWaterSerpentPlaceholder>(get_class());
        }
    } // namespace PoisonousWaterSerpentPlaceholder
} // namespace app::classes::types