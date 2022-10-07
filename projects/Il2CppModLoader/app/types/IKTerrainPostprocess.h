#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKTerrainPostprocess {
        namespace {
            app::IKTerrainPostprocess__Class* type_info_ref = nullptr;
        }
        app::IKTerrainPostprocess__Class** type_info = &type_info_ref;
        inline app::IKTerrainPostprocess__Class* get_class() {
            return il2cpp::get_class<app::IKTerrainPostprocess__Class>(type_info, "Moon", "IKTerrainPostprocess");
        }
        inline app::IKTerrainPostprocess* create() {
            return il2cpp::create_object<app::IKTerrainPostprocess>(get_class());
        }
    } // namespace IKTerrainPostprocess
} // namespace app::classes::types