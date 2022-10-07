#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyTimelineSequence_SortMode__Enum {
        namespace {
            app::LegacyTimelineSequence_SortMode__Enum__Class* type_info_ref = nullptr;
        }
        app::LegacyTimelineSequence_SortMode__Enum__Class** type_info = &type_info_ref;
        inline app::LegacyTimelineSequence_SortMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTimelineSequence_SortMode__Enum__Class>(type_info, "", "LegacyTimelineSequence", "SortMode");
        }
        inline app::LegacyTimelineSequence_SortMode__Enum* create() {
            return il2cpp::create_object<app::LegacyTimelineSequence_SortMode__Enum>(get_class());
        }
    } // namespace LegacyTimelineSequence_SortMode__Enum
} // namespace app::classes::types