#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MistTorch {
        namespace {
            app::MistTorch__Class* type_info_ref = nullptr;
        }
        app::MistTorch__Class** type_info = &type_info_ref;
        inline app::MistTorch__Class* get_class() {
            return il2cpp::get_class<app::MistTorch__Class>(type_info, "", "MistTorch");
        }
        inline app::MistTorch* create() {
            return il2cpp::create_object<app::MistTorch>(get_class());
        }
    } // namespace MistTorch
} // namespace app::classes::types