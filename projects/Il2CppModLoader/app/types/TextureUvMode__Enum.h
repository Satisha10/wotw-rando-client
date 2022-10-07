#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureUvMode__Enum {
        namespace {
            app::TextureUvMode__Enum__Class* type_info_ref = nullptr;
        }
        app::TextureUvMode__Enum__Class** type_info = &type_info_ref;
        inline app::TextureUvMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureUvMode__Enum__Class>(type_info, "", "TextureUvMode");
        }
        inline app::TextureUvMode__Enum* create() {
            return il2cpp::create_object<app::TextureUvMode__Enum>(get_class());
        }
    } // namespace TextureUvMode__Enum
} // namespace app::classes::types