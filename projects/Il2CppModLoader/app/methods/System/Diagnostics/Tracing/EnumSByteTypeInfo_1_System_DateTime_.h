#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumSByteTypeInfo_1_System_DateTime_ {
    IL2CPP_REGISTER_METHOD(0x02B8F6E0, void, WriteMetadata, (app::EnumSByteTypeInfo_1_System_DateTime_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B8F7B0, void, WriteData, (app::EnumSByteTypeInfo_1_System_DateTime_ * this_ptr, app::TraceLoggingDataCollector * collector, app::DateTime * value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object *, GetData, (app::EnumSByteTypeInfo_1_System_DateTime_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumSByteTypeInfo_1_System_DateTime_ * this_ptr))
}