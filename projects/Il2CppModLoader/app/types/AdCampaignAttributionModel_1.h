#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AdCampaignAttributionModel_1 {
        namespace {
            app::AdCampaignAttributionModel_1__Class* type_info_ref = nullptr;
        }
        app::AdCampaignAttributionModel_1__Class** type_info = &type_info_ref;
        inline app::AdCampaignAttributionModel_1__Class* get_class() {
            return il2cpp::get_class<app::AdCampaignAttributionModel_1__Class>(type_info, "PlayFab.ServerModels", "AdCampaignAttributionModel");
        }
        inline app::AdCampaignAttributionModel_1* create() {
            return il2cpp::create_object<app::AdCampaignAttributionModel_1>(get_class());
        }
        inline app::AdCampaignAttributionModel_1__Array* create_array(int size) {
            return il2cpp::array_new<app::AdCampaignAttributionModel_1__Array>(get_class(), size);
        }
        inline app::AdCampaignAttributionModel_1__Array* create_array(const std::vector<app::AdCampaignAttributionModel_1*>& items) {
            return il2cpp::array_new<app::AdCampaignAttributionModel_1__Array>(get_class(), items);
        }
    } // namespace AdCampaignAttributionModel_1
} // namespace app::classes::types