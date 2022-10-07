#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonResolverContext {
        namespace {
            app::IMoonResolverContext__Class* type_info_ref = nullptr;
        }
        app::IMoonResolverContext__Class** type_info = &type_info_ref;
        inline app::IMoonResolverContext__Class* get_class() {
            return il2cpp::get_class<app::IMoonResolverContext__Class>(type_info, "Moon", "IMoonResolverContext");
        }
    } // namespace IMoonResolverContext
} // namespace app::classes::types