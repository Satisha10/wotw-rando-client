#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_LightSpeedMeasurementHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GPUAutoProfiler_LightSpeedMeasurementHandler__Class** type_info;
        inline app::GPUAutoProfiler_LightSpeedMeasurementHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_LightSpeedMeasurementHandler__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler", "LightSpeedMeasurementHandler");
        }
        inline app::GPUAutoProfiler_LightSpeedMeasurementHandler* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_LightSpeedMeasurementHandler>(get_class());
        }
    } // namespace GPUAutoProfiler_LightSpeedMeasurementHandler
} // namespace app::classes::types