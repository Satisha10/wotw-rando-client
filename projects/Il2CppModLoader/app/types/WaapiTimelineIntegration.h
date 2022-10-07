#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaapiTimelineIntegration {
        namespace {
            app::WaapiTimelineIntegration__Class* type_info_ref = nullptr;
        }
        app::WaapiTimelineIntegration__Class** type_info = &type_info_ref;
        inline app::WaapiTimelineIntegration__Class* get_class() {
            return il2cpp::get_class<app::WaapiTimelineIntegration__Class>(type_info, "", "WaapiTimelineIntegration");
        }
        inline app::WaapiTimelineIntegration* create() {
            return il2cpp::create_object<app::WaapiTimelineIntegration>(get_class());
        }
    } // namespace WaapiTimelineIntegration
} // namespace app::classes::types