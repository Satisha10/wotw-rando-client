#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProfilerMetric {
        namespace {
            app::ProfilerMetric__Class* type_info_ref = nullptr;
        }
        app::ProfilerMetric__Class** type_info = &type_info_ref;
        inline app::ProfilerMetric__Class* get_class() {
            return il2cpp::get_class<app::ProfilerMetric__Class>(type_info, "", "ProfilerMetric");
        }
        inline app::ProfilerMetric* create() {
            return il2cpp::create_object<app::ProfilerMetric>(get_class());
        }
        inline app::ProfilerMetric__Boxed* box(app::ProfilerMetric value) {
            return il2cpp::box_value<app::ProfilerMetric__Boxed>(get_class(), value);
        }
    } // namespace ProfilerMetric
} // namespace app::classes::types