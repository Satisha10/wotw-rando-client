#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIItem {
        namespace {
            app::SpiritShardUIItem__Class* type_info_ref = nullptr;
        }
        app::SpiritShardUIItem__Class** type_info = &type_info_ref;
        inline app::SpiritShardUIItem__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIItem__Class>(type_info, "", "SpiritShardUIItem");
        }
        inline app::SpiritShardUIItem* create() {
            return il2cpp::create_object<app::SpiritShardUIItem>(get_class());
        }
    } // namespace SpiritShardUIItem
} // namespace app::classes::types