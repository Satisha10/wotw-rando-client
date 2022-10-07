#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardPrefabs {
        namespace {
            app::SpiritShardPrefabs__Class* type_info_ref = nullptr;
        }
        app::SpiritShardPrefabs__Class** type_info = &type_info_ref;
        inline app::SpiritShardPrefabs__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardPrefabs__Class>(type_info, "", "SpiritShardPrefabs");
        }
        inline app::SpiritShardPrefabs* create() {
            return il2cpp::create_object<app::SpiritShardPrefabs>(get_class());
        }
    } // namespace SpiritShardPrefabs
} // namespace app::classes::types