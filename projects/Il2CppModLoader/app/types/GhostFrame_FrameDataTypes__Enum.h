#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostFrame_FrameDataTypes__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostFrame_FrameDataTypes__Enum__Class** type_info;
        inline app::GhostFrame_FrameDataTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostFrame_FrameDataTypes__Enum__Class>(type_info, "", "GhostFrame", "FrameDataTypes");
        }
        inline app::GhostFrame_FrameDataTypes__Enum* create() {
            return il2cpp::create_object<app::GhostFrame_FrameDataTypes__Enum>(get_class());
        }
    } // namespace GhostFrame_FrameDataTypes__Enum
} // namespace app::classes::types