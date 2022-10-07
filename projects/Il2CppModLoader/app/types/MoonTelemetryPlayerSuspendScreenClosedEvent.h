#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSuspendScreenClosedEvent {
        namespace {
            app::MoonTelemetryPlayerSuspendScreenClosedEvent__Class* type_info_ref = nullptr;
        }
        app::MoonTelemetryPlayerSuspendScreenClosedEvent__Class** type_info = &type_info_ref;
        inline app::MoonTelemetryPlayerSuspendScreenClosedEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSuspendScreenClosedEvent__Class>(type_info, "", "MoonTelemetryPlayerSuspendScreenClosedEvent");
        }
        inline app::MoonTelemetryPlayerSuspendScreenClosedEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSuspendScreenClosedEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSuspendScreenClosedEvent
} // namespace app::classes::types