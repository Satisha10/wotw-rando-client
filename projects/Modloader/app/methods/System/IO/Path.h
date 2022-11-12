#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::IO::Path {
    IL2CPP_REGISTER_METHOD(0x023759B0, app::String*, ChangeExtension, (app::String * path, app::String* extension))
    IL2CPP_REGISTER_METHODINFO(0x04750330, Path_ChangeExtension__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02375C20, app::String*, Combine_1, (app::String * path1, app::String* path2))
    IL2CPP_REGISTER_METHODINFO(0x0470C3D8, Path_Combine__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02375F90, app::String*, CleanPath, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x023764A0, app::String*, GetDirectoryName, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x0478CB18, Path_GetDirectoryName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02376920, app::String*, GetExtension, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x04775190, Path_GetExtension__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02376A90, app::String*, GetFileName, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x0476F6E8, Path_GetFileName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02376C10, app::String*, GetFileNameWithoutExtension, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x02376CC0, app::String*, GetFullPath, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x02376D60, app::String*, GetFullPathInternal, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x02376E00, int32_t, GetFullPathName_1, (app::String * path, int32_t num_buffer_chars, app::StringBuilder* buffer, void** lp_file_part_or_null))
    IL2CPP_REGISTER_METHOD(0x02377050, app::String*, GetFullPathName_2, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x0472C060, Path_GetFullPathName_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023773A0, app::String*, WindowsDriveAdjustment, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x023776B0, app::String*, InsecureGetFullPath, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x0472CE68, Path_InsecureGetFullPath__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02377D50, bool, IsDirectorySeparator, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x02377E30, app::String*, GetPathRoot, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x047998D8, Path_GetPathRoot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02378350, app::String*, GetTempFileName, ())
    IL2CPP_REGISTER_METHODINFO(0x04707E28, Path_GetTempFileName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02378810, app::String*, GetTempPath, ())
    IL2CPP_REGISTER_METHOD(0x02378970, app::String*, get_temp_path, ())
    IL2CPP_REGISTER_METHOD(0x02378980, bool, IsPathRooted, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x04757998, Path_IsPathRooted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02378BA0, app::Char__Array*, GetInvalidFileNameChars, ())
    IL2CPP_REGISTER_METHOD(0x02378C40, app::Char__Array*, GetInvalidPathChars, ())
    IL2CPP_REGISTER_METHOD(0x02378CE0, int32_t, findExtension, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x02378DD0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02379040, app::String*, GetServerAndShare, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x023791D0, bool, SameRoot, (app::String * root, app::String* path))
    IL2CPP_REGISTER_METHOD(0x02379520, app::String*, CanonicalizePath, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x02379E70, app::String*, Combine_2, (app::String__Array * paths))
    IL2CPP_REGISTER_METHODINFO(0x04744D88, Path_Combine_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0237A2D0, app::String*, Combine_3, (app::String * path1, app::String* path2, app::String* path3))
    IL2CPP_REGISTER_METHODINFO(0x04754520, Path_Combine_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0237A530, void, Validate_1, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x0237A5D0, void, Validate_2, (app::String * path, app::String* parameter_name))
    IL2CPP_REGISTER_METHODINFO(0x04703BF0, Path_Validate_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0237A7C0, app::String*, get_DirectorySeparatorCharAsString, ())
    IL2CPP_REGISTER_METHOD(0x0237A860, app::Char__Array*, get_TrimEndChars, ())
    IL2CPP_REGISTER_METHOD(0x0237A900, void, CheckSearchPattern, (app::String * search_pattern))
    IL2CPP_REGISTER_METHODINFO(0x0476E570, Path_CheckSearchPattern__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0237AB00, void, CheckInvalidPathChars, (app::String * path, bool check_additional))
    IL2CPP_REGISTER_METHODINFO(0x0477BA18, Path_CheckInvalidPathChars__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0237ACA0, app::String*, InternalCombine, (app::String * path1, app::String* path2))
    IL2CPP_REGISTER_METHODINFO(0x04700BE8, Path_InternalCombine__MethodInfo)
} // namespace app::classes::System::IO::Path
