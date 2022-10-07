#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SplitTurnAnimationMoonTimeline {
        namespace {
            app::SplitTurnAnimationMoonTimeline__Class* type_info_ref = nullptr;
        }
        app::SplitTurnAnimationMoonTimeline__Class** type_info = &type_info_ref;
        inline app::SplitTurnAnimationMoonTimeline__Class* get_class() {
            return il2cpp::get_class<app::SplitTurnAnimationMoonTimeline__Class>(type_info, "", "SplitTurnAnimationMoonTimeline");
        }
        inline app::SplitTurnAnimationMoonTimeline* create() {
            return il2cpp::create_object<app::SplitTurnAnimationMoonTimeline>(get_class());
        }
        inline app::SplitTurnAnimationMoonTimeline__Array* create_array(int size) {
            return il2cpp::array_new<app::SplitTurnAnimationMoonTimeline__Array>(get_class(), size);
        }
        inline app::SplitTurnAnimationMoonTimeline__Array* create_array(const std::vector<app::SplitTurnAnimationMoonTimeline*>& items) {
            return il2cpp::array_new<app::SplitTurnAnimationMoonTimeline__Array>(get_class(), items);
        }
    } // namespace SplitTurnAnimationMoonTimeline
} // namespace app::classes::types