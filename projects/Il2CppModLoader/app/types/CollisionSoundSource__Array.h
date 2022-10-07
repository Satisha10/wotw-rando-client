#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollisionSoundSource__Array {
        namespace {
            app::CollisionSoundSource__Array__Class* type_info_ref = nullptr;
        }
        app::CollisionSoundSource__Array__Class** type_info = &type_info_ref;
        inline app::CollisionSoundSource__Array__Class* get_class() {
            return il2cpp::get_class<app::CollisionSoundSource__Array__Class>(type_info, "", "CollisionSoundSource[]");
        }
        inline app::CollisionSoundSource__Array* create() {
            return il2cpp::create_object<app::CollisionSoundSource__Array>(get_class());
        }
    } // namespace CollisionSoundSource__Array
} // namespace app::classes::types