#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationTurnTimelineBehaviour {
        namespace {
            app::SpiderBossLocationTurnTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLocationTurnTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationTurnTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationTurnTimelineBehaviour__Class>(type_info, "", "SpiderBossLocationTurnTimelineBehaviour");
        }
        inline app::SpiderBossLocationTurnTimelineBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocationTurnTimelineBehaviour>(get_class());
        }
    } // namespace SpiderBossLocationTurnTimelineBehaviour
} // namespace app::classes::types