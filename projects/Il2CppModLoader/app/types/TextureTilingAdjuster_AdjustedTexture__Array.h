#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureTilingAdjuster_AdjustedTexture__Array {
        namespace {
            app::TextureTilingAdjuster_AdjustedTexture__Array__Class* type_info_ref = nullptr;
        }
        app::TextureTilingAdjuster_AdjustedTexture__Array__Class** type_info = &type_info_ref;
        inline app::TextureTilingAdjuster_AdjustedTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::TextureTilingAdjuster_AdjustedTexture__Array__Class>(type_info, "", "TextureTilingAdjuster+AdjustedTexture[]");
        }
        inline app::TextureTilingAdjuster_AdjustedTexture__Array* create() {
            return il2cpp::create_object<app::TextureTilingAdjuster_AdjustedTexture__Array>(get_class());
        }
    } // namespace TextureTilingAdjuster_AdjustedTexture__Array
} // namespace app::classes::types