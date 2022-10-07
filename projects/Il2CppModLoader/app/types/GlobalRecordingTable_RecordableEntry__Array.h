#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlobalRecordingTable_RecordableEntry__Array {
        namespace {
            app::GlobalRecordingTable_RecordableEntry__Array__Class* type_info_ref = nullptr;
        }
        app::GlobalRecordingTable_RecordableEntry__Array__Class** type_info = &type_info_ref;
        inline app::GlobalRecordingTable_RecordableEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::GlobalRecordingTable_RecordableEntry__Array__Class>(type_info, "", "GlobalRecordingTable+RecordableEntry[]");
        }
        inline app::GlobalRecordingTable_RecordableEntry__Array* create() {
            return il2cpp::create_object<app::GlobalRecordingTable_RecordableEntry__Array>(get_class());
        }
    } // namespace GlobalRecordingTable_RecordableEntry__Array
} // namespace app::classes::types