#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RestoreCheckpointAction {
    IL2CPP_REGISTER_METHOD(0x0090B690, void, Perform, (app::RestoreCheckpointAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RestoreCheckpointAction * this_ptr))
}