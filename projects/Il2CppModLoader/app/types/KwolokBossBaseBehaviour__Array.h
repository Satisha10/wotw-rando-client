#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossBaseBehaviour__Array {
        namespace {
            app::KwolokBossBaseBehaviour__Array__Class* type_info_ref = nullptr;
        }
        app::KwolokBossBaseBehaviour__Array__Class** type_info = &type_info_ref;
        inline app::KwolokBossBaseBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossBaseBehaviour__Array__Class>(type_info, "", "KwolokBossBaseBehaviour[]");
        }
        inline app::KwolokBossBaseBehaviour__Array* create() {
            return il2cpp::create_object<app::KwolokBossBaseBehaviour__Array>(get_class());
        }
    } // namespace KwolokBossBaseBehaviour__Array
} // namespace app::classes::types