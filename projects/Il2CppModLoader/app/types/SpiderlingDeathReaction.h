#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderlingDeathReaction {
        namespace {
            app::SpiderlingDeathReaction__Class* type_info_ref = nullptr;
        }
        app::SpiderlingDeathReaction__Class** type_info = &type_info_ref;
        inline app::SpiderlingDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingDeathReaction__Class>(type_info, "", "SpiderlingDeathReaction");
        }
        inline app::SpiderlingDeathReaction* create() {
            return il2cpp::create_object<app::SpiderlingDeathReaction>(get_class());
        }
    } // namespace SpiderlingDeathReaction
} // namespace app::classes::types