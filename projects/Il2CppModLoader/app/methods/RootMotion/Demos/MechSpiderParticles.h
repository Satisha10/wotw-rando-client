#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::Demos::MechSpiderParticles {
    IL2CPP_REGISTER_METHOD(0x02226ED0, void, Start, (app::MechSpiderParticles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02226FC0, void, Update, (app::MechSpiderParticles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MechSpiderParticles * this_ptr))
}