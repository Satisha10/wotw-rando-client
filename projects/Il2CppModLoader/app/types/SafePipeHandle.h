#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SafePipeHandle {
        namespace {
            app::SafePipeHandle__Class* type_info_ref = nullptr;
        }
        app::SafePipeHandle__Class** type_info = &type_info_ref;
        inline app::SafePipeHandle__Class* get_class() {
            return il2cpp::get_class<app::SafePipeHandle__Class>(type_info, "Microsoft.Win32.SafeHandles", "SafePipeHandle");
        }
        inline app::SafePipeHandle* create() {
            return il2cpp::create_object<app::SafePipeHandle>(get_class());
        }
    } // namespace SafePipeHandle
} // namespace app::classes::types