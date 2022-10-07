#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfilerReport_ReportSampleEntry__Array {
        namespace {
            app::GPUAutoProfilerReport_ReportSampleEntry__Array__Class* type_info_ref = nullptr;
        }
        app::GPUAutoProfilerReport_ReportSampleEntry__Array__Class** type_info = &type_info_ref;
        inline app::GPUAutoProfilerReport_ReportSampleEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::GPUAutoProfilerReport_ReportSampleEntry__Array__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfilerReport+ReportSampleEntry[]");
        }
        inline app::GPUAutoProfilerReport_ReportSampleEntry__Array* create() {
            return il2cpp::create_object<app::GPUAutoProfilerReport_ReportSampleEntry__Array>(get_class());
        }
    } // namespace GPUAutoProfilerReport_ReportSampleEntry__Array
} // namespace app::classes::types