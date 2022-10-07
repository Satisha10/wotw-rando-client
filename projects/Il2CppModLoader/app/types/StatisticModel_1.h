#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticModel_1 {
        namespace {
            app::StatisticModel_1__Class* type_info_ref = nullptr;
        }
        app::StatisticModel_1__Class** type_info = &type_info_ref;
        inline app::StatisticModel_1__Class* get_class() {
            return il2cpp::get_class<app::StatisticModel_1__Class>(type_info, "PlayFab.ServerModels", "StatisticModel");
        }
        inline app::StatisticModel_1* create() {
            return il2cpp::create_object<app::StatisticModel_1>(get_class());
        }
        inline app::StatisticModel_1__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticModel_1__Array>(get_class(), size);
        }
        inline app::StatisticModel_1__Array* create_array(const std::vector<app::StatisticModel_1*>& items) {
            return il2cpp::array_new<app::StatisticModel_1__Array>(get_class(), items);
        }
    } // namespace StatisticModel_1
} // namespace app::classes::types