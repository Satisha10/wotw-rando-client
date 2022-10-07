#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderlingFallReactionBehaviour_FallState__Enum {
        namespace {
            app::SpiderlingFallReactionBehaviour_FallState__Enum__Class* type_info_ref = nullptr;
        }
        app::SpiderlingFallReactionBehaviour_FallState__Enum__Class** type_info = &type_info_ref;
        inline app::SpiderlingFallReactionBehaviour_FallState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderlingFallReactionBehaviour_FallState__Enum__Class>(type_info, "", "SpiderlingFallReactionBehaviour", "FallState");
        }
        inline app::SpiderlingFallReactionBehaviour_FallState__Enum* create() {
            return il2cpp::create_object<app::SpiderlingFallReactionBehaviour_FallState__Enum>(get_class());
        }
    } // namespace SpiderlingFallReactionBehaviour_FallState__Enum
} // namespace app::classes::types