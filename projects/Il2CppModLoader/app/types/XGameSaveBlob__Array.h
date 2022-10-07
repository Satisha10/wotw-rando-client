#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XGameSaveBlob__Array {
        namespace {
            app::XGameSaveBlob__Array__Class* type_info_ref = nullptr;
        }
        app::XGameSaveBlob__Array__Class** type_info = &type_info_ref;
        inline app::XGameSaveBlob__Array__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveBlob__Array__Class>(type_info, "XGamingRuntime", "XGameSaveBlob[]");
        }
        inline app::XGameSaveBlob__Array* create() {
            return il2cpp::create_object<app::XGameSaveBlob__Array>(get_class());
        }
    } // namespace XGameSaveBlob__Array
} // namespace app::classes::types