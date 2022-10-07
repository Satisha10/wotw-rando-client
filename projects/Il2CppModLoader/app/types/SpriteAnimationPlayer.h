#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimationPlayer {
        namespace {
            app::SpriteAnimationPlayer__Class* type_info_ref = nullptr;
        }
        app::SpriteAnimationPlayer__Class** type_info = &type_info_ref;
        inline app::SpriteAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimationPlayer__Class>(type_info, "Moon.Timeline", "SpriteAnimationPlayer");
        }
        inline app::SpriteAnimationPlayer* create() {
            return il2cpp::create_object<app::SpriteAnimationPlayer>(get_class());
        }
    } // namespace SpriteAnimationPlayer
} // namespace app::classes::types