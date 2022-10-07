#include <Il2CppModLoader/app/types/DeviceInfoRequest.h>
#include <Il2CppModLoader/app/types/EmptyResponse.h>
#include <Il2CppModLoader/app/types/EntityTokenResponse.h>
#include <Il2CppModLoader/app/types/LinkPSNAccountResult.h>
#include <Il2CppModLoader/app/types/LinkSteamAccountRequest.h>
#include <Il2CppModLoader/app/types/LinkSteamAccountResult.h>
#include <Il2CppModLoader/app/types/LinkTwitchAccountRequest.h>
#include <Il2CppModLoader/app/types/LinkTwitchAccountResult.h>
#include <Il2CppModLoader/app/types/LinkWindowsHelloAccountRequest.h>
#include <Il2CppModLoader/app/types/LinkWindowsHelloAccountResponse.h>
#include <Il2CppModLoader/app/types/LinkXboxAccountRequest.h>
#include <Il2CppModLoader/app/types/LinkXboxAccountResult.h>
#include <Il2CppModLoader/app/types/LoginResult.h>
#include <Il2CppModLoader/app/types/LoginWithAndroidDeviceIDRequest.h>
#include <Il2CppModLoader/app/types/LoginWithCustomIDRequest.h>
#include <Il2CppModLoader/app/types/LoginWithEmailAddressRequest.h>
#include <Il2CppModLoader/app/types/LoginWithFacebookInstantGamesIdRequest.h>
#include <Il2CppModLoader/app/types/LoginWithFacebookRequest.h>
#include <Il2CppModLoader/app/types/LoginWithGameCenterRequest.h>
#include <Il2CppModLoader/app/types/LoginWithGoogleAccountRequest.h>
#include <Il2CppModLoader/app/types/LoginWithIOSDeviceIDRequest.h>
#include <Il2CppModLoader/app/types/LoginWithKongregateRequest.h>
#include <Il2CppModLoader/app/types/LoginWithNintendoSwitchDeviceIdRequest.h>
#include <Il2CppModLoader/app/types/LoginWithOpenIdConnectRequest.h>
#include <Il2CppModLoader/app/types/LoginWithPSNRequest.h>
#include <Il2CppModLoader/app/types/LoginWithPlayFabRequest.h>
#include <Il2CppModLoader/app/types/LoginWithSteamRequest.h>
#include <Il2CppModLoader/app/types/LoginWithTwitchRequest.h>
#include <Il2CppModLoader/app/types/LoginWithWindowsHelloRequest.h>
#include <Il2CppModLoader/app/types/LoginWithXboxRequest.h>
#include <Il2CppModLoader/app/types/MatchmakeRequest.h>
#include <Il2CppModLoader/app/types/MatchmakeResult.h>
#include <Il2CppModLoader/app/types/OpenTradeRequest.h>
#include <Il2CppModLoader/app/types/OpenTradeResponse.h>
#include <Il2CppModLoader/app/types/PayForPurchaseRequest.h>
#include <Il2CppModLoader/app/types/PayForPurchaseResult.h>
#include <Il2CppModLoader/app/types/PurchaseItemRequest.h>
#include <Il2CppModLoader/app/types/PurchaseItemResult.h>
#include <Il2CppModLoader/app/types/RedeemCouponRequest.h>
#include <Il2CppModLoader/app/types/RedeemCouponResult.h>
#include <Il2CppModLoader/app/types/RefreshPSNAuthTokenRequest.h>
#include <Il2CppModLoader/app/types/RegisterForIOSPushNotificationRequest.h>
#include <Il2CppModLoader/app/types/RegisterForIOSPushNotificationResult.h>
#include <Il2CppModLoader/app/types/RegisterPlayFabUserRequest.h>
#include <Il2CppModLoader/app/types/RegisterPlayFabUserResult.h>
#include <Il2CppModLoader/app/types/RegisterWithWindowsHelloRequest.h>
#include <Il2CppModLoader/app/types/RemoveContactEmailRequest.h>
#include <Il2CppModLoader/app/types/RemoveContactEmailResult.h>
#include <Il2CppModLoader/app/types/RemoveFriendRequest.h>
#include <Il2CppModLoader/app/types/RemoveFriendResult.h>
#include <Il2CppModLoader/app/types/RemoveGenericIDRequest.h>
#include <Il2CppModLoader/app/types/RemoveGenericIDResult.h>
#include <Il2CppModLoader/app/types/RemoveSharedGroupMembersRequest.h>
#include <Il2CppModLoader/app/types/RemoveSharedGroupMembersResult.h>
#include <Il2CppModLoader/app/types/ReportPlayerClientRequest.h>
#include <Il2CppModLoader/app/types/ReportPlayerClientResult.h>
#include <Il2CppModLoader/app/types/RestoreIOSPurchasesRequest.h>
#include <Il2CppModLoader/app/types/RestoreIOSPurchasesResult.h>
#include <Il2CppModLoader/app/types/SendAccountRecoveryEmailRequest.h>
#include <Il2CppModLoader/app/types/SendAccountRecoveryEmailResult.h>
#include <Il2CppModLoader/app/types/SetFriendTagsRequest.h>
#include <Il2CppModLoader/app/types/SetFriendTagsResult.h>
#include <Il2CppModLoader/app/types/SetPlayerSecretRequest.h>
#include <Il2CppModLoader/app/types/SetPlayerSecretResult.h>
#include <Il2CppModLoader/app/types/StartGameRequest.h>
#include <Il2CppModLoader/app/types/StartGameResult.h>
#include <Il2CppModLoader/app/types/StartPurchaseRequest.h>
#include <Il2CppModLoader/app/types/StartPurchaseResult.h>
#include <Il2CppModLoader/app/types/SubtractUserVirtualCurrencyRequest.h>
#include <Il2CppModLoader/app/types/UninkOpenIdConnectRequest.h>
#include <Il2CppModLoader/app/types/UnlinkAndroidDeviceIDRequest.h>
#include <Il2CppModLoader/app/types/UnlinkAndroidDeviceIDResult.h>
#include <Il2CppModLoader/app/types/UnlinkCustomIDRequest.h>
#include <Il2CppModLoader/app/types/UnlinkCustomIDResult.h>
#include <Il2CppModLoader/app/types/UnlinkFacebookAccountRequest.h>
#include <Il2CppModLoader/app/types/UnlinkFacebookAccountResult.h>
#include <Il2CppModLoader/app/types/UnlinkFacebookInstantGamesIdRequest.h>
#include <Il2CppModLoader/app/types/UnlinkFacebookInstantGamesIdResult.h>
#include <Il2CppModLoader/app/types/UnlinkGameCenterAccountRequest.h>
#include <Il2CppModLoader/app/types/UnlinkGameCenterAccountResult.h>
#include <Il2CppModLoader/app/types/UnlinkGoogleAccountRequest.h>
#include <Il2CppModLoader/app/types/UnlinkGoogleAccountResult.h>
#include <Il2CppModLoader/app/types/UnlinkIOSDeviceIDRequest.h>
#include <Il2CppModLoader/app/types/UnlinkIOSDeviceIDResult.h>
#include <Il2CppModLoader/app/types/UnlinkKongregateAccountRequest.h>
#include <Il2CppModLoader/app/types/UnlinkKongregateAccountResult.h>
#include <Il2CppModLoader/app/types/UnlinkNintendoSwitchDeviceIdRequest.h>
#include <Il2CppModLoader/app/types/UnlinkNintendoSwitchDeviceIdResult.h>
#include <Il2CppModLoader/app/types/UnlinkPSNAccountRequest.h>
#include <Il2CppModLoader/app/types/UnlinkPSNAccountResult.h>
#include <Il2CppModLoader/app/types/UnlinkSteamAccountRequest.h>
#include <Il2CppModLoader/app/types/UnlinkSteamAccountResult.h>
#include <Il2CppModLoader/app/types/UnlinkTwitchAccountRequest.h>
#include <Il2CppModLoader/app/types/UnlinkTwitchAccountResult.h>
#include <Il2CppModLoader/app/types/UnlinkWindowsHelloAccountRequest.h>
#include <Il2CppModLoader/app/types/UnlinkWindowsHelloAccountResponse.h>
#include <Il2CppModLoader/app/types/UnlinkXboxAccountRequest.h>
#include <Il2CppModLoader/app/types/UnlinkXboxAccountResult.h>
#include <Il2CppModLoader/app/types/UnlockContainerInstanceRequest.h>
#include <Il2CppModLoader/app/types/UserSettings.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkPSNAccountResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LinkPSNAccountResult__Class** type_info = (::app::LinkPSNAccountResult__Class**)(modloader::win::memory::resolve_rva(0x0474D780));
    }
    namespace LinkSteamAccountRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LinkSteamAccountRequest__Class** type_info = (::app::LinkSteamAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04755EF8));
    }
    namespace LinkSteamAccountResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LinkSteamAccountResult__Class** type_info = (::app::LinkSteamAccountResult__Class**)(modloader::win::memory::resolve_rva(0x0474C598));
    }
    namespace LinkTwitchAccountRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LinkTwitchAccountRequest__Class** type_info = (::app::LinkTwitchAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04744A10));
    }
    namespace LinkTwitchAccountResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LinkTwitchAccountResult__Class** type_info = (::app::LinkTwitchAccountResult__Class**)(modloader::win::memory::resolve_rva(0x047440F8));
    }
    namespace LinkWindowsHelloAccountRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LinkWindowsHelloAccountRequest__Class** type_info = (::app::LinkWindowsHelloAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04701720));
    }
    namespace LinkWindowsHelloAccountResponse {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LinkWindowsHelloAccountResponse__Class** type_info = (::app::LinkWindowsHelloAccountResponse__Class**)(modloader::win::memory::resolve_rva(0x04796580));
    }
    namespace LinkXboxAccountRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LinkXboxAccountRequest__Class** type_info = (::app::LinkXboxAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x047020B0));
    }
    namespace LinkXboxAccountResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LinkXboxAccountResult__Class** type_info = (::app::LinkXboxAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04774CF8));
    }
    namespace LoginWithAndroidDeviceIDRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithAndroidDeviceIDRequest__Class** type_info = (::app::LoginWithAndroidDeviceIDRequest__Class**)(modloader::win::memory::resolve_rva(0x04707158));
    }
    namespace LoginResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginResult__Class** type_info = (::app::LoginResult__Class**)(modloader::win::memory::resolve_rva(0x0472B560));
    }
    namespace EntityTokenResponse {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityTokenResponse__Class** type_info = (::app::EntityTokenResponse__Class**)(modloader::win::memory::resolve_rva(0x04793568));
    }
    namespace UserSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserSettings__Class** type_info = (::app::UserSettings__Class**)(modloader::win::memory::resolve_rva(0x047793C0));
    }
    namespace LoginWithCustomIDRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithCustomIDRequest__Class** type_info = (::app::LoginWithCustomIDRequest__Class**)(modloader::win::memory::resolve_rva(0x0471A9F0));
    }
    namespace LoginWithEmailAddressRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithEmailAddressRequest__Class** type_info = (::app::LoginWithEmailAddressRequest__Class**)(modloader::win::memory::resolve_rva(0x0474BD70));
    }
    namespace LoginWithFacebookRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithFacebookRequest__Class** type_info = (::app::LoginWithFacebookRequest__Class**)(modloader::win::memory::resolve_rva(0x04792F30));
    }
    namespace LoginWithFacebookInstantGamesIdRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithFacebookInstantGamesIdRequest__Class** type_info = (::app::LoginWithFacebookInstantGamesIdRequest__Class**)(modloader::win::memory::resolve_rva(0x0474B9A0));
    }
    namespace LoginWithGameCenterRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithGameCenterRequest__Class** type_info = (::app::LoginWithGameCenterRequest__Class**)(modloader::win::memory::resolve_rva(0x04796D90));
    }
    namespace LoginWithGoogleAccountRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithGoogleAccountRequest__Class** type_info = (::app::LoginWithGoogleAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x047177F8));
    }
    namespace LoginWithIOSDeviceIDRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithIOSDeviceIDRequest__Class** type_info = (::app::LoginWithIOSDeviceIDRequest__Class**)(modloader::win::memory::resolve_rva(0x0470DF18));
    }
    namespace LoginWithKongregateRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithKongregateRequest__Class** type_info = (::app::LoginWithKongregateRequest__Class**)(modloader::win::memory::resolve_rva(0x04756480));
    }
    namespace LoginWithNintendoSwitchDeviceIdRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithNintendoSwitchDeviceIdRequest__Class** type_info = (::app::LoginWithNintendoSwitchDeviceIdRequest__Class**)(modloader::win::memory::resolve_rva(0x047609F8));
    }
    namespace LoginWithOpenIdConnectRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithOpenIdConnectRequest__Class** type_info = (::app::LoginWithOpenIdConnectRequest__Class**)(modloader::win::memory::resolve_rva(0x047333F0));
    }
    namespace LoginWithPlayFabRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithPlayFabRequest__Class** type_info = (::app::LoginWithPlayFabRequest__Class**)(modloader::win::memory::resolve_rva(0x04717708));
    }
    namespace LoginWithPSNRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithPSNRequest__Class** type_info = (::app::LoginWithPSNRequest__Class**)(modloader::win::memory::resolve_rva(0x047346C0));
    }
    namespace LoginWithSteamRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithSteamRequest__Class** type_info = (::app::LoginWithSteamRequest__Class**)(modloader::win::memory::resolve_rva(0x0477FF28));
    }
    namespace LoginWithTwitchRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithTwitchRequest__Class** type_info = (::app::LoginWithTwitchRequest__Class**)(modloader::win::memory::resolve_rva(0x04785A40));
    }
    namespace LoginWithWindowsHelloRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithWindowsHelloRequest__Class** type_info = (::app::LoginWithWindowsHelloRequest__Class**)(modloader::win::memory::resolve_rva(0x0474D0E0));
    }
    namespace LoginWithXboxRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginWithXboxRequest__Class** type_info = (::app::LoginWithXboxRequest__Class**)(modloader::win::memory::resolve_rva(0x0477DA80));
    }
    namespace MatchmakeRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MatchmakeRequest__Class** type_info = (::app::MatchmakeRequest__Class**)(modloader::win::memory::resolve_rva(0x04788AB8));
    }
    namespace MatchmakeResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MatchmakeResult__Class** type_info = (::app::MatchmakeResult__Class**)(modloader::win::memory::resolve_rva(0x047150E8));
    }
    namespace OpenTradeRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OpenTradeRequest__Class** type_info = (::app::OpenTradeRequest__Class**)(modloader::win::memory::resolve_rva(0x04774718));
    }
    namespace OpenTradeResponse {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OpenTradeResponse__Class** type_info = (::app::OpenTradeResponse__Class**)(modloader::win::memory::resolve_rva(0x04785DF8));
    }
    namespace PayForPurchaseRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PayForPurchaseRequest__Class** type_info = (::app::PayForPurchaseRequest__Class**)(modloader::win::memory::resolve_rva(0x0477B0E8));
    }
    namespace PayForPurchaseResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PayForPurchaseResult__Class** type_info = (::app::PayForPurchaseResult__Class**)(modloader::win::memory::resolve_rva(0x04785528));
    }
    namespace PurchaseItemRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PurchaseItemRequest__Class** type_info = (::app::PurchaseItemRequest__Class**)(modloader::win::memory::resolve_rva(0x047507B0));
    }
    namespace PurchaseItemResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PurchaseItemResult__Class** type_info = (::app::PurchaseItemResult__Class**)(modloader::win::memory::resolve_rva(0x0477E8F8));
    }
    namespace RedeemCouponRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RedeemCouponRequest__Class** type_info = (::app::RedeemCouponRequest__Class**)(modloader::win::memory::resolve_rva(0x04714320));
    }
    namespace RedeemCouponResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RedeemCouponResult__Class** type_info = (::app::RedeemCouponResult__Class**)(modloader::win::memory::resolve_rva(0x04759D20));
    }
    namespace RefreshPSNAuthTokenRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RefreshPSNAuthTokenRequest__Class** type_info = (::app::RefreshPSNAuthTokenRequest__Class**)(modloader::win::memory::resolve_rva(0x0472D3C0));
    }
    namespace EmptyResponse {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EmptyResponse__Class** type_info = (::app::EmptyResponse__Class**)(modloader::win::memory::resolve_rva(0x04754EE8));
    }
    namespace RegisterForIOSPushNotificationRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RegisterForIOSPushNotificationRequest__Class** type_info = (::app::RegisterForIOSPushNotificationRequest__Class**)(modloader::win::memory::resolve_rva(0x04740110));
    }
    namespace RegisterForIOSPushNotificationResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RegisterForIOSPushNotificationResult__Class** type_info = (::app::RegisterForIOSPushNotificationResult__Class**)(modloader::win::memory::resolve_rva(0x0475B460));
    }
    namespace RegisterPlayFabUserRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RegisterPlayFabUserRequest__Class** type_info = (::app::RegisterPlayFabUserRequest__Class**)(modloader::win::memory::resolve_rva(0x04721798));
    }
    namespace RegisterPlayFabUserResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RegisterPlayFabUserResult__Class** type_info = (::app::RegisterPlayFabUserResult__Class**)(modloader::win::memory::resolve_rva(0x04762968));
    }
    namespace RegisterWithWindowsHelloRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RegisterWithWindowsHelloRequest__Class** type_info = (::app::RegisterWithWindowsHelloRequest__Class**)(modloader::win::memory::resolve_rva(0x04746990));
    }
    namespace RemoveContactEmailRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RemoveContactEmailRequest__Class** type_info = (::app::RemoveContactEmailRequest__Class**)(modloader::win::memory::resolve_rva(0x04722E40));
    }
    namespace RemoveContactEmailResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RemoveContactEmailResult__Class** type_info = (::app::RemoveContactEmailResult__Class**)(modloader::win::memory::resolve_rva(0x04726800));
    }
    namespace RemoveFriendRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RemoveFriendRequest__Class** type_info = (::app::RemoveFriendRequest__Class**)(modloader::win::memory::resolve_rva(0x04786998));
    }
    namespace RemoveFriendResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RemoveFriendResult__Class** type_info = (::app::RemoveFriendResult__Class**)(modloader::win::memory::resolve_rva(0x04735710));
    }
    namespace RemoveGenericIDRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RemoveGenericIDRequest__Class** type_info = (::app::RemoveGenericIDRequest__Class**)(modloader::win::memory::resolve_rva(0x047963E8));
    }
    namespace RemoveGenericIDResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RemoveGenericIDResult__Class** type_info = (::app::RemoveGenericIDResult__Class**)(modloader::win::memory::resolve_rva(0x04771760));
    }
    namespace RemoveSharedGroupMembersRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RemoveSharedGroupMembersRequest__Class** type_info = (::app::RemoveSharedGroupMembersRequest__Class**)(modloader::win::memory::resolve_rva(0x04738C28));
    }
    namespace RemoveSharedGroupMembersResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RemoveSharedGroupMembersResult__Class** type_info = (::app::RemoveSharedGroupMembersResult__Class**)(modloader::win::memory::resolve_rva(0x04723180));
    }
    namespace DeviceInfoRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DeviceInfoRequest__Class** type_info = (::app::DeviceInfoRequest__Class**)(modloader::win::memory::resolve_rva(0x04722E10));
    }
    namespace ReportPlayerClientRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReportPlayerClientRequest__Class** type_info = (::app::ReportPlayerClientRequest__Class**)(modloader::win::memory::resolve_rva(0x0474B6D0));
    }
    namespace ReportPlayerClientResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReportPlayerClientResult__Class** type_info = (::app::ReportPlayerClientResult__Class**)(modloader::win::memory::resolve_rva(0x04716D50));
    }
    namespace RestoreIOSPurchasesRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RestoreIOSPurchasesRequest__Class** type_info = (::app::RestoreIOSPurchasesRequest__Class**)(modloader::win::memory::resolve_rva(0x047494F0));
    }
    namespace RestoreIOSPurchasesResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RestoreIOSPurchasesResult__Class** type_info = (::app::RestoreIOSPurchasesResult__Class**)(modloader::win::memory::resolve_rva(0x047638D8));
    }
    namespace SendAccountRecoveryEmailRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SendAccountRecoveryEmailRequest__Class** type_info = (::app::SendAccountRecoveryEmailRequest__Class**)(modloader::win::memory::resolve_rva(0x0478F830));
    }
    namespace SendAccountRecoveryEmailResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SendAccountRecoveryEmailResult__Class** type_info = (::app::SendAccountRecoveryEmailResult__Class**)(modloader::win::memory::resolve_rva(0x04799CA0));
    }
    namespace SetFriendTagsRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SetFriendTagsRequest__Class** type_info = (::app::SetFriendTagsRequest__Class**)(modloader::win::memory::resolve_rva(0x04719368));
    }
    namespace SetFriendTagsResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SetFriendTagsResult__Class** type_info = (::app::SetFriendTagsResult__Class**)(modloader::win::memory::resolve_rva(0x0478D2F8));
    }
    namespace SetPlayerSecretRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SetPlayerSecretRequest__Class** type_info = (::app::SetPlayerSecretRequest__Class**)(modloader::win::memory::resolve_rva(0x04722608));
    }
    namespace SetPlayerSecretResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SetPlayerSecretResult__Class** type_info = (::app::SetPlayerSecretResult__Class**)(modloader::win::memory::resolve_rva(0x0473F148));
    }
    namespace StartGameRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StartGameRequest__Class** type_info = (::app::StartGameRequest__Class**)(modloader::win::memory::resolve_rva(0x047089D8));
    }
    namespace StartGameResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StartGameResult__Class** type_info = (::app::StartGameResult__Class**)(modloader::win::memory::resolve_rva(0x047428E8));
    }
    namespace StartPurchaseRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StartPurchaseRequest__Class** type_info = (::app::StartPurchaseRequest__Class**)(modloader::win::memory::resolve_rva(0x04717928));
    }
    namespace StartPurchaseResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StartPurchaseResult__Class** type_info = (::app::StartPurchaseResult__Class**)(modloader::win::memory::resolve_rva(0x04740E40));
    }
    namespace SubtractUserVirtualCurrencyRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SubtractUserVirtualCurrencyRequest__Class** type_info = (::app::SubtractUserVirtualCurrencyRequest__Class**)(modloader::win::memory::resolve_rva(0x047698C8));
    }
    namespace UnlinkAndroidDeviceIDRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkAndroidDeviceIDRequest__Class** type_info = (::app::UnlinkAndroidDeviceIDRequest__Class**)(modloader::win::memory::resolve_rva(0x04710B18));
    }
    namespace UnlinkAndroidDeviceIDResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkAndroidDeviceIDResult__Class** type_info = (::app::UnlinkAndroidDeviceIDResult__Class**)(modloader::win::memory::resolve_rva(0x04769B08));
    }
    namespace UnlinkCustomIDRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkCustomIDRequest__Class** type_info = (::app::UnlinkCustomIDRequest__Class**)(modloader::win::memory::resolve_rva(0x04726960));
    }
    namespace UnlinkCustomIDResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkCustomIDResult__Class** type_info = (::app::UnlinkCustomIDResult__Class**)(modloader::win::memory::resolve_rva(0x047461C8));
    }
    namespace UnlinkFacebookAccountRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkFacebookAccountRequest__Class** type_info = (::app::UnlinkFacebookAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x047101E0));
    }
    namespace UnlinkFacebookAccountResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkFacebookAccountResult__Class** type_info = (::app::UnlinkFacebookAccountResult__Class**)(modloader::win::memory::resolve_rva(0x0475C780));
    }
    namespace UnlinkFacebookInstantGamesIdRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkFacebookInstantGamesIdRequest__Class** type_info = (::app::UnlinkFacebookInstantGamesIdRequest__Class**)(modloader::win::memory::resolve_rva(0x04798078));
    }
    namespace UnlinkFacebookInstantGamesIdResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkFacebookInstantGamesIdResult__Class** type_info = (::app::UnlinkFacebookInstantGamesIdResult__Class**)(modloader::win::memory::resolve_rva(0x04704E18));
    }
    namespace UnlinkGameCenterAccountRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkGameCenterAccountRequest__Class** type_info = (::app::UnlinkGameCenterAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04746880));
    }
    namespace UnlinkGameCenterAccountResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkGameCenterAccountResult__Class** type_info = (::app::UnlinkGameCenterAccountResult__Class**)(modloader::win::memory::resolve_rva(0x0471D278));
    }
    namespace UnlinkGoogleAccountRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkGoogleAccountRequest__Class** type_info = (::app::UnlinkGoogleAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04724558));
    }
    namespace UnlinkGoogleAccountResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkGoogleAccountResult__Class** type_info = (::app::UnlinkGoogleAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04796FD0));
    }
    namespace UnlinkIOSDeviceIDRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkIOSDeviceIDRequest__Class** type_info = (::app::UnlinkIOSDeviceIDRequest__Class**)(modloader::win::memory::resolve_rva(0x04705708));
    }
    namespace UnlinkIOSDeviceIDResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkIOSDeviceIDResult__Class** type_info = (::app::UnlinkIOSDeviceIDResult__Class**)(modloader::win::memory::resolve_rva(0x0473F080));
    }
    namespace UnlinkKongregateAccountRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkKongregateAccountRequest__Class** type_info = (::app::UnlinkKongregateAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x0474B6C0));
    }
    namespace UnlinkKongregateAccountResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkKongregateAccountResult__Class** type_info = (::app::UnlinkKongregateAccountResult__Class**)(modloader::win::memory::resolve_rva(0x047939C8));
    }
    namespace UnlinkNintendoSwitchDeviceIdRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkNintendoSwitchDeviceIdRequest__Class** type_info = (::app::UnlinkNintendoSwitchDeviceIdRequest__Class**)(modloader::win::memory::resolve_rva(0x04754C50));
    }
    namespace UnlinkNintendoSwitchDeviceIdResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkNintendoSwitchDeviceIdResult__Class** type_info = (::app::UnlinkNintendoSwitchDeviceIdResult__Class**)(modloader::win::memory::resolve_rva(0x0470B5E8));
    }
    namespace UninkOpenIdConnectRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UninkOpenIdConnectRequest__Class** type_info = (::app::UninkOpenIdConnectRequest__Class**)(modloader::win::memory::resolve_rva(0x047424C0));
    }
    namespace UnlinkPSNAccountRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkPSNAccountRequest__Class** type_info = (::app::UnlinkPSNAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04732900));
    }
    namespace UnlinkPSNAccountResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkPSNAccountResult__Class** type_info = (::app::UnlinkPSNAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04784FE0));
    }
    namespace UnlinkSteamAccountRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkSteamAccountRequest__Class** type_info = (::app::UnlinkSteamAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04716C80));
    }
    namespace UnlinkSteamAccountResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkSteamAccountResult__Class** type_info = (::app::UnlinkSteamAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04774A78));
    }
    namespace UnlinkTwitchAccountRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkTwitchAccountRequest__Class** type_info = (::app::UnlinkTwitchAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x0471DFB0));
    }
    namespace UnlinkTwitchAccountResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkTwitchAccountResult__Class** type_info = (::app::UnlinkTwitchAccountResult__Class**)(modloader::win::memory::resolve_rva(0x047139C0));
    }
    namespace UnlinkWindowsHelloAccountRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkWindowsHelloAccountRequest__Class** type_info = (::app::UnlinkWindowsHelloAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x047078A0));
    }
    namespace UnlinkWindowsHelloAccountResponse {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkWindowsHelloAccountResponse__Class** type_info = (::app::UnlinkWindowsHelloAccountResponse__Class**)(modloader::win::memory::resolve_rva(0x04704E00));
    }
    namespace UnlinkXboxAccountRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkXboxAccountRequest__Class** type_info = (::app::UnlinkXboxAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04703F30));
    }
    namespace UnlinkXboxAccountResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlinkXboxAccountResult__Class** type_info = (::app::UnlinkXboxAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04788E08));
    }
    namespace UnlockContainerInstanceRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnlockContainerInstanceRequest__Class** type_info = (::app::UnlockContainerInstanceRequest__Class**)(modloader::win::memory::resolve_rva(0x04717A30));
    }
} // namespace app::classes::types