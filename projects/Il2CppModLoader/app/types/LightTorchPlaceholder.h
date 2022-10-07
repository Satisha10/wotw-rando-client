#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightTorchPlaceholder {
        namespace {
            app::LightTorchPlaceholder__Class* type_info_ref = nullptr;
        }
        app::LightTorchPlaceholder__Class** type_info = &type_info_ref;
        inline app::LightTorchPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::LightTorchPlaceholder__Class>(type_info, "", "LightTorchPlaceholder");
        }
        inline app::LightTorchPlaceholder* create() {
            return il2cpp::create_object<app::LightTorchPlaceholder>(get_class());
        }
    } // namespace LightTorchPlaceholder
} // namespace app::classes::types