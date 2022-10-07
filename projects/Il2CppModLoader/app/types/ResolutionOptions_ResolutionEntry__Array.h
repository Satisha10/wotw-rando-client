#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResolutionOptions_ResolutionEntry__Array {
        namespace {
            app::ResolutionOptions_ResolutionEntry__Array__Class* type_info_ref = nullptr;
        }
        app::ResolutionOptions_ResolutionEntry__Array__Class** type_info = &type_info_ref;
        inline app::ResolutionOptions_ResolutionEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::ResolutionOptions_ResolutionEntry__Array__Class>(type_info, "", "ResolutionOptions+ResolutionEntry[]");
        }
        inline app::ResolutionOptions_ResolutionEntry__Array* create() {
            return il2cpp::create_object<app::ResolutionOptions_ResolutionEntry__Array>(get_class());
        }
    } // namespace ResolutionOptions_ResolutionEntry__Array
} // namespace app::classes::types