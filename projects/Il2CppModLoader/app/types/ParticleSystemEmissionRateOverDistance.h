#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemEmissionRateOverDistance {
        namespace {
            app::ParticleSystemEmissionRateOverDistance__Class* type_info_ref = nullptr;
        }
        app::ParticleSystemEmissionRateOverDistance__Class** type_info = &type_info_ref;
        inline app::ParticleSystemEmissionRateOverDistance__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemEmissionRateOverDistance__Class>(type_info, "", "ParticleSystemEmissionRateOverDistance");
        }
        inline app::ParticleSystemEmissionRateOverDistance* create() {
            return il2cpp::create_object<app::ParticleSystemEmissionRateOverDistance>(get_class());
        }
        inline app::ParticleSystemEmissionRateOverDistance__Array* create_array(int size) {
            return il2cpp::array_new<app::ParticleSystemEmissionRateOverDistance__Array>(get_class(), size);
        }
        inline app::ParticleSystemEmissionRateOverDistance__Array* create_array(const std::vector<app::ParticleSystemEmissionRateOverDistance*>& items) {
            return il2cpp::array_new<app::ParticleSystemEmissionRateOverDistance__Array>(get_class(), items);
        }
    } // namespace ParticleSystemEmissionRateOverDistance
} // namespace app::classes::types