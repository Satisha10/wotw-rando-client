#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPoolableTimelineEntity__Array {
        namespace {
            app::IPoolableTimelineEntity__Array__Class* type_info_ref = nullptr;
        }
        app::IPoolableTimelineEntity__Array__Class** type_info = &type_info_ref;
        inline app::IPoolableTimelineEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::IPoolableTimelineEntity__Array__Class>(type_info, "Moon.Timeline", "IPoolableTimelineEntity[]");
        }
        inline app::IPoolableTimelineEntity__Array* create() {
            return il2cpp::create_object<app::IPoolableTimelineEntity__Array>(get_class());
        }
    } // namespace IPoolableTimelineEntity__Array
} // namespace app::classes::types