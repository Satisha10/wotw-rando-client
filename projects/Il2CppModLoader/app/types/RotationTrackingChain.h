#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotationTrackingChain {
        namespace {
            app::RotationTrackingChain__Class* type_info_ref = nullptr;
        }
        app::RotationTrackingChain__Class** type_info = &type_info_ref;
        inline app::RotationTrackingChain__Class* get_class() {
            return il2cpp::get_class<app::RotationTrackingChain__Class>(type_info, "", "RotationTrackingChain");
        }
        inline app::RotationTrackingChain* create() {
            return il2cpp::create_object<app::RotationTrackingChain>(get_class());
        }
    } // namespace RotationTrackingChain
} // namespace app::classes::types