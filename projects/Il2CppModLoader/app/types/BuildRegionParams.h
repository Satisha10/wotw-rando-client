#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuildRegionParams {
        namespace {
            app::BuildRegionParams__Class* type_info_ref = nullptr;
        }
        app::BuildRegionParams__Class** type_info = &type_info_ref;
        inline app::BuildRegionParams__Class* get_class() {
            return il2cpp::get_class<app::BuildRegionParams__Class>(type_info, "PlayFab.MultiplayerModels", "BuildRegionParams");
        }
        inline app::BuildRegionParams* create() {
            return il2cpp::create_object<app::BuildRegionParams>(get_class());
        }
        inline app::BuildRegionParams__Array* create_array(int size) {
            return il2cpp::array_new<app::BuildRegionParams__Array>(get_class(), size);
        }
        inline app::BuildRegionParams__Array* create_array(const std::vector<app::BuildRegionParams*>& items) {
            return il2cpp::array_new<app::BuildRegionParams__Array>(get_class(), items);
        }
    } // namespace BuildRegionParams
} // namespace app::classes::types