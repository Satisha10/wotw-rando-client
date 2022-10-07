#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MusicSource {
        namespace {
            app::MusicSource__Class* type_info_ref = nullptr;
        }
        app::MusicSource__Class** type_info = &type_info_ref;
        inline app::MusicSource__Class* get_class() {
            return il2cpp::get_class<app::MusicSource__Class>(type_info, "", "MusicSource");
        }
        inline app::MusicSource* create() {
            return il2cpp::create_object<app::MusicSource>(get_class());
        }
    } // namespace MusicSource
} // namespace app::classes::types