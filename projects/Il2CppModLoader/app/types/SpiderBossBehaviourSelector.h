#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossBehaviourSelector {
        namespace {
            app::SpiderBossBehaviourSelector__Class* type_info_ref = nullptr;
        }
        app::SpiderBossBehaviourSelector__Class** type_info = &type_info_ref;
        inline app::SpiderBossBehaviourSelector__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBehaviourSelector__Class>(type_info, "", "SpiderBossBehaviourSelector");
        }
        inline app::SpiderBossBehaviourSelector* create() {
            return il2cpp::create_object<app::SpiderBossBehaviourSelector>(get_class());
        }
    } // namespace SpiderBossBehaviourSelector
} // namespace app::classes::types