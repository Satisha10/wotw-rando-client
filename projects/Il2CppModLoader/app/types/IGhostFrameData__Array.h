#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGhostFrameData__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IGhostFrameData__Array__Class** type_info;
        inline app::IGhostFrameData__Array__Class* get_class() {
            return il2cpp::get_class<app::IGhostFrameData__Array__Class>(type_info, "", "IGhostFrameData[]");
        }
        inline app::IGhostFrameData__Array* create() {
            return il2cpp::create_object<app::IGhostFrameData__Array>(get_class());
        }
    } // namespace IGhostFrameData__Array
} // namespace app::classes::types