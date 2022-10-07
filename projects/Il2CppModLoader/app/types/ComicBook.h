#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComicBook {
        namespace {
            app::ComicBook__Class* type_info_ref = nullptr;
        }
        app::ComicBook__Class** type_info = &type_info_ref;
        inline app::ComicBook__Class* get_class() {
            return il2cpp::get_class<app::ComicBook__Class>(type_info, "Colorful", "ComicBook");
        }
        inline app::ComicBook* create() {
            return il2cpp::create_object<app::ComicBook>(get_class());
        }
    } // namespace ComicBook
} // namespace app::classes::types