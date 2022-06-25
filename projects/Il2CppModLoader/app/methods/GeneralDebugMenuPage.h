#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GeneralDebugMenuPage {
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ColumnOffset, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String *, get_Name, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00421320, void, Awake, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004213C0, bool, StartEscape, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764920, GeneralDebugMenuPage_StartEscape__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00421560, void, AddDynamicCameraItems, (app::GeneralDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * list, app::String * menu_name))
    IL2CPP_REGISTER_METHOD(0x00426870, void, GetItems, (app::GeneralDebugMenuPage * this_ptr, app::List_1_List_1_IDebugMenuItem_ * items))
    IL2CPP_REGISTER_METHOD(0x00431CD0, void, OnGUI, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00431EE0, void, SetShard, (app::GeneralDebugMenuPage * this_ptr, app::SpiritShardType__Enum shard, bool value))
    IL2CPP_REGISTER_METHOD(0x00432030, bool, GetShard, (app::GeneralDebugMenuPage * this_ptr, app::SpiritShardType__Enum shard))
    IL2CPP_REGISTER_METHOD(0x00432120, void, SetAllShards, (app::GeneralDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0473C9E8, GeneralDebugMenuPage_SetAllShards__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00432270, bool, GetAllShards, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04778180, GeneralDebugMenuPage_GetAllShards__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00432400, void, SetEquipment, (app::GeneralDebugMenuPage * this_ptr, app::EquipmentType__Enum equipment, bool value))
    IL2CPP_REGISTER_METHOD(0x004324D0, bool, GetEquipment, (app::GeneralDebugMenuPage * this_ptr, app::EquipmentType__Enum equipment))
    IL2CPP_REGISTER_METHOD(0x004325A0, void, SetAllEquipment, (app::GeneralDebugMenuPage * this_ptr, app::List_1_EquipmentType_ * list, bool value))
    IL2CPP_REGISTER_METHOD(0x00432700, bool, GetAllEquipment, (app::GeneralDebugMenuPage * this_ptr, app::List_1_EquipmentType_ * list))
    IL2CPP_REGISTER_METHOD(0x00432890, void, SetAbility, (app::GeneralDebugMenuPage * this_ptr, app::AbilityType__Enum ability, bool value))
    IL2CPP_REGISTER_METHOD(0x00432970, bool, GetAbility, (app::GeneralDebugMenuPage * this_ptr, app::AbilityType__Enum ability))
    IL2CPP_REGISTER_METHOD(0x00432A30, void, SetAllAbilities, (app::GeneralDebugMenuPage * this_ptr, app::List_1_AbilityType_ * list, bool value))
    IL2CPP_REGISTER_METHOD(0x00432BA0, bool, GetAllAbilities, (app::GeneralDebugMenuPage * this_ptr, app::List_1_AbilityType_ * list))
    IL2CPP_REGISTER_METHOD(0x00432D30, void, AddTeleports, (app::GeneralDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::List_1_DebugTeleportSettings_ * settings, app::String * sub_menu, bool do_teleport))
    IL2CPP_REGISTER_METHOD(0x00433230, void, DamageAllEnemies, (app::GeneralDebugMenuPage * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x00433810, void, HealAllEnemies, (app::GeneralDebugMenuPage * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x00433C10, bool, SaveGame, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047752F8, GeneralDebugMenuPage_SaveGame__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00433D10, bool, LoadGame, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04767EF8, GeneralDebugMenuPage_LoadGame__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00433E30, bool, SaveTempGame, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04772E08, GeneralDebugMenuPage_SaveTempGame__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00433F30, bool, LoadGameFromDisc, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472EDE0, GeneralDebugMenuPage_LoadGameFromDisc__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00434070, bool, SkipAction, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04725900, GeneralDebugMenuPage_SkipAction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00434100, bool, ResetInputLock, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475B520, GeneralDebugMenuPage_ResetInputLock__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00434220, bool, DebugMuteMusicGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759668, GeneralDebugMenuPage_DebugMuteMusicGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004342F0, void, DebugMuteMusicSetter, (app::GeneralDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04786778, GeneralDebugMenuPage_DebugMuteMusicSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004343B0, bool, DebugMuteAmbienceGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00434450, void, DebugMuteAmbienceSetter, (app::GeneralDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00434500, bool, DebugMuteSoundEffectsGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477AF18, GeneralDebugMenuPage_DebugMuteSoundEffectsGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004345D0, void, DebugMuteSoundEffectsSetter, (app::GeneralDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04729A00, GeneralDebugMenuPage_DebugMuteSoundEffectsSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00434690, bool, DebugCinematicMusicGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477AF28, GeneralDebugMenuPage_DebugCinematicMusicGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00434720, void, DebugCinematicMusicSetter, (app::GeneralDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04764660, GeneralDebugMenuPage_DebugCinematicMusicSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004347C0, bool, DebugUseMusicSyncCallbackGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047286B8, GeneralDebugMenuPage_DebugUseMusicSyncCallbackGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00434860, void, DebugUseMusicSyncCallbackSetter, (app::GeneralDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0473AF68, GeneralDebugMenuPage_DebugUseMusicSyncCallbackSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00434910, bool, DebugUseSpatialBusGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047999E8, GeneralDebugMenuPage_DebugUseSpatialBusGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004349C0, bool, DebugUseDelayedCallbacksGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470D250, GeneralDebugMenuPage_DebugUseDelayedCallbacksGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00434A60, void, DebugUseDelayedCallbacksSetter, (app::GeneralDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04749658, GeneralDebugMenuPage_DebugUseDelayedCallbacksSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00434B10, void, DebugUseSpatialBusSetter, (app::GeneralDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x047966A0, GeneralDebugMenuPage_DebugUseSpatialBusSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00434C90, bool, DebugReregisterSoundListeners, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047851B0, GeneralDebugMenuPage_DebugReregisterSoundListeners__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00434D50, bool, DebugXboxFlowGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047026F0, GeneralDebugMenuPage_DebugXboxFlowGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00434D60, void, DebugXboxFlowSetter, (app::GeneralDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0471F748, GeneralDebugMenuPage_DebugXboxFlowSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00434D70, bool, SeinInvincibilityGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478E498, GeneralDebugMenuPage_SeinInvincibilityGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00434F10, void, SeinInvincibilitySetter, (app::GeneralDebugMenuPage * this_ptr, bool new_value))
    IL2CPP_REGISTER_METHODINFO(0x0471E688, GeneralDebugMenuPage_SeinInvincibilitySetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00435010, bool, ReinstantiateOri, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047388D8, GeneralDebugMenuPage_ReinstantiateOri__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00435330, void, SeinUISetter, (app::GeneralDebugMenuPage * this_ptr, bool obj))
    IL2CPP_REGISTER_METHODINFO(0x047239D0, GeneralDebugMenuPage_SeinUISetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, SeinUIGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04786D10, GeneralDebugMenuPage_SeinUIGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00435480, void, DynamicCameraSetter, (app::GeneralDebugMenuPage * this_ptr, bool obj))
    IL2CPP_REGISTER_METHODINFO(0x0474F8B8, GeneralDebugMenuPage_DynamicCameraSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00435540, bool, DynamicCameraGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047516F8, GeneralDebugMenuPage_DynamicCameraGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00435640, void, DebugTextSetter, (app::GeneralDebugMenuPage * this_ptr, bool arg))
    IL2CPP_REGISTER_METHODINFO(0x04715CB8, GeneralDebugMenuPage_DebugTextSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004357B0, bool, DebugTextGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727500, GeneralDebugMenuPage_DebugTextGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00435840, void, DebugSceneFrameworkSetter, (app::GeneralDebugMenuPage * this_ptr, bool arg))
    IL2CPP_REGISTER_METHODINFO(0x04702300, GeneralDebugMenuPage_DebugSceneFrameworkSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, DebugSceneFrameworkGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047343C0, GeneralDebugMenuPage_DebugSceneFrameworkGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004358E0, void, DebugSaveSystemSetter, (app::GeneralDebugMenuPage * this_ptr, bool arg))
    IL2CPP_REGISTER_METHODINFO(0x04722AB0, GeneralDebugMenuPage_DebugSaveSystemSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00435AB0, bool, DebugSaveSystemGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04779B68, GeneralDebugMenuPage_DebugSaveSystemGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00435B40, bool, DebugRendererGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473B3C0, GeneralDebugMenuPage_DebugRendererGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00435BD0, void, DebugRendereSetter, (app::GeneralDebugMenuPage * this_ptr, bool new_state))
    IL2CPP_REGISTER_METHODINFO(0x047693D0, GeneralDebugMenuPage_DebugRendereSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00435C70, void, StressTesterCinematicReporterSetter, (app::GeneralDebugMenuPage * this_ptr, bool new_state))
    IL2CPP_REGISTER_METHODINFO(0x04706030, GeneralDebugMenuPage_StressTesterCinematicReporterSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00435E80, bool, RaceSystemGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047146E8, GeneralDebugMenuPage_RaceSystemGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00435F10, void, RaceSystemSetter, (app::GeneralDebugMenuPage * this_ptr, bool arg))
    IL2CPP_REGISTER_METHODINFO(0x04728300, GeneralDebugMenuPage_RaceSystemSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00435FB0, bool, FeedingGroundsGetter, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471BCF8, GeneralDebugMenuPage_FeedingGroundsGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00436040, void, FeedingGroundsSetter, (app::GeneralDebugMenuPage * this_ptr, bool arg))
    IL2CPP_REGISTER_METHODINFO(0x04749E58, GeneralDebugMenuPage_FeedingGroundsSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004360E0, void, InitSceneList, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00436B00, void, AddSceneItems_1, (app::GeneralDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items))
    IL2CPP_REGISTER_METHOD(0x00436BD0, void, AddSceneItems_2, (app::GeneralDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * tab_name, app::GeneralDebugMenuPage_SceneInfo__Array * scenes))
    IL2CPP_REGISTER_METHOD(0x00437150, bool, GoToScene, (app::GeneralDebugMenuPage * this_ptr, app::String * scene_name))
    IL2CPP_REGISTER_METHOD(0x004371B0, app::IEnumerator *, GoToSceneRoutine, (app::String * scene_name))
    IL2CPP_REGISTER_METHOD(0x00437300, void, ctor, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00437460, bool, _GetItems_b__18_12, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476B3E0, GeneralDebugMenuPage__GetItems_b__18_12__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00437520, void, _GetItems_b__18_13, (app::GeneralDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0473ABF8, GeneralDebugMenuPage__GetItems_b__18_13__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00437600, bool, _GetItems_b__18_14, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477EE98, GeneralDebugMenuPage__GetItems_b__18_14__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004376C0, void, _GetItems_b__18_15, (app::GeneralDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0472D5F8, GeneralDebugMenuPage__GetItems_b__18_15__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004377A0, bool, _GetItems_b__18_18, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742320, GeneralDebugMenuPage__GetItems_b__18_18__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00437860, void, _GetItems_b__18_19, (app::GeneralDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04797DB8, GeneralDebugMenuPage__GetItems_b__18_19__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00437940, bool, _GetItems_b__18_25, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470D768, GeneralDebugMenuPage__GetItems_b__18_25__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00437960, bool, _GetItems_b__18_26, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478C940, GeneralDebugMenuPage__GetItems_b__18_26__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00437980, bool, _GetItems_b__18_27, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717118, GeneralDebugMenuPage__GetItems_b__18_27__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004379A0, bool, _GetItems_b__18_28, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768490, GeneralDebugMenuPage__GetItems_b__18_28__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004379C0, bool, _GetItems_b__18_33, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04784FA0, GeneralDebugMenuPage__GetItems_b__18_33__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004379D0, void, _GetItems_b__18_34, (app::GeneralDebugMenuPage * this_ptr, bool v))
    IL2CPP_REGISTER_METHODINFO(0x0472D1C0, GeneralDebugMenuPage__GetItems_b__18_34__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004379E0, bool, _GetItems_b__18_112, (app::GeneralDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735F38, GeneralDebugMenuPage__GetItems_b__18_112__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004379F0, void, _GetItems_b__18_113, (app::GeneralDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0471E968, GeneralDebugMenuPage__GetItems_b__18_113__MethodInfo)
}