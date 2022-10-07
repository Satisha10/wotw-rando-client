#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineConstrainedEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineConstrainedEntity__Class** type_info;
        inline app::TimelineConstrainedEntity__Class* get_class() {
            return il2cpp::get_class<app::TimelineConstrainedEntity__Class>(type_info, "Moon.Timeline", "TimelineConstrainedEntity");
        }
        inline app::TimelineConstrainedEntity* create() {
            return il2cpp::create_object<app::TimelineConstrainedEntity>(get_class());
        }
    } // namespace TimelineConstrainedEntity
} // namespace app::classes::types