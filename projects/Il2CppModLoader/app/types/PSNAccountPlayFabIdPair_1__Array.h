#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PSNAccountPlayFabIdPair_1__Array {
        namespace {
            app::PSNAccountPlayFabIdPair_1__Array__Class* type_info_ref = nullptr;
        }
        app::PSNAccountPlayFabIdPair_1__Array__Class** type_info = &type_info_ref;
        inline app::PSNAccountPlayFabIdPair_1__Array__Class* get_class() {
            return il2cpp::get_class<app::PSNAccountPlayFabIdPair_1__Array__Class>(type_info, "PlayFab.ServerModels", "PSNAccountPlayFabIdPair[]");
        }
        inline app::PSNAccountPlayFabIdPair_1__Array* create() {
            return il2cpp::create_object<app::PSNAccountPlayFabIdPair_1__Array>(get_class());
        }
    } // namespace PSNAccountPlayFabIdPair_1__Array
} // namespace app::classes::types