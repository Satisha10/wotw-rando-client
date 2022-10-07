#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPrewarmMasterList {
        namespace {
            app::UberPoolPrewarmMasterList__Class* type_info_ref = nullptr;
        }
        app::UberPoolPrewarmMasterList__Class** type_info = &type_info_ref;
        inline app::UberPoolPrewarmMasterList__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPrewarmMasterList__Class>(type_info, "Moon.pooling", "UberPoolPrewarmMasterList");
        }
        inline app::UberPoolPrewarmMasterList* create() {
            return il2cpp::create_object<app::UberPoolPrewarmMasterList>(get_class());
        }
    } // namespace UberPoolPrewarmMasterList
} // namespace app::classes::types