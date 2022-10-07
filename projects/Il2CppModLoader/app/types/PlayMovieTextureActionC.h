#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayMovieTextureActionC {
        namespace {
            app::PlayMovieTextureActionC__Class* type_info_ref = nullptr;
        }
        app::PlayMovieTextureActionC__Class** type_info = &type_info_ref;
        inline app::PlayMovieTextureActionC__Class* get_class() {
            return il2cpp::get_class<app::PlayMovieTextureActionC__Class>(type_info, "", "PlayMovieTextureActionC");
        }
        inline app::PlayMovieTextureActionC* create() {
            return il2cpp::create_object<app::PlayMovieTextureActionC>(get_class());
        }
    } // namespace PlayMovieTextureActionC
} // namespace app::classes::types