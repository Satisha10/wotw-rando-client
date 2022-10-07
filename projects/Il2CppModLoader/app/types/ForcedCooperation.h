#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ForcedCooperation {
        namespace {
            app::ForcedCooperation__Class* type_info_ref = nullptr;
        }
        app::ForcedCooperation__Class** type_info = &type_info_ref;
        inline app::ForcedCooperation__Class* get_class() {
            return il2cpp::get_class<app::ForcedCooperation__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ForcedCooperation");
        }
        inline app::ForcedCooperation* create() {
            return il2cpp::create_object<app::ForcedCooperation>(get_class());
        }
    } // namespace ForcedCooperation
} // namespace app::classes::types