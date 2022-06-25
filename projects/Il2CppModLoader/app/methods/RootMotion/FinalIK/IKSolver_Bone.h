#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IKSolver_Bone {
    IL2CPP_REGISTER_METHOD(0x02BE5490, app::RotationLimit *, get_rotationLimit, (app::IKSolver_Bone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE55B0, void, set_rotationLimit, (app::IKSolver_Bone * this_ptr, app::RotationLimit * value))
    IL2CPP_REGISTER_METHOD(0x02BE5670, void, Swing, (app::IKSolver_Bone * this_ptr, app::Vector3 swing_target, float weight))
    IL2CPP_REGISTER_METHOD(0x02BE5E80, void, SolverSwing, (app::IKSolver_Bone * this_ptr, app::IKSolver_Bone__Array * bones, int32_t index, app::Vector3 swing_target, float weight))
    IL2CPP_REGISTER_METHOD(0x02BE62D0, void, Swing2D, (app::IKSolver_Bone * this_ptr, app::Vector3 swing_target, float weight))
    IL2CPP_REGISTER_METHOD(0x02BE6770, app::Quaternion, GetSolverSwing, (app::IKSolver_Bone * this_ptr, app::Vector3 swing_target, float weight))
    IL2CPP_REGISTER_METHOD(0x02BE6B40, void, SetToSolverPosition, (app::IKSolver_Bone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE6BC0, void, ctor_1, (app::IKSolver_Bone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE6CB0, void, ctor_2, (app::IKSolver_Bone * this_ptr, app::Transform * transform))
    IL2CPP_REGISTER_METHOD(0x02BE6DB0, void, ctor_3, (app::IKSolver_Bone * this_ptr, app::Transform * transform, float weight))
}