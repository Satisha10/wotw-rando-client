#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonProfilerSample {
        namespace {
            app::MoonProfilerSample__Class* type_info_ref = nullptr;
        }
        app::MoonProfilerSample__Class** type_info = &type_info_ref;
        inline app::MoonProfilerSample__Class* get_class() {
            return il2cpp::get_class<app::MoonProfilerSample__Class>(type_info, "Moon", "MoonProfilerSample");
        }
        inline app::MoonProfilerSample* create() {
            return il2cpp::create_object<app::MoonProfilerSample>(get_class());
        }
        inline app::MoonProfilerSample__Boxed* box(app::MoonProfilerSample value) {
            return il2cpp::box_value<app::MoonProfilerSample__Boxed>(get_class(), value);
        }
    } // namespace MoonProfilerSample
} // namespace app::classes::types