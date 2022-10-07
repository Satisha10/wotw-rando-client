#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIConfirmationOverlay {
        namespace {
            app::SpiritShardUIConfirmationOverlay__Class* type_info_ref = nullptr;
        }
        app::SpiritShardUIConfirmationOverlay__Class** type_info = &type_info_ref;
        inline app::SpiritShardUIConfirmationOverlay__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIConfirmationOverlay__Class>(type_info, "", "SpiritShardUIConfirmationOverlay");
        }
        inline app::SpiritShardUIConfirmationOverlay* create() {
            return il2cpp::create_object<app::SpiritShardUIConfirmationOverlay>(get_class());
        }
    } // namespace SpiritShardUIConfirmationOverlay
} // namespace app::classes::types