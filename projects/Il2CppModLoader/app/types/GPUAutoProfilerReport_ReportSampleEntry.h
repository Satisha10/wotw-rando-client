#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfilerReport_ReportSampleEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GPUAutoProfilerReport_ReportSampleEntry__Class** type_info;
        inline app::GPUAutoProfilerReport_ReportSampleEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfilerReport_ReportSampleEntry__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfilerReport", "ReportSampleEntry");
        }
        inline app::GPUAutoProfilerReport_ReportSampleEntry* create() {
            return il2cpp::create_object<app::GPUAutoProfilerReport_ReportSampleEntry>(get_class());
        }
        inline app::GPUAutoProfilerReport_ReportSampleEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::GPUAutoProfilerReport_ReportSampleEntry__Array>(get_class(), size);
        }
        inline app::GPUAutoProfilerReport_ReportSampleEntry__Array* create_array(const std::vector<app::GPUAutoProfilerReport_ReportSampleEntry*>& items) {
            return il2cpp::array_new<app::GPUAutoProfilerReport_ReportSampleEntry__Array>(get_class(), items);
        }
    } // namespace GPUAutoProfilerReport_ReportSampleEntry
} // namespace app::classes::types