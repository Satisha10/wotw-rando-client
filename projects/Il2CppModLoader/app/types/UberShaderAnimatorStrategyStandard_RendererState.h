#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyStandard_RendererState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderAnimatorStrategyStandard_RendererState__Class** type_info;
        inline app::UberShaderAnimatorStrategyStandard_RendererState__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderAnimatorStrategyStandard_RendererState__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyStandard", "RendererState");
        }
        inline app::UberShaderAnimatorStrategyStandard_RendererState* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyStandard_RendererState>(get_class());
        }
        inline app::UberShaderAnimatorStrategyStandard_RendererState__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyStandard_RendererState__Array>(get_class(), size);
        }
        inline app::UberShaderAnimatorStrategyStandard_RendererState__Array* create_array(const std::vector<app::UberShaderAnimatorStrategyStandard_RendererState*>& items) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyStandard_RendererState__Array>(get_class(), items);
        }
    } // namespace UberShaderAnimatorStrategyStandard_RendererState
} // namespace app::classes::types