#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DroppedFrameMonitor_FrameState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DroppedFrameMonitor_FrameState__Enum__Class** type_info;
        inline app::DroppedFrameMonitor_FrameState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DroppedFrameMonitor_FrameState__Enum__Class>(type_info, "", "DroppedFrameMonitor", "FrameState");
        }
        inline app::DroppedFrameMonitor_FrameState__Enum* create() {
            return il2cpp::create_object<app::DroppedFrameMonitor_FrameState__Enum>(get_class());
        }
    } // namespace DroppedFrameMonitor_FrameState__Enum
} // namespace app::classes::types