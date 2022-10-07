#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmbeddedTimelinePreview {
        namespace {
            app::EmbeddedTimelinePreview__Class* type_info_ref = nullptr;
        }
        app::EmbeddedTimelinePreview__Class** type_info = &type_info_ref;
        inline app::EmbeddedTimelinePreview__Class* get_class() {
            return il2cpp::get_class<app::EmbeddedTimelinePreview__Class>(type_info, "", "EmbeddedTimelinePreview");
        }
        inline app::EmbeddedTimelinePreview* create() {
            return il2cpp::create_object<app::EmbeddedTimelinePreview>(get_class());
        }
    } // namespace EmbeddedTimelinePreview
} // namespace app::classes::types