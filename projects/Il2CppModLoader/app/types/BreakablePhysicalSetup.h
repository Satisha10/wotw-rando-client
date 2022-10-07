#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BreakablePhysicalSetup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BreakablePhysicalSetup__Class** type_info;
        inline app::BreakablePhysicalSetup__Class* get_class() {
            return il2cpp::get_class<app::BreakablePhysicalSetup__Class>(type_info, "", "BreakablePhysicalSetup");
        }
        inline app::BreakablePhysicalSetup* create() {
            return il2cpp::create_object<app::BreakablePhysicalSetup>(get_class());
        }
    } // namespace BreakablePhysicalSetup
} // namespace app::classes::types