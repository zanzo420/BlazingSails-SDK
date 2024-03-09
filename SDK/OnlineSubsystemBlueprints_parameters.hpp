#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.IsSubsystemAvailable
struct UOnlineAchievementsSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.GetCachedAchievements
struct UOnlineAchievementsSubsystem_GetCachedAchievements_Params
{
public:
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOnlineAchievementBP>          OutAchievements;                                   // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EOnlineCachedResult_              ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_655[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.GetCachedAchievementDescription
struct UOnlineAchievementsSubsystem_GetCachedAchievementDescription_Params
{
public:
	class FString                                AchievementID;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineAchievementDescBP              OutAchievementDesc;                                // 0x10(0x58)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EOnlineCachedResult_              ReturnValue;                                       // 0x68(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_657[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.GetCachedAchievement
struct UOnlineAchievementsSubsystem_GetCachedAchievement_Params
{
public:
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AchievementID;                                     // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineAchievementBP                  OutAchievement;                                    // 0x38(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EOnlineCachedResult_              ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_659[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineAchievementsSubsystemWriteAchievements.WriteAchievements
struct UOnlineAchievementsSubsystemWriteAchievements_WriteAchievements_Params
{
public:
	class UOnlineAchievementsSubsystem*          Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineAchievementsWrite*              WriteObject;                                       // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineAchievementsSubsystemWriteAchievements* ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineAchievementsSubsystemQueryAchievements.QueryAchievements
struct UOnlineAchievementsSubsystemQueryAchievements_QueryAchievements_Params
{
public:
	class UOnlineAchievementsSubsystem*          Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineAchievementsSubsystemQueryAchievements* ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineAchievementsSubsystemQueryAchievementDescriptions.QueryAchievementDescriptions
struct UOnlineAchievementsSubsystemQueryAchievementDescriptions_QueryAchievementDescriptions_Params
{
public:
	class UOnlineAchievementsSubsystem*          Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineAchievementsSubsystemQueryAchievementDescriptions* ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineAvatarSubsystem.IsSubsystemAvailable
struct UOnlineAvatarSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineAvatarSubsystemGetAvatar.GetAvatar
struct UOnlineAvatarSubsystemGetAvatar_GetAvatar_Params
{
public:
	class UOnlineAvatarSubsystem*                Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      TargetUserId;                                      // 0x30(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              DefaultTexture;                                    // 0x58(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineAvatarSubsystemGetAvatar*       ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineAvatarSubsystemGetAvatarUrl.GetAvatarUrl
struct UOnlineAvatarSubsystemGetAvatarUrl_GetAvatarUrl_Params
{
public:
	class UOnlineAvatarSubsystem*                Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      TargetUserId;                                      // 0x30(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultAvatarUrl;                                  // 0x58(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineAvatarSubsystemGetAvatarUrl*    ReturnValue;                                       // 0x68(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineChatSubsystem.SendRoomChat
struct UOnlineChatSubsystem_SendRoomChat_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RoomId;                                            // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MsgBody;                                           // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_660[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineChatSubsystem.SendPrivateChat
struct UOnlineChatSubsystem_SendPrivateChat_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      RecipientId;                                       // 0x28(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MsgBody;                                           // 0x50(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_661[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineChatSubsystem.IsSubsystemAvailable
struct UOnlineChatSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineChatSubsystem.IsChatAllowed
struct UOnlineChatSubsystem_IsChatAllowed_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      RecipientId;                                       // 0x28(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_662[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineChatSubsystem.GetJoinedRooms
struct UOnlineChatSubsystem_GetJoinedRooms_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        OutRooms;                                          // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineChatSubsystem.ExitRoom
struct UOnlineChatSubsystem_ExitRoom_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RoomId;                                            // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_664[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem.IsSubsystemAvailable
struct UOnlineEntitlementsSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem.GetItemEntitlement
struct UOnlineEntitlementsSubsystem_GetItemEntitlement_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemId;                                            // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineEntitlement*                    ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem.GetEntitlement
struct UOnlineEntitlementsSubsystem_GetEntitlement_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EntitlementId;                                     // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineEntitlement*                    ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem.GetAllEntitlements
struct UOnlineEntitlementsSubsystem_GetAllEntitlements_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Namespace;                                         // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UOnlineEntitlement*>            OutUserEntitlements;                               // 0x38(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEntitlementsSubsystemQueryEntitlements.QueryEntitlements
struct UOnlineEntitlementsSubsystemQueryEntitlements_QueryEntitlements_Params
{
public:
	class UOnlineEntitlementsSubsystem*          Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Namespace;                                         // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPagedQueryBP                         Page;                                              // 0x40(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UOnlineEntitlementsSubsystemQueryEntitlements* ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEventsSubsystem.IsSubsystemAvailable
struct UOnlineEventsSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowPlatformMessageBox
struct UOnlineExternalUISubsystem_ShowPlatformMessageBox_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlatformMessageType_             MessageType;                                       // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x29(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_66C[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowLeaderboardUI
struct UOnlineExternalUISubsystem_ShowLeaderboardUI_Params
{
public:
	class FString                                LeaderboardName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_66D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowInviteUI
struct UOnlineExternalUISubsystem_ShowInviteUI_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_66E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowFriendsUI
struct UOnlineExternalUISubsystem_ShowFriendsUI_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_670[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowAchievementsUI
struct UOnlineExternalUISubsystem_ShowAchievementsUI_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_672[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowAccountUpgradeUI
struct UOnlineExternalUISubsystem_ShowAccountUpgradeUI_Params
{
public:
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_673[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.RemoveLoginFlowHandler
struct UOnlineExternalUISubsystem_RemoveLoginFlowHandler_Params
{
public:
	TScriptInterface<class IExternalUIFlowHandler> Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.NotifyLoginRedirectURL
struct UOnlineExternalUISubsystem_NotifyLoginRedirectURL_Params
{
public:
	int32                                        RequestID;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_676[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                URL;                                               // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLoginFlowResultBP                    ReturnValue;                                       // 0x18(0x40)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.LoginFlowComplete
struct UOnlineExternalUISubsystem_LoginFlowComplete_Params
{
public:
	int32                                        RequestID;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_677[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLoginFlowResultBP                    Result;                                            // 0x8(0x40)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.IsSubsystemAvailable
struct UOnlineExternalUISubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.CloseWebURL
struct UOnlineExternalUISubsystem_CloseWebURL_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystem.AddLoginFlowHandler
struct UOnlineExternalUISubsystem_AddLoginFlowHandler_Params
{
public:
	TScriptInterface<class IExternalUIFlowHandler> Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowLoginUI.ShowLoginUI
struct UOnlineExternalUISubsystemShowLoginUI_ShowLoginUI_Params
{
public:
	class UOnlineExternalUISubsystem*            Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ControllerIndex;                                   // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowOnlineOnly;                                   // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowSkipButton;                                   // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_67E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineExternalUISubsystemShowLoginUI* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowAccountCreationUI.ShowAccountCreationUI
struct UOnlineExternalUISubsystemShowAccountCreationUI_ShowAccountCreationUI_Params
{
public:
	class UOnlineExternalUISubsystem*            Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ControllerIndex;                                   // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_682[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineExternalUISubsystemShowAccountCreationUI* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowWebURL.ShowWebURL
struct UOnlineExternalUISubsystemShowWebURL_ShowWebURL_Params
{
public:
	class UOnlineExternalUISubsystem*            Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShowWebUrlParameters                 ShowParams;                                        // 0x18(0x38)(Parm, NativeAccessSpecifierPublic)
	class UOnlineExternalUISubsystemShowWebURL*  ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowProfileUI.ShowProfileUI
struct UOnlineExternalUISubsystemShowProfileUI_ShowProfileUI_Params
{
public:
	class UOnlineExternalUISubsystem*            Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      Requestor;                                         // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      Requestee;                                         // 0x30(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineExternalUISubsystemShowProfileUI* ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowStoreUI.ShowStoreUI
struct UOnlineExternalUISubsystemShowStoreUI_ShowStoreUI_Params
{
public:
	class UOnlineExternalUISubsystem*            Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_686[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FShowStoreParameters                  ShowParams;                                        // 0x10(0x28)(Parm, NativeAccessSpecifierPublic)
	class UOnlineExternalUISubsystemShowStoreUI* ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowSendMessageUI.ShowSendMessageUI
struct UOnlineExternalUISubsystemShowSendMessageUI_ShowSendMessageUI_Params
{
public:
	class UOnlineExternalUISubsystem*            Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_689[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FShowSendMessageParameters            ShowParams;                                        // 0x10(0xF0)(Parm, NativeAccessSpecifierPublic)
	class UOnlineExternalUISubsystemShowSendMessageUI* ReturnValue;                                       // 0x100(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowSendMessageToUserUI.ShowSendMessageToUserUI
struct UOnlineExternalUISubsystemShowSendMessageToUserUI_ShowSendMessageToUserUI_Params
{
public:
	class UOnlineExternalUISubsystem*            Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_68B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      Recipient;                                         // 0x10(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShowSendMessageParameters            ShowParams;                                        // 0x38(0xF0)(Parm, NativeAccessSpecifierPublic)
	class UOnlineExternalUISubsystemShowSendMessageToUserUI* ReturnValue;                                       // 0x128(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.IsSubsystemAvailable
struct UOnlineFriendsSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.IsFriend
struct UOnlineFriendsSubsystem_IsFriend_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_68D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      FriendId;                                          // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ListName;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_68E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetRecentPlayers
struct UOnlineFriendsSubsystem_GetRecentPlayers_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Namespace;                                         // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UOnlineRecentPlayerRef*>        OutRecentPlayers;                                  // 0x38(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_68F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetFriendsList
struct UOnlineFriendsSubsystem_GetFriendsList_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_690[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ListName;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UOnlineFriendRef*>              OutFriends;                                        // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_691[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetFriendSettings
struct UOnlineFriendsSubsystem_GetFriendSettings_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FOnlineFriendSettingsSourceDataConfig> OutSettings;                                       // 0x28(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_693[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetFriend
struct UOnlineFriendsSubsystem_GetFriend_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_695[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      FriendId;                                          // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ListName;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendRef*                      ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetBlockedPlayers
struct UOnlineFriendsSubsystem_GetBlockedPlayers_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UOnlineUserRef*>                OutBlockedPlayers;                                 // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_697[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemReadFriendsList.ReadFriendsList
struct UOnlineFriendsSubsystemReadFriendsList_ReadFriendsList_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_69A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ListName;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystemReadFriendsList* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriendsList.DeleteFriendsList
struct UOnlineFriendsSubsystemDeleteFriendsList_DeleteFriendsList_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_69D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ListName;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystemDeleteFriendsList* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemSendInvite.SendInvite
struct UOnlineFriendsSubsystemSendInvite_SendInvite_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_69F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      FriendId;                                          // 0x10(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ListName;                                          // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystemSendInvite*     ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemAcceptInvite.AcceptInvite
struct UOnlineFriendsSubsystemAcceptInvite_AcceptInvite_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      FriendId;                                          // 0x10(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ListName;                                          // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystemAcceptInvite*   ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemRejectInvite.RejectInvite
struct UOnlineFriendsSubsystemRejectInvite_RejectInvite_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      FriendId;                                          // 0x10(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ListName;                                          // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystemRejectInvite*   ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemSetFriendAlias.SetFriendAlias
struct UOnlineFriendsSubsystemSetFriendAlias_SetFriendAlias_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      FriendId;                                          // 0x10(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ListName;                                          // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Alias;                                             // 0x48(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystemSetFriendAlias* ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriendAlias.DeleteFriendAlias
struct UOnlineFriendsSubsystemDeleteFriendAlias_DeleteFriendAlias_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      FriendId;                                          // 0x10(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ListName;                                          // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystemDeleteFriendAlias* ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriend.DeleteFriend
struct UOnlineFriendsSubsystemDeleteFriend_DeleteFriend_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6AC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      FriendId;                                          // 0x10(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ListName;                                          // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystemDeleteFriend*   ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemAddRecentPlayers.AddRecentPlayers
struct UOnlineFriendsSubsystemAddRecentPlayers_AddRecentPlayers_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FReportPlayedWithUserInfo>     InRecentPlayers;                                   // 0x30(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ListName;                                          // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystemAddRecentPlayers* ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryRecentPlayers.QueryRecentPlayers
struct UOnlineFriendsSubsystemQueryRecentPlayers_QueryRecentPlayers_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Namespace;                                         // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystemQueryRecentPlayers* ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemBlockPlayer.BlockPlayer
struct UOnlineFriendsSubsystemBlockPlayer_BlockPlayer_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x10(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystemBlockPlayer*    ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemUnblockPlayer.UnblockPlayer
struct UOnlineFriendsSubsystemUnblockPlayer_UnblockPlayer_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x10(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystemUnblockPlayer*  ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryBlockedPlayers.QueryBlockedPlayers
struct UOnlineFriendsSubsystemQueryBlockedPlayers_QueryBlockedPlayers_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystemQueryBlockedPlayers* ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryFriendSettings.QueryFriendSettings
struct UOnlineFriendsSubsystemQueryFriendSettings_QueryFriendSettings_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystemQueryFriendSettings* ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemUpdateFriendSettings.UpdateFriendSettings
struct UOnlineFriendsSubsystemUpdateFriendSettings_UpdateFriendSettings_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFriendSettingsData                   NewSettings;                                       // 0x30(0x50)(Parm, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystemUpdateFriendSettings* ReturnValue;                                       // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendsSubsystemSetFriendSettings.SetFriendSettings
struct UOnlineFriendsSubsystemSetFriendSettings_SetFriendSettings_Params
{
public:
	class UOnlineFriendsSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Source;                                            // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNeverShowAgain;                                   // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6BD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineFriendsSubsystemSetFriendSettings* ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystem.UpdatePlayerLocation
struct UOnlineGameActivitySubsystem_UpdatePlayerLocation_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineActivityPlayerLocationBP       ActivityPlayerLocation;                            // 0x28(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystem.IsSubsystemAvailable
struct UOnlineGameActivitySubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystemStartActivity.StartActivity
struct UOnlineGameActivitySubsystemStartActivity_StartActivity_Params
{
public:
	class UOnlineGameActivitySubsystem*          Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ActivityId;                                        // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FVariantDataBP>   Params;                                            // 0x40(0x50)(Parm, NativeAccessSpecifierPublic)
	class UOnlineGameActivitySubsystemStartActivity* ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystemEndActivity.EndActivity
struct UOnlineGameActivitySubsystemEndActivity_EndActivity_Params
{
public:
	class UOnlineGameActivitySubsystem*          Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ActivityId;                                        // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOnlineActivityOutcome_           ActivityOutcome;                                   // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FVariantDataBP>   Params;                                            // 0x48(0x50)(Parm, NativeAccessSpecifierPublic)
	class UOnlineGameActivitySubsystemEndActivity* ReturnValue;                                       // 0x98(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystemResetAllActiveActivities.ResetAllActiveActivities
struct UOnlineGameActivitySubsystemResetAllActiveActivities_ResetAllActiveActivities_Params
{
public:
	class UOnlineGameActivitySubsystem*          Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineGameActivitySubsystemResetAllActiveActivities* ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystemResumeActivity.ResumeActivity
struct UOnlineGameActivitySubsystemResumeActivity_ResumeActivity_Params
{
public:
	class UOnlineGameActivitySubsystem*          Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ActivityId;                                        // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineActivityTasksToResetBP         TasksToReset;                                      // 0x40(0x28)(Parm, NativeAccessSpecifierPublic)
	class UOnlineGameActivitySubsystemResumeActivity* ReturnValue;                                       // 0x68(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystemSetActivityAvailability.SetActivityAvailability
struct UOnlineGameActivitySubsystemSetActivityAvailability_SetActivityAvailability_Params
{
public:
	class UOnlineGameActivitySubsystem*          Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ActivityId;                                        // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6CF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineGameActivitySubsystemSetActivityAvailability* ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGameActivitySubsystemSetActivityPriority.SetActivityPriority
struct UOnlineGameActivitySubsystemSetActivityPriority_SetActivityPriority_Params
{
public:
	class UOnlineGameActivitySubsystem*          Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, int32>                   PrioritizedActivities;                             // 0x30(0x50)(Parm, NativeAccessSpecifierPublic)
	class UOnlineGameActivitySubsystemSetActivityPriority* ReturnValue;                                       // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystem.IsSubsystemAvailable
struct UOnlineGameItemStatsSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemUsage.ItemUsage
struct UOnlineGameItemStatsSubsystemItemUsage_ItemUsage_Params
{
public:
	class UOnlineGameItemStatsSubsystem*         Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemUsedBy;                                        // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ItemsUsed;                                         // 0x40(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOnlineGameItemStatsSubsystemItemUsage* ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemImpact.ItemImpact
struct UOnlineGameItemStatsSubsystemItemImpact_ItemImpact_Params
{
public:
	class UOnlineGameItemStatsSubsystem*         Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        TargetActors;                                      // 0x30(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ImpactInitiatedBy;                                 // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ItemsUsed;                                         // 0x50(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOnlineGameItemStatsSubsystemItemImpact* ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemMitigation.ItemMitigation
struct UOnlineGameItemStatsSubsystemItemMitigation_ItemMitigation_Params
{
public:
	class UOnlineGameItemStatsSubsystem*         Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ItemsUsed;                                         // 0x30(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        ImpactItemsMitigated;                              // 0x40(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ItemUsedBy;                                        // 0x50(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineGameItemStatsSubsystemItemMitigation* ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemAvailabilityChange.ItemAvailabilityChange
struct UOnlineGameItemStatsSubsystemItemAvailabilityChange_ItemAvailabilityChange_Params
{
public:
	class UOnlineGameItemStatsSubsystem*         Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        AvailableItems;                                    // 0x30(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        UnavailableItems;                                  // 0x40(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOnlineGameItemStatsSubsystemItemAvailabilityChange* ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemInventoryChange.ItemInventoryChange
struct UOnlineGameItemStatsSubsystemItemInventoryChange_ItemInventoryChange_Params
{
public:
	class UOnlineGameItemStatsSubsystem*         Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ItemsToAdd;                                        // 0x30(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        ItemsToRemove;                                     // 0x40(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOnlineGameItemStatsSubsystemItemInventoryChange* ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemLoadoutChange.ItemLoadoutChange
struct UOnlineGameItemStatsSubsystemItemLoadoutChange_ItemLoadoutChange_Params
{
public:
	class UOnlineGameItemStatsSubsystem*         Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        EquippedItems;                                     // 0x30(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        UnequippedItems;                                   // 0x40(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOnlineGameItemStatsSubsystemItemLoadoutChange* ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGroupsSubsystem.SetNamespace
struct UOnlineGroupsSubsystem_SetNamespace_Params
{
public:
	class FString                                Ns;                                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGroupsSubsystem.IsSubsystemAvailable
struct UOnlineGroupsSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineGroupsSubsystem.GetNamespace
struct UOnlineGroupsSubsystem_GetNamespace_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.ReadFileDataAsString
struct UOnlineHelpers_ReadFileDataAsString_Params
{
public:
	class UFileData*                             FileData;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.ReadFileDataAsSaveGame
struct UOnlineHelpers_ReadFileDataAsSaveGame_Params
{
public:
	class UFileData*                             FileData;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USaveGame*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.IsValid_PartyId
struct UOnlineHelpers_IsValid_PartyId_Params
{
public:
	class UPartyId*                              A;                                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.IsValid_LobbyId
struct UOnlineHelpers_IsValid_LobbyId_Params
{
public:
	class ULobbyId*                              A;                                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1B0 (0x1B0 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.GetResolvedConnectStringBySearchResult
struct UOnlineHelpers_GetResolvedConnectStringBySearchResult_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineSessionSearchResultBP          SearchResult;                                      // 0x8(0x188)(Parm, NativeAccessSpecifierPublic)
	class FName                                  PortType;                                          // 0x190(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x198(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OutConnectInfo;                                    // 0x1A0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.GetResolvedConnectStringByName
struct UOnlineHelpers_GetResolvedConnectStringByName_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PortType;                                          // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6DA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OutConnectInfo;                                    // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.GetPrimaryPartyType
struct UOnlineHelpers_GetPrimaryPartyType_Params
{
public:
	int64                                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.GetPlayerStateUniqueNetId
struct UOnlineHelpers_GetPlayerStateUniqueNetId_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.GetCurrentSubsystemName
struct UOnlineHelpers_GetCurrentSubsystemName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.GetControllerUniqueNetId
struct UOnlineHelpers_GetControllerUniqueNetId_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.FUniqueNetIdIsValid
struct UOnlineHelpers_FUniqueNetIdIsValid_Params
{
public:
	struct FUniqueNetIdRepl                      InNetId;                                           // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6DD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.FUniqueNetIdGetType
struct UOnlineHelpers_FUniqueNetIdGetType_Params
{
public:
	struct FUniqueNetIdRepl                      InNetId;                                           // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.EqualEqual_PartyIdPartyId
struct UOnlineHelpers_EqualEqual_PartyIdPartyId_Params
{
public:
	class UPartyId*                              A;                                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              B;                                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6DF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.EqualEqual_LobbyIdLobbyId
struct UOnlineHelpers_EqualEqual_LobbyIdLobbyId_Params
{
public:
	class ULobbyId*                              A;                                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyId*                              B;                                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl
struct UOnlineHelpers_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_Params
{
public:
	struct FUniqueNetIdRepl                      InA;                                               // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      InB;                                               // 0x28(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.CreateMutablePartyData
struct UOnlineHelpers_CreateMutablePartyData_Params
{
public:
	class UReadablePartyData*                    ReadOnlyPartyData;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMutablePartyData*                     ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.CreateFileDataFromString
struct UOnlineHelpers_CreateFileDataFromString_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFileData*                             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.CreateFileDataFromSaveGame
struct UOnlineHelpers_CreateFileDataFromSaveGame_Params
{
public:
	class USaveGame*                             SaveGame;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFileData*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.Conv_ULobbyIdToUOnlinePartyJoinInfo
struct UOnlineHelpers_Conv_ULobbyIdToUOnlinePartyJoinInfo_Params
{
public:
	struct FUniqueNetIdRepl                      InLocalUserId;                                     // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystem*                 InPartySubsystem;                                  // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyId*                              InLobbyId;                                         // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePartyJoinInfo*                  ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineHelpers.Conv_FUniqueNetIdReplToString
struct UOnlineHelpers_Conv_FUniqueNetIdReplToString_Params
{
public:
	struct FUniqueNetIdRepl                      InNetId;                                           // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.IsSubsystemAvailable
struct UOnlineIdentitySubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetUserAccount
struct UOnlineIdentitySubsystem_GetUserAccount_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserOnlineAccountRef*                 ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetUniquePlayerId
struct UOnlineIdentitySubsystem_GetUniquePlayerId_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetSponsorUniquePlayerId
struct UOnlineIdentitySubsystem_GetSponsorUniquePlayerId_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetPlayerNickname
struct UOnlineIdentitySubsystem_GetPlayerNickname_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetPlatformUserIdFromUniqueNetId
struct UOnlineIdentitySubsystem_GetPlatformUserIdFromUniqueNetId_Params
{
public:
	struct FUniqueNetIdRepl                      UniqueNetId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetLoginStatus
struct UOnlineIdentitySubsystem_GetLoginStatus_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOnlineLoginStatus                ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E7[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetAuthType
struct UOnlineIdentitySubsystem_GetAuthType_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetAuthToken
struct UOnlineIdentitySubsystem_GetAuthToken_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetAllUserAccounts
struct UOnlineIdentitySubsystem_GetAllUserAccounts_Params
{
public:
	TArray<class UUserOnlineAccountRef*>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystem.CreateUniquePlayerId
struct UOnlineIdentitySubsystem_CreateUniquePlayerId_Params
{
public:
	class FString                                Str;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystemLogin.Login
struct UOnlineIdentitySubsystemLogin_Login_Params
{
public:
	class UOnlineIdentitySubsystem*              Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6EB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineAccountCredential              AccountCredentials;                                // 0x10(0x30)(Parm, NativeAccessSpecifierPublic)
	class UOnlineIdentitySubsystemLogin*         ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystemLogout.Logout
struct UOnlineIdentitySubsystemLogout_Logout_Params
{
public:
	class UOnlineIdentitySubsystem*              Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6EF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineIdentitySubsystemLogout*        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystemAutoLogin.AutoLogin
struct UOnlineIdentitySubsystemAutoLogin_AutoLogin_Params
{
public:
	class UOnlineIdentitySubsystem*              Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6F3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineIdentitySubsystemAutoLogin*     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystemRevokeAuthToken.RevokeAuthToken
struct UOnlineIdentitySubsystemRevokeAuthToken_RevokeAuthToken_Params
{
public:
	class UOnlineIdentitySubsystem*              Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineIdentitySubsystemRevokeAuthToken* ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineIdentitySubsystemGetUserPrivilege.GetUserPrivilege
struct UOnlineIdentitySubsystemGetUserPrivilege_GetUserPrivilege_Params
{
public:
	class UOnlineIdentitySubsystem*              Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOnlineUserPrivilege              Privilege;                                         // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6FA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineIdentitySubsystemGetUserPrivilege* ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.WriteLeaderboards
struct UOnlineLeaderboardsSubsystem_WriteLeaderboards_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      Player;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLeaderboardWrite*               WriteObject;                                       // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6FC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.IsSubsystemAvailable
struct UOnlineLeaderboardsSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.FreeStats
struct UOnlineLeaderboardsSubsystem_FreeStats_Params
{
public:
	class UOnlineLeaderboardRead*                ReadObject;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.FlushLeaderboards
struct UOnlineLeaderboardsSubsystem_FlushLeaderboards_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6FF[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboards.ReadLeaderboards
struct UOnlineLeaderboardsSubsystemReadLeaderboards_ReadLeaderboards_Params
{
public:
	class UOnlineLeaderboardsSubsystem*          Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUniqueNetIdRepl>              Players;                                           // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOnlineLeaderboardRead*                ReadObject;                                        // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLeaderboardsSubsystemReadLeaderboards* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsForFriends.ReadLeaderboardsForFriends
struct UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends_ReadLeaderboardsForFriends_Params
{
public:
	class UOnlineLeaderboardsSubsystem*          Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_705[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineLeaderboardRead*                ReadObject;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsAroundRank.ReadLeaderboardsAroundRank
struct UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank_ReadLeaderboardsAroundRank_Params
{
public:
	class UOnlineLeaderboardsSubsystem*          Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rank;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_708[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        Range;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLeaderboardRead*                ReadObject;                                        // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsAroundUser.ReadLeaderboardsAroundUser
struct UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser_ReadLeaderboardsAroundUser_Params
{
public:
	class UOnlineLeaderboardsSubsystem*          Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      Player;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Range;                                             // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLeaderboardRead*                ReadObject;                                        // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser* ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.ParseSerializedLobbyId
struct UOnlineLobbySubsystem_ParseSerializedLobbyId_Params
{
public:
	class FString                                InLobbyId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyId*                              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.MakeUpdateLobbyTransaction
struct UOnlineLobbySubsystem_MakeUpdateLobbyTransaction_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyId*                              LobbyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLobbyTransaction*               ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.MakeUpdateLobbyMemberTransaction
struct UOnlineLobbySubsystem_MakeUpdateLobbyMemberTransaction_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyId*                              LobbyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x30(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLobbyMemberTransaction*         ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.MakeCreateLobbyTransaction
struct UOnlineLobbySubsystem_MakeCreateLobbyTransaction_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLobbyTransaction*               ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.IsSubsystemAvailable
struct UOnlineLobbySubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetMemberUserId
struct UOnlineLobbySubsystem_GetMemberUserId_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyId*                              LobbyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MemberIndex;                                       // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_710[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      OutMemberId;                                       // 0x38(0x28)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_711[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetMemberMetadataValue
struct UOnlineLobbySubsystem_GetMemberMetadataValue_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyId*                              LobbyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x30(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MetadataKey;                                       // 0x58(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVariantDataBP                        OutMetadataValue;                                  // 0x68(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_712[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetMemberCount
struct UOnlineLobbySubsystem_GetMemberCount_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyId*                              LobbyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutMemberCount;                                    // 0x30(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x34(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_713[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetLobbyMetadataValue
struct UOnlineLobbySubsystem_GetLobbyMetadataValue_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyId*                              LobbyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MetadataKey;                                       // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVariantDataBP                        OutMetadataValue;                                  // 0x40(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_714[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemCreateLobby.CreateLobby
struct UOnlineLobbySubsystemCreateLobby_CreateLobby_Params
{
public:
	class UOnlineLobbySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLobbyTransaction*               Transaction;                                       // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystemCreateLobby*      ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemUpdateLobby.UpdateLobby
struct UOnlineLobbySubsystemUpdateLobby_UpdateLobby_Params
{
public:
	class UOnlineLobbySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyId*                              LobbyId;                                           // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLobbyTransaction*               Transaction;                                       // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystemUpdateLobby*      ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemDeleteLobby.DeleteLobby
struct UOnlineLobbySubsystemDeleteLobby_DeleteLobby_Params
{
public:
	class UOnlineLobbySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyId*                              LobbyId;                                           // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystemDeleteLobby*      ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemConnectLobby.ConnectLobby
struct UOnlineLobbySubsystemConnectLobby_ConnectLobby_Params
{
public:
	class UOnlineLobbySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyId*                              LobbyId;                                           // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystemConnectLobby*     ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemDisconnectLobby.DisconnectLobby
struct UOnlineLobbySubsystemDisconnectLobby_DisconnectLobby_Params
{
public:
	class UOnlineLobbySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyId*                              LobbyId;                                           // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystemDisconnectLobby*  ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemUpdateMemberSelf.UpdateMemberSelf
struct UOnlineLobbySubsystemUpdateMemberSelf_UpdateMemberSelf_Params
{
public:
	class UOnlineLobbySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyId*                              LobbyId;                                           // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLobbyMemberTransaction*         Transaction;                                       // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystemUpdateMemberSelf* ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemSearch.Search
struct UOnlineLobbySubsystemSearch_Search_Params
{
public:
	class UOnlineLobbySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineLobbySearchQueryBP             Query;                                             // 0x30(0x20)(Parm, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystemSearch*           ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbySubsystemKickMember.KickMember
struct UOnlineLobbySubsystemKickMember_KickMember_Params
{
public:
	class UOnlineLobbySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyId*                              LobbyId;                                           // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x38(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystemKickMember*       ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystem.IsSubsystemAvailable
struct UOnlineMessageSanitizerSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemSanitizeDisplayName.SanitizeDisplayName
struct UOnlineMessageSanitizerSubsystemSanitizeDisplayName_SanitizeDisplayName_Params
{
public:
	class UOnlineMessageSanitizerSubsystem*      Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineMessageSanitizerSubsystemSanitizeDisplayName* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemSanitizeDisplayNames.SanitizeDisplayNames
struct UOnlineMessageSanitizerSubsystemSanitizeDisplayNames_SanitizeDisplayNames_Params
{
public:
	class UOnlineMessageSanitizerSubsystem*      Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        DisplayNames;                                      // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOnlineMessageSanitizerSubsystemSanitizeDisplayNames* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemQueryBlockedUser.QueryBlockedUser
struct UOnlineMessageSanitizerSubsystemQueryBlockedUser_QueryBlockedUser_Params
{
public:
	class UOnlineMessageSanitizerSubsystem*      Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_717[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FromUserId;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FromPlatform;                                      // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineMessageSanitizerSubsystemQueryBlockedUser* ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineMessageSubsystem.IsSubsystemAvailable
struct UOnlineMessageSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineMessageSubsystem.EnumerateMessages
struct UOnlineMessageSubsystem_EnumerateMessages_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_719[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineMessageSubsystem.ClearMessages
struct UOnlineMessageSubsystem_ClearMessages_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_71A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineMessageSubsystem.ClearMessageHeaders
struct UOnlineMessageSubsystem_ClearMessageHeaders_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_71B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.UpdatePartyMemberData
struct UOnlinePartySubsystem_UpdatePartyMemberData_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Namespace;                                         // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReadablePartyData*                    PartyMemberData;                                   // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_71D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.UpdatePartyData
struct UOnlinePartySubsystem_UpdatePartyData_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Namespace;                                         // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReadablePartyData*                    PartyData;                                         // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_71E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.RespondToQueryJoinability
struct UOnlinePartySubsystem_RespondToQueryJoinability_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      RecipientId;                                       // 0x30(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanJoin;                                          // 0x58(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_71F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DeniedResultCode;                                  // 0x5C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReadablePartyData*                    PartyData;                                         // 0x60(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.RejectInvitation
struct UOnlinePartySubsystem_RejectInvitation_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      SenderId;                                          // 0x28(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_720[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.MakeTokenFromJoinInfo
struct UOnlinePartySubsystem_MakeTokenFromJoinInfo_Params
{
public:
	class UOnlinePartyJoinInfo*                  JoinInfo;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.MakeJoinInfoJson
struct UOnlinePartySubsystem_MakeJoinInfoJson_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.JIPFromWithinParty
struct UOnlinePartySubsystem_JIPFromWithinParty_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PartyLeaderId;                                     // 0x30(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_721[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.IsSubsystemAvailable
struct UOnlinePartySubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.IsMemberLeader
struct UOnlinePartySubsystem_IsMemberLeader_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x30(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_722[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPendingInvites
struct UOnlinePartySubsystem_GetPendingInvites_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UOnlinePartyJoinInfo*>          OutPendingInvitesArray;                            // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_723[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPendingInvitedUsers
struct UOnlinePartySubsystem_GetPendingInvitedUsers_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUniqueNetIdRepl>              OutPendingInvitedUserArray;                        // 0x30(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_724[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMembers
struct UOnlinePartySubsystem_GetPartyMembers_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UBlueprintPartyMember*>         OutPartyMembersArray;                              // 0x30(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_725[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMemberData
struct UOnlinePartySubsystem_GetPartyMemberData_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x30(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Namespace;                                         // 0x58(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReadablePartyData*                    ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMemberCount
struct UOnlinePartySubsystem_GetPartyMemberCount_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMember
struct UOnlinePartySubsystem_GetPartyMember_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x30(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlueprintPartyMember*                 ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyData
struct UOnlinePartySubsystem_GetPartyData_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Namespace;                                         // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReadablePartyData*                    ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetParty
struct UOnlinePartySubsystem_GetParty_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParty*                                ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.GetJoinedParties
struct UOnlinePartySubsystem_GetJoinedParties_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPartyId*>                      OutPartyIdArray;                                   // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_726[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.ApproveJoinRequest
struct UOnlinePartySubsystem_ApproveJoinRequest_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      RecipientId;                                       // 0x30(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsApproved;                                       // 0x58(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_727[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DeniedResultCode;                                  // 0x5C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_728[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystem.ApproveJIPRequest
struct UOnlinePartySubsystem_ApproveJIPRequest_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      RecipientId;                                       // 0x30(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsApproved;                                       // 0x58(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_729[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DeniedResultCode;                                  // 0x5C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_72A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystemRestoreParties.RestoreParties
struct UOnlinePartySubsystemRestoreParties_RestoreParties_Params
{
public:
	class UOnlinePartySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystemRestoreParties*   ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystemRestoreInvites.RestoreInvites
struct UOnlinePartySubsystemRestoreInvites_RestoreInvites_Params
{
public:
	class UOnlinePartySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystemRestoreInvites*   ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystemCleanupParties.CleanupParties
struct UOnlinePartySubsystemCleanupParties_CleanupParties_Params
{
public:
	class UOnlinePartySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystemCleanupParties*   ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystemCreateParty.CreateParty
struct UOnlinePartySubsystemCreateParty_CreateParty_Params
{
public:
	class UOnlinePartySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        PartyTypeId;                                       // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlinePartyConfiguration             PartyConfig;                                       // 0x38(0x40)(Parm, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystemCreateParty*      ReturnValue;                                       // 0x78(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystemUpdateParty.UpdateParty
struct UOnlinePartySubsystemUpdateParty_UpdateParty_Params
{
public:
	class UOnlinePartySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlinePartyConfiguration             PartyConfig;                                       // 0x38(0x40)(Parm, NativeAccessSpecifierPublic)
	bool                                         bShouldRegenerateReservationKey;                   // 0x78(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_72C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePartySubsystemUpdateParty*      ReturnValue;                                       // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystemJoinParty.JoinParty
struct UOnlinePartySubsystemJoinParty_JoinParty_Params
{
public:
	class UOnlinePartySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePartyJoinInfo*                  OnlinePartyJoinInfo;                               // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystemJoinParty*        ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystemQueryPartyJoinability.QueryPartyJoinability
struct UOnlinePartySubsystemQueryPartyJoinability_QueryPartyJoinability_Params
{
public:
	class UOnlinePartySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePartyJoinInfo*                  OnlinePartyJoinInfo;                               // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystemQueryPartyJoinability* ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystemRejoinParty.RejoinParty
struct UOnlinePartySubsystemRejoinParty_RejoinParty_Params
{
public:
	class UOnlinePartySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        PartyTypeId;                                       // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUniqueNetIdRepl>              FormerMembers;                                     // 0x40(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystemRejoinParty*      ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystemLeaveParty.LeaveParty
struct UOnlinePartySubsystemLeaveParty_LeaveParty_Params
{
public:
	class UOnlinePartySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSynchronizeLeave;                                 // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_72E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePartySubsystemLeaveParty*       ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystemSendInvitation.SendInvitation
struct UOnlinePartySubsystemSendInvitation_SendInvitation_Params
{
public:
	class UOnlinePartySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      Recipient;                                         // 0x38(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystemSendInvitation*   ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystemKickMember.KickMember
struct UOnlinePartySubsystemKickMember_KickMember_Params
{
public:
	class UOnlinePartySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      TargetMemberId;                                    // 0x38(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystemKickMember*       ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartySubsystemPromoteMember.PromoteMember
struct UOnlinePartySubsystemPromoteMember_PromoteMember_Params
{
public:
	class UOnlinePartySubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      TargetMemberId;                                    // 0x38(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystemPromoteMember*    ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePresenceSubsystem.IsSubsystemAvailable
struct UOnlinePresenceSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePresenceSubsystem.GetCachedPresenceForApp
struct UOnlinePresenceSubsystem_GetCachedPresenceForApp_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      User;                                              // 0x28(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppId;                                             // 0x50(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineUserPresenceData               OutPresence;                                       // 0x60(0xA0)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EOnlineCachedResult_              ReturnValue;                                       // 0x100(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_730[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePresenceSubsystem.GetCachedPresence
struct UOnlinePresenceSubsystem_GetCachedPresence_Params
{
public:
	struct FUniqueNetIdRepl                      User;                                              // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineUserPresenceData               OutPresence;                                       // 0x28(0xA0)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EOnlineCachedResult_              ReturnValue;                                       // 0xC8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_731[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePresenceSubsystemSetPresence.SetPresence
struct UOnlinePresenceSubsystemSetPresence_SetPresence_Params
{
public:
	class UOnlinePresenceSubsystem*              Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      User;                                              // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineUserPresenceStatusData         Status;                                            // 0x30(0x68)(Parm, NativeAccessSpecifierPublic)
	class UOnlinePresenceSubsystemSetPresence*   ReturnValue;                                       // 0x98(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePresenceSubsystemQueryPresence.QueryPresence
struct UOnlinePresenceSubsystemQueryPresence_QueryPresence_Params
{
public:
	class UOnlinePresenceSubsystem*              Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      User;                                              // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePresenceSubsystemQueryPresence* ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystem.IsSubsystemAvailable
struct UOnlinePurchaseSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystem.IsAllowedToPurchase
struct UOnlinePurchaseSubsystem_IsAllowedToPurchase_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_733[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystem.GetReceipts
struct UOnlinePurchaseSubsystem_GetReceipts_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPurchaseReceipt*>              OutReceipts;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystem.FinalizePurchase
struct UOnlinePurchaseSubsystem_FinalizePurchase_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceiptId;                                         // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceiptInfo;                                       // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystemCheckout.Checkout
struct UOnlinePurchaseSubsystemCheckout_Checkout_Params
{
public:
	class UOnlinePurchaseSubsystem*              Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPurchaseCheckoutRequestBP            CheckoutRequest;                                   // 0x30(0x20)(Parm, NativeAccessSpecifierPublic)
	class UOnlinePurchaseSubsystemCheckout*      ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystemRedeemCode.RedeemCode
struct UOnlinePurchaseSubsystemRedeemCode_RedeemCode_Params
{
public:
	class UOnlinePurchaseSubsystem*              Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRedeemCodeRequestBP                  RedeemCodeRequest;                                 // 0x30(0x30)(Parm, NativeAccessSpecifierPublic)
	class UOnlinePurchaseSubsystemRedeemCode*    ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystemQueryReceipts.QueryReceipts
struct UOnlinePurchaseSubsystemQueryReceipts_QueryReceipts_Params
{
public:
	class UOnlinePurchaseSubsystem*              Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestoreReceipts;                                  // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_735[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePurchaseSubsystemQueryReceipts* ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePurchaseSubsystemFinalizeReceiptValidationInfo.FinalizeReceiptValidationInfo
struct UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo_FinalizeReceiptValidationInfo_Params
{
public:
	class UOnlinePurchaseSubsystem*              Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InReceiptValidationInfo;                           // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo* ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.SendSessionInviteToFriends
struct UOnlineSessionSubsystem_SendSessionInviteToFriends_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUniqueNetIdRepl>              Friends;                                           // 0x30(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_737[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.SendSessionInviteToFriend
struct UOnlineSessionSubsystem_SendSessionInviteToFriend_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      Friend;                                            // 0x30(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_738[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.RemovePlayerFromSession
struct UOnlineSessionSubsystem_RemovePlayerFromSession_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_739[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      TargetPlayerId;                                    // 0x10(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.RemoveNamedSession
struct UOnlineSessionSubsystem_RemoveNamedSession_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.IsSubsystemAvailable
struct UOnlineSessionSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.IsPlayerInSession
struct UOnlineSessionSubsystem_IsPlayerInSession_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_73A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.HasPresenceSession
struct UOnlineSessionSubsystem_HasPresenceSession_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetSessionState
struct UOnlineSessionSubsystem_GetSessionState_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOnlineSessionState_              ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_73B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetSessionSettings
struct UOnlineSessionSubsystem_GetSessionSettings_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSessionSettings*                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetNumSessions
struct UOnlineSessionSubsystem_GetNumSessions_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetNamedSession
struct UOnlineSessionSubsystem_GetNamedSession_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNamedOnlineSession*                   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystem.CreateSessionIdFromString
struct UOnlineSessionSubsystem_CreateSessionIdFromString_Params
{
public:
	class FString                                SessionIdStr;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemCreateSession.CreateSession
struct UOnlineSessionSubsystemCreateSession_CreateSession_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      HostingPlayerId;                                   // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineSessionSettingsBP              NewSessionSettings;                                // 0x38(0x128)(Parm, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystemCreateSession*  ReturnValue;                                       // 0x160(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemStartSession.StartSession
struct UOnlineSessionSubsystemStartSession_StartSession_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystemStartSession*   ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x148 (0x148 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemUpdateSession.UpdateSession
struct UOnlineSessionSubsystemUpdateSession_UpdateSession_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineSessionSettingsBP              UpdatedSessionSettings;                            // 0x10(0x128)(Parm, NativeAccessSpecifierPublic)
	bool                                         bShouldRefreshOnlineData;                          // 0x138(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_73F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineSessionSubsystemUpdateSession*  ReturnValue;                                       // 0x140(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemEndSession.EndSession
struct UOnlineSessionSubsystemEndSession_EndSession_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystemEndSession*     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemDestroySession.DestroySession
struct UOnlineSessionSubsystemDestroySession_DestroySession_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystemDestroySession* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x158 (0x158 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemStartMatchmaking.StartMatchmaking
struct UOnlineSessionSubsystemStartMatchmaking_StartMatchmaking_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUniqueNetIdRepl>              LocalPlayers;                                      // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineSessionSettingsBP              NewSessionSettings;                                // 0x20(0x128)(Parm, NativeAccessSpecifierPublic)
	class UOnlineSessionSearch*                  SearchSettings;                                    // 0x148(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystemStartMatchmaking* ReturnValue;                                       // 0x150(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemCancelMatchmaking.CancelMatchmaking
struct UOnlineSessionSubsystemCancelMatchmaking_CancelMatchmaking_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      SearchingPlayerId;                                 // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystemCancelMatchmaking* ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemFindSessions.FindSessions
struct UOnlineSessionSubsystemFindSessions_FindSessions_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      SearchingPlayerId;                                 // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSessionSearch*                  SearchSettings;                                    // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystemFindSessions*   ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemFindSessionById.FindSessionById
struct UOnlineSessionSubsystemFindSessionById_FindSessionById_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      SearchingUserId;                                   // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      SessionId;                                         // 0x30(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      FriendId;                                          // 0x58(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserData;                                          // 0x80(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystemFindSessionById* ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemCancelFindSessions.CancelFindSessions
struct UOnlineSessionSubsystemCancelFindSessions_CancelFindSessions_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystemCancelFindSessions* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x198 (0x198 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemPingSearchResults.PingSearchResults
struct UOnlineSessionSubsystemPingSearchResults_PingSearchResults_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineSessionSearchResultBP          SearchResult;                                      // 0x8(0x188)(Parm, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystemPingSearchResults* ReturnValue;                                       // 0x190(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C8 (0x1C8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemJoinSession.JoinSession
struct UOnlineSessionSubsystemJoinSession_JoinSession_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineSessionSearchResultBP          DesiredSession;                                    // 0x38(0x188)(Parm, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystemJoinSession*    ReturnValue;                                       // 0x1C0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemFindFriendSession.FindFriendSession
struct UOnlineSessionSubsystemFindFriendSession_FindFriendSession_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_749[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      Friend;                                            // 0x10(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystemFindFriendSession* ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemRegisterPlayers.RegisterPlayers
struct UOnlineSessionSubsystemRegisterPlayers_RegisterPlayers_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUniqueNetIdRepl>              Players;                                           // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bWasInvited;                                       // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_74C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineSessionSubsystemRegisterPlayers* ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemUnregisterPlayers.UnregisterPlayers
struct UOnlineSessionSubsystemUnregisterPlayers_UnregisterPlayers_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUniqueNetIdRepl>              Players;                                           // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystemUnregisterPlayers* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemRegisterLocalPlayer.RegisterLocalPlayer
struct UOnlineSessionSubsystemRegisterLocalPlayer_RegisterLocalPlayer_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystemRegisterLocalPlayer* ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSubsystemUnregisterLocalPlayer.UnregisterLocalPlayer
struct UOnlineSessionSubsystemUnregisterLocalPlayer_UnregisterLocalPlayer_Params
{
public:
	class UOnlineSessionSubsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystemUnregisterLocalPlayer* ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSharedCloudSubsystem.WriteSharedFile
struct UOnlineSharedCloudSubsystem_WriteSharedFile_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFileData*                             Contents;                                          // 0x38(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_750[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSharedCloudSubsystem.IsSubsystemAvailable
struct UOnlineSharedCloudSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSharedCloudSubsystem.ClearSharedFiles
struct UOnlineSharedCloudSubsystem_ClearSharedFiles_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSharingSubsystem.ReadNewsFeed
struct UOnlineSharingSubsystem_ReadNewsFeed_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPostsToRead;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_752[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSharingSubsystem.IsSubsystemAvailable
struct UOnlineSharingSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStatsSubsystem.IsSubsystemAvailable
struct UOnlineStatsSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStatsSubsystem.GetStats
struct UOnlineStatsSubsystem_GetStats_Params
{
public:
	struct FUniqueNetIdRepl                      StatsUserId;                                       // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineStatsUserStatsBP               ReturnValue;                                       // 0x28(0x78)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStatsSubsystemQueryStats.QueryStats
struct UOnlineStatsSubsystemQueryStats_QueryStats_Params
{
public:
	class UOnlineStatsSubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUniqueNetIdRepl>              StatUsers;                                         // 0x30(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        StatNames;                                         // 0x40(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOnlineStatsSubsystemQueryStats*       ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStatsSubsystemUpdateStats.UpdateStats
struct UOnlineStatsSubsystemUpdateStats_UpdateStats_Params
{
public:
	class UOnlineStatsSubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOnlineStatsUserUpdatedStatsBP> UpdatedUserStats;                                  // 0x30(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOnlineStatsSubsystemUpdateStats*      ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreV2Subsystem.IsSubsystemAvailable
struct UOnlineStoreV2Subsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreV2Subsystem.GetOffers
struct UOnlineStoreV2Subsystem_GetOffers_Params
{
public:
	TArray<class UOnlineStoreOffer*>             OutOffers;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreV2Subsystem.GetOffer
struct UOnlineStoreV2Subsystem_GetOffer_Params
{
public:
	class FString                                OfferId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineStoreOffer*                     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreV2Subsystem.GetCategories
struct UOnlineStoreV2Subsystem_GetCategories_Params
{
public:
	TArray<struct FOnlineStoreCategoryBP>        OutCategories;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryCategories.QueryCategories
struct UOnlineStoreV2SubsystemQueryCategories_QueryCategories_Params
{
public:
	class UOnlineStoreV2Subsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineStoreV2SubsystemQueryCategories* ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryOffersByFilter.QueryOffersByFilter
struct UOnlineStoreV2SubsystemQueryOffersByFilter_QueryOffersByFilter_Params
{
public:
	class UOnlineStoreV2Subsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineStoreFilterBP                  Filter;                                            // 0x30(0x30)(Parm, NativeAccessSpecifierPublic)
	class UOnlineStoreV2SubsystemQueryOffersByFilter* ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryOffersById.QueryOffersById
struct UOnlineStoreV2SubsystemQueryOffersById_QueryOffersById_Params
{
public:
	class UOnlineStoreV2Subsystem*               Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        OfferIds;                                          // 0x30(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOnlineStoreV2SubsystemQueryOffersById* ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedVoiceSubsystem
struct UOnlineSubsystem_GetNamedVoiceSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineVoiceSubsystem*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedVoiceAdminSubsystem
struct UOnlineSubsystem_GetNamedVoiceAdminSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineVoiceAdminSubsystem*            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedUserSubsystem
struct UOnlineSubsystem_GetNamedUserSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineUserSubsystem*                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedUserCloudSubsystem
struct UOnlineSubsystem_GetNamedUserCloudSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineUserCloudSubsystem*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedTurnBasedSubsystem
struct UOnlineSubsystem_GetNamedTurnBasedSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineTurnBasedSubsystem*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedTournamentSubsystem
struct UOnlineSubsystem_GetNamedTournamentSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineTournamentSubsystem*            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedTitleFileSubsystem
struct UOnlineSubsystem_GetNamedTitleFileSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineTitleFileSubsystem*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedTimeSubsystem
struct UOnlineSubsystem_GetNamedTimeSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineTimeSubsystem*                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedStoreV2Subsystem
struct UOnlineSubsystem_GetNamedStoreV2Subsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineStoreV2Subsystem*               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedStatsSubsystem
struct UOnlineSubsystem_GetNamedStatsSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineStatsSubsystem*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedSharingSubsystem
struct UOnlineSubsystem_GetNamedSharingSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSharingSubsystem*               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedSharedCloudSubsystem
struct UOnlineSubsystem_GetNamedSharedCloudSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSharedCloudSubsystem*           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedSessionSubsystem
struct UOnlineSubsystem_GetNamedSessionSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedPurchaseSubsystem
struct UOnlineSubsystem_GetNamedPurchaseSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePurchaseSubsystem*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedPresenceSubsystem
struct UOnlineSubsystem_GetNamedPresenceSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePresenceSubsystem*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedPartySubsystem
struct UOnlineSubsystem_GetNamedPartySubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystem*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedMessageSubsystem
struct UOnlineSubsystem_GetNamedMessageSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineMessageSubsystem*               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedMessageSanitizerSubsystem
struct UOnlineSubsystem_GetNamedMessageSanitizerSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineMessageSanitizerSubsystem*      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedLobbySubsystem
struct UOnlineSubsystem_GetNamedLobbySubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystem*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedLeaderboardsSubsystem
struct UOnlineSubsystem_GetNamedLeaderboardsSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLeaderboardsSubsystem*          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedIdentitySubsystem
struct UOnlineSubsystem_GetNamedIdentitySubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineIdentitySubsystem*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedGroupsSubsystem
struct UOnlineSubsystem_GetNamedGroupsSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineGroupsSubsystem*                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedGameItemStatsSubsystem
struct UOnlineSubsystem_GetNamedGameItemStatsSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineGameItemStatsSubsystem*         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedGameActivitySubsystem
struct UOnlineSubsystem_GetNamedGameActivitySubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineGameActivitySubsystem*          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedFriendsSubsystem
struct UOnlineSubsystem_GetNamedFriendsSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedExternalUISubsystem
struct UOnlineSubsystem_GetNamedExternalUISubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineExternalUISubsystem*            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedEventsSubsystem
struct UOnlineSubsystem_GetNamedEventsSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineEventsSubsystem*                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedEntitlementsSubsystem
struct UOnlineSubsystem_GetNamedEntitlementsSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineEntitlementsSubsystem*          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedChatSubsystem
struct UOnlineSubsystem_GetNamedChatSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineChatSubsystem*                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedAvatarSubsystem
struct UOnlineSubsystem_GetNamedAvatarSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineAvatarSubsystem*                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSubsystem.GetNamedAchievementsSubsystem
struct UOnlineSubsystem_GetNamedAchievementsSubsystem_Params
{
public:
	class FName                                  SubsystemName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineAchievementsSubsystem*          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTimeSubsystem.QueryServerUtcTime
struct UOnlineTimeSubsystem_QueryServerUtcTime_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTimeSubsystem.IsSubsystemAvailable
struct UOnlineTimeSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTimeSubsystem.GetLastServerUtcTime
struct UOnlineTimeSubsystem_GetLastServerUtcTime_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.IsSubsystemAvailable
struct UOnlineTitleFileSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.GetFileList
struct UOnlineTitleFileSubsystem_GetFileList_Params
{
public:
	TArray<struct FCloudFileHeaderBP>            Files;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.GetFileContents
struct UOnlineTitleFileSubsystem_GetFileContents_Params
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFileData*                             FileContents;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_75B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.DeleteCachedFiles
struct UOnlineTitleFileSubsystem_DeleteCachedFiles_Params
{
public:
	bool                                         bSkipEnumerated;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.ClearFiles
struct UOnlineTitleFileSubsystem_ClearFiles_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.ClearFile
struct UOnlineTitleFileSubsystem_ClearFile_Params
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_75C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystemEnumerateFiles.EnumerateFiles
struct UOnlineTitleFileSubsystemEnumerateFiles_EnumerateFiles_Params
{
public:
	class UOnlineTitleFileSubsystem*             Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPagedQueryBP                         Page;                                              // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UOnlineTitleFileSubsystemEnumerateFiles* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTitleFileSubsystemReadFile.ReadFile
struct UOnlineTitleFileSubsystemReadFile_ReadFile_Params
{
public:
	class UOnlineTitleFileSubsystem*             Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineTitleFileSubsystemReadFile*     ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTournamentSubsystem.IsSubsystemAvailable
struct UOnlineTournamentSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTurnBasedSubsystem.IsSubsystemAvailable
struct UOnlineTurnBasedSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTurnBasedSubsystem.GetMatchDataSize
struct UOnlineTurnBasedSubsystem_GetMatchDataSize_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTurnBasedSubsystemLoadAllMatches.LoadAllMatches
struct UOnlineTurnBasedSubsystemLoadAllMatches_LoadAllMatches_Params
{
public:
	class UOnlineTurnBasedSubsystem*             Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineTurnBasedSubsystemLoadAllMatches* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineTurnBasedSubsystemLoadMatchWithID.LoadMatchWithID
struct UOnlineTurnBasedSubsystemLoadMatchWithID_LoadMatchWithID_Params
{
public:
	class UOnlineTurnBasedSubsystem*             Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MatchID;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineTurnBasedSubsystemLoadMatchWithID* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.RequestUsageInfo
struct UOnlineUserCloudSubsystem_RequestUsageInfo_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_762[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.IsSubsystemAvailable
struct UOnlineUserCloudSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.GetUserFileList
struct UOnlineUserCloudSubsystem_GetUserFileList_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCloudFileHeaderBP>            UserFiles;                                         // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.GetFileContents
struct UOnlineUserCloudSubsystem_GetFileContents_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFileData*                             FileContents;                                      // 0x38(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_763[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.DumpCloudState
struct UOnlineUserCloudSubsystem_DumpCloudState_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.DumpCloudFileState
struct UOnlineUserCloudSubsystem_DumpCloudFileState_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.ClearFiles
struct UOnlineUserCloudSubsystem_ClearFiles_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_764[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.ClearFile
struct UOnlineUserCloudSubsystem_ClearFile_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_765[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.CancelWriteUserFile
struct UOnlineUserCloudSubsystem_CancelWriteUserFile_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystemEnumerateUserFiles.EnumerateUserFiles
struct UOnlineUserCloudSubsystemEnumerateUserFiles_EnumerateUserFiles_Params
{
public:
	class UOnlineUserCloudSubsystem*             Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineUserCloudSubsystemEnumerateUserFiles* ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystemReadUserFile.ReadUserFile
struct UOnlineUserCloudSubsystemReadUserFile_ReadUserFile_Params
{
public:
	class UOnlineUserCloudSubsystem*             Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineUserCloudSubsystemReadUserFile* ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystemWriteUserFile.WriteUserFile
struct UOnlineUserCloudSubsystemWriteUserFile_WriteUserFile_Params
{
public:
	class UOnlineUserCloudSubsystem*             Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFileData*                             FileContents;                                      // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompressBeforeUpload;                             // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_769[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineUserCloudSubsystemWriteUserFile* ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserCloudSubsystemDeleteUserFile.DeleteUserFile
struct UOnlineUserCloudSubsystemDeleteUserFile_DeleteUserFile_Params
{
public:
	class UOnlineUserCloudSubsystem*             Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldCloudDelete;                                // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldLocallyDelete;                              // 0x41(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineUserCloudSubsystemDeleteUserFile* ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserSubsystem.IsSubsystemAvailable
struct UOnlineUserSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserSubsystem.GetUserInfo
struct UOnlineUserSubsystem_GetUserInfo_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineUserRef*                        ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserSubsystem.GetExternalIdMappings
struct UOnlineUserSubsystem_GetExternalIdMappings_Params
{
public:
	struct FExternalIdQueryOptionsBP             QueryOptions;                                      // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	TArray<class FString>                        ExternalIds;                                       // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FUniqueNetIdRepl>              OutIds;                                            // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserSubsystem.GetExternalIdMapping
struct UOnlineUserSubsystem_GetExternalIdMapping_Params
{
public:
	struct FExternalIdQueryOptionsBP             QueryOptions;                                      // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class FString                                ExternalId;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x28(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserSubsystem.GetAllUserInfo
struct UOnlineUserSubsystem_GetAllUserInfo_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_770[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UOnlineUserRef*>                OutUsers;                                          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_771[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserSubsystemQueryUserInfo.QueryUserInfo
struct UOnlineUserSubsystemQueryUserInfo_QueryUserInfo_Params
{
public:
	class UOnlineUserSubsystem*                  Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalUserNum;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_773[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FUniqueNetIdRepl>              UserIds;                                           // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOnlineUserSubsystemQueryUserInfo*     ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserSubsystemQueryUserIdMapping.QueryUserIdMapping
struct UOnlineUserSubsystemQueryUserIdMapping_QueryUserIdMapping_Params
{
public:
	class UOnlineUserSubsystem*                  Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayNameOrEmail;                                // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineUserSubsystemQueryUserIdMapping* ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserSubsystemQueryExternalIdMappings.QueryExternalIdMappings
struct UOnlineUserSubsystemQueryExternalIdMappings_QueryExternalIdMappings_Params
{
public:
	class UOnlineUserSubsystem*                  Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExternalIdQueryOptionsBP             QueryOptions;                                      // 0x30(0x18)(Parm, NativeAccessSpecifierPublic)
	TArray<class FString>                        ExternalIds;                                       // 0x48(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOnlineUserSubsystemQueryExternalIdMappings* ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystem.IsSubsystemAvailable
struct UOnlineVoiceAdminSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystemCreateChannelCredentials.CreateChannelCredentials
struct UOnlineVoiceAdminSubsystemCreateChannelCredentials_CreateChannelCredentials_Params
{
public:
	class UOnlineVoiceAdminSubsystem*            Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChannelName;                                       // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUniqueNetIdRepl>              TargetUserIds;                                     // 0x40(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOnlineVoiceAdminSubsystemCreateChannelCredentials* ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystemKickParticipant.KickParticipant
struct UOnlineVoiceAdminSubsystemKickParticipant_KickParticipant_Params
{
public:
	class UOnlineVoiceAdminSubsystem*            Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChannelName;                                       // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      TargetUserId;                                      // 0x40(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineVoiceAdminSubsystemKickParticipant* ReturnValue;                                       // 0x68(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystemSetParticipantHardMute.SetParticipantHardMute
struct UOnlineVoiceAdminSubsystemSetParticipantHardMute_SetParticipantHardMute_Params
{
public:
	class UOnlineVoiceAdminSubsystem*            Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChannelName;                                       // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      TargetUserId;                                      // 0x40(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMuted;                                            // 0x68(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_779[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineVoiceAdminSubsystemSetParticipantHardMute* ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.Uninitialize_
struct UOnlineVoiceChatSubsystem_Uninitialize__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.IsSubsystemAvailable
struct UOnlineVoiceChatSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.IsInitialized
struct UOnlineVoiceChatSubsystem_IsInitialized_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.IsConnecting
struct UOnlineVoiceChatSubsystem_IsConnecting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.IsConnected
struct UOnlineVoiceChatSubsystem_IsConnected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.Initialize_
struct UOnlineVoiceChatSubsystem_Initialize__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem.CreateUser
struct UOnlineVoiceChatSubsystem_CreateUser_Params
{
public:
	class UVoiceChatUser*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystemConnect.Connect
struct UOnlineVoiceChatSubsystemConnect_Connect_Params
{
public:
	class UOnlineVoiceChatSubsystem*             Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineVoiceChatSubsystemConnect*      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceChatSubsystemDisconnect.Disconnect
struct UOnlineVoiceChatSubsystemDisconnect_Disconnect_Params
{
public:
	class UOnlineVoiceChatSubsystem*             Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineVoiceChatSubsystemDisconnect*   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.UnregisterRemoteTalker
struct UOnlineVoiceSubsystem_UnregisterRemoteTalker_Params
{
public:
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_78C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.UnregisterLocalTalker
struct UOnlineVoiceSubsystem_UnregisterLocalTalker_Params
{
public:
	int64                                        LocalUserNum;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_78E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.UnmuteRemoteTalker
struct UOnlineVoiceSubsystem_UnmuteRemoteTalker_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_78F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSystemWide;                                     // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x31(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_790[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.StopNetworkedVoice
struct UOnlineVoiceSubsystem_StopNetworkedVoice_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.StartNetworkedVoice
struct UOnlineVoiceSubsystem_StartNetworkedVoice_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.RegisterRemoteTalker
struct UOnlineVoiceSubsystem_RegisterRemoteTalker_Params
{
public:
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_792[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.RegisterLocalTalker
struct UOnlineVoiceSubsystem_RegisterLocalTalker_Params
{
public:
	int64                                        LocalUserNum;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_794[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.PatchRemoteTalkerOutputToEndpoint
struct UOnlineVoiceSubsystem_PatchRemoteTalkerOutputToEndpoint_Params
{
public:
	class FString                                InDeviceName;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMuteInGameOutput;                                 // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_796[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.PatchLocalTalkerOutputToEndpoint
struct UOnlineVoiceSubsystem_PatchLocalTalkerOutputToEndpoint_Params
{
public:
	class FString                                InDeviceName;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_798[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.MuteRemoteTalker
struct UOnlineVoiceSubsystem_MuteRemoteTalker_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSystemWide;                                     // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x31(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79B[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsSubsystemAvailable
struct UOnlineVoiceSubsystem_IsSubsystemAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsRemotePlayerTalking
struct UOnlineVoiceSubsystem_IsRemotePlayerTalking_Params
{
public:
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsMuted
struct UOnlineVoiceSubsystem_IsMuted_Params
{
public:
	int64                                        LocalUserNum;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsLocalPlayerTalking
struct UOnlineVoiceSubsystem_IsLocalPlayerTalking_Params
{
public:
	int64                                        LocalUserNum;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsHeadsetPresent
struct UOnlineVoiceSubsystem_IsHeadsetPresent_Params
{
public:
	int64                                        LocalUserNum;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.GetVoiceDebugState
struct UOnlineVoiceSubsystem_GetVoiceDebugState_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.GetNumLocalTalkers
struct UOnlineVoiceSubsystem_GetNumLocalTalkers_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineVoiceSubsystem.GetAmplitudeOfRemoteTalker
struct UOnlineVoiceSubsystem_GetAmplitudeOfRemoteTalker_Params
{
public:
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function OnlineSubsystemBlueprints.OnlineAchievementsWrite.SetAchievementProgress
struct UOnlineAchievementsWrite_SetAchievementProgress_Params
{
public:
	class FName                                  AchievementID;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AchievementProgress;                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEntitlement.IsConsumable
struct UOnlineEntitlement_IsConsumable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetStatus
struct UOnlineEntitlement_GetStatus_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetStartDate
struct UOnlineEntitlement_GetStartDate_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetRemainingCount
struct UOnlineEntitlement_GetRemainingCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetNamespace
struct UOnlineEntitlement_GetNamespace_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetName
struct UOnlineEntitlement_GetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetItemId
struct UOnlineEntitlement_GetItemId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetId
struct UOnlineEntitlement_GetId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetEndDate
struct UOnlineEntitlement_GetEndDate_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineEntitlement.GetConsumedCount
struct UOnlineEntitlement_GetConsumedCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.ExternalUIFlowHandler.OnLoginFlowUIRequired
struct IExternalUIFlowHandler_OnLoginFlowUIRequired_Params
{
public:
	class FString                                RequestedURL;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineExternalUISubsystem*            ExternalUIContext;                                 // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequestID;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AA[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.ExternalUIFlowHandler.OnCreateAccountFlowUIRequired
struct IExternalUIFlowHandler_OnCreateAccountFlowUIRequired_Params
{
public:
	class FString                                RequestedURL;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineExternalUISubsystem*            ExternalUIContext;                                 // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequestID;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserRef.SetUserLocalAttribute
struct UOnlineUserRef_SetUserLocalAttribute_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserRef.GetUserId
struct UOnlineUserRef_GetUserId_Params
{
public:
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserRef.GetUserAttribute
struct UOnlineUserRef_GetUserAttribute_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserRef.GetRealName
struct UOnlineUserRef_GetRealName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineUserRef.GetDisplayName
struct UOnlineUserRef_GetDisplayName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendRef.GetPresence
struct UOnlineFriendRef_GetPresence_Params
{
public:
	struct FOnlineUserPresenceData               ReturnValue;                                       // 0x0(0xA0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineFriendRef.GetInviteStatus
struct UOnlineFriendRef_GetInviteStatus_Params
{
public:
	enum class EInviteStatus_                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.SetSortedColumn
struct UOnlineLeaderboardRead_SetSortedColumn_Params
{
public:
	class FName                                  SortedColumn;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.SetLeaderboardName
struct UOnlineLeaderboardRead_SetLeaderboardName_Params
{
public:
	class FName                                  LeaderboardName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.SetColumns
struct UOnlineLeaderboardRead_SetColumns_Params
{
public:
	TArray<struct FColumnMetaDataBP>             InColumns;                                         // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetSortedColumn
struct UOnlineLeaderboardRead_GetSortedColumn_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetRows
struct UOnlineLeaderboardRead_GetRows_Params
{
public:
	TArray<struct FOnlineStatsRowBP>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetReadState
struct UOnlineLeaderboardRead_GetReadState_Params
{
public:
	enum class EOnlineAsyncTaskState_            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetLeaderboardName
struct UOnlineLeaderboardRead_GetLeaderboardName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetColumns
struct UOnlineLeaderboardRead_GetColumns_Params
{
public:
	TArray<struct FColumnMetaDataBP>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLeaderboardRead.FindPlayerRecord
struct UOnlineLeaderboardRead_FindPlayerRecord_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutFound;                                          // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineStatsRowBP                     ReturnValue;                                       // 0x30(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.LobbyId.ToDebugString
struct ULobbyId_ToDebugString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.Lobby.GetOwnerId
struct ULobby_GetOwnerId_Params
{
public:
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.Lobby.GetId
struct ULobby_GetId_Params
{
public:
	class ULobbyId*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetPublic
struct UOnlineLobbyTransaction_SetPublic_Params
{
public:
	bool                                         Public;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetMetadataByMap
struct UOnlineLobbyTransaction_SetMetadataByMap_Params
{
public:
	TMap<class FString, struct FVariantDataBP>   MetaData;                                          // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetMetadata
struct UOnlineLobbyTransaction_SetMetadata_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVariantDataBP                        Value;                                             // 0x10(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetLocked
struct UOnlineLobbyTransaction_SetLocked_Params
{
public:
	bool                                         Locked;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetCapacity
struct UOnlineLobbyTransaction_SetCapacity_Params
{
public:
	int64                                        Capacity;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbyTransaction.DeleteMetadataByArray
struct UOnlineLobbyTransaction_DeleteMetadataByArray_Params
{
public:
	TArray<class FString>                        MetadataKeys;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbyTransaction.DeleteMetadata
struct UOnlineLobbyTransaction_DeleteMetadata_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.SetMetadataByMap
struct UOnlineLobbyMemberTransaction_SetMetadataByMap_Params
{
public:
	TMap<class FString, struct FVariantDataBP>   MetaData;                                          // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.SetMetadata
struct UOnlineLobbyMemberTransaction_SetMetadata_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVariantDataBP                        Value;                                             // 0x10(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.DeleteMetadataByArray
struct UOnlineLobbyMemberTransaction_DeleteMetadataByArray_Params
{
public:
	TArray<class FString>                        MetadataKeys;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.DeleteMetadata
struct UOnlineLobbyMemberTransaction_DeleteMetadata_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineRecentPlayerRef.GetLastSeen
struct UOnlineRecentPlayerRef_GetLastSeen_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.UserOnlineAccountRef.SetUserAttribute
struct UUserOnlineAccountRef_SetUserAttribute_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.UserOnlineAccountRef.GetAuthAttribute
struct UUserOnlineAccountRef_GetAuthAttribute_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.UserOnlineAccountRef.GetAccessToken
struct UUserOnlineAccountRef_GetAccessToken_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.Party.GetPartyTypeId
struct UParty_GetPartyTypeId_Params
{
public:
	int64                                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.Party.GetPartyId
struct UParty_GetPartyId_Params
{
public:
	class UPartyId*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.Party.GetLeaderId
struct UParty_GetLeaderId_Params
{
public:
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.BlueprintPartyMember.GetUserId
struct UBlueprintPartyMember_GetUserId_Params
{
public:
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.BlueprintPartyMember.GetUserAttribute
struct UBlueprintPartyMember_GetUserAttribute_Params
{
public:
	class FString                                AttrName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutAttrValue;                                      // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.BlueprintPartyMember.GetRealName
struct UBlueprintPartyMember_GetRealName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.BlueprintPartyMember.GetDisplayName
struct UBlueprintPartyMember_GetDisplayName_Params
{
public:
	class FString                                Platform;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.ReadablePartyData.GetAttribute
struct UReadablePartyData_GetAttribute_Params
{
public:
	class FString                                AttrName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutFound;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVariantDataBP                        OutAttrValue;                                      // 0x18(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.MutablePartyData.SetAttribute
struct UMutablePartyData_SetAttribute_Params
{
public:
	class FString                                AttrName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVariantDataBP                        AttrValue;                                         // 0x10(0x28)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.MutablePartyData.RemoveAttribute
struct UMutablePartyData_RemoveAttribute_Params
{
public:
	class FString                                AttrName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.PartyId.ToDebugString
struct UPartyId_ToDebugString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartyJoinInfo.ToDebugString
struct UOnlinePartyJoinInfo_ToDebugString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartyJoinInfo.GetSourceUserId
struct UOnlinePartyJoinInfo_GetSourceUserId_Params
{
public:
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartyJoinInfo.GetSourceDisplayName
struct UOnlinePartyJoinInfo_GetSourceDisplayName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlinePartyJoinInfo.GetPartyId
struct UOnlinePartyJoinInfo_GetPartyId_Params
{
public:
	class UPartyId*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.PurchaseReceipt.GetTransactionId
struct UPurchaseReceipt_GetTransactionId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.PurchaseReceipt.GetReceiptOffers
struct UPurchaseReceipt_GetReceiptOffers_Params
{
public:
	TArray<struct FReceiptOfferEntryBP>          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.PurchaseReceipt.GetPurchaseTransactionState
struct UPurchaseReceipt_GetPurchaseTransactionState_Params
{
public:
	enum class EPurchaseTransactionState_        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSettings.GetValue
struct UOnlineSessionSettings_GetValue_Params
{
public:
	struct FOnlineSessionSettingsBP              ReturnValue;                                       // 0x0(0x128)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function OnlineSubsystemBlueprints.NamedOnlineSession.GetValue
struct UNamedOnlineSession_GetValue_Params
{
public:
	struct FNamedOnlineSessionBP                 ReturnValue;                                       // 0x0(0x1D0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSearch.GetSearchState
struct UOnlineSessionSearch_GetSearchState_Params
{
public:
	enum class EOnlineAsyncTaskState_            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineSessionSearch.GetSearchResults
struct UOnlineSessionSearch_GetSearchResults_Params
{
public:
	TArray<struct FOnlineSessionSearchResultBP>  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreOffer.IsPurchasable
struct UOnlineStoreOffer_IsPurchasable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetTitle
struct UOnlineStoreOffer_GetTitle_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetReleaseDate
struct UOnlineStoreOffer_GetReleaseDate_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetRegularPrice
struct UOnlineStoreOffer_GetRegularPrice_Params
{
public:
	int64                                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetOfferId
struct UOnlineStoreOffer_GetOfferId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetNumericPrice
struct UOnlineStoreOffer_GetNumericPrice_Params
{
public:
	int64                                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetLongDescription
struct UOnlineStoreOffer_GetLongDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetExpirationDate
struct UOnlineStoreOffer_GetExpirationDate_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetDynamicFields
struct UOnlineStoreOffer_GetDynamicFields_Params
{
public:
	TMap<class FString, class FString>           ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetDisplayRegularPrice
struct UOnlineStoreOffer_GetDisplayRegularPrice_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetDisplayPrice
struct UOnlineStoreOffer_GetDisplayPrice_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetDescription
struct UOnlineStoreOffer_GetDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.OnlineStoreOffer.GetCurrencyCode
struct UOnlineStoreOffer_GetCurrencyCode_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.UnblockPlayers
struct UVoiceChatUser_UnblockPlayers_Params
{
public:
	TArray<class FString>                        PlayerNames;                                       // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.TransmitToSpecificChannel
struct UVoiceChatUser_TransmitToSpecificChannel_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.SetSetting
struct UVoiceChatUser_SetSetting_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.SetPlayerVolume
struct UVoiceChatUser_SetPlayerVolume_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.SetPlayerMuted
struct UVoiceChatUser_SetPlayerMuted_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMuted;                                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.SetOutputDeviceId
struct UVoiceChatUser_SetOutputDeviceId_Params
{
public:
	class FString                                OutputDeviceId;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.SetInputDeviceId
struct UVoiceChatUser_SetInputDeviceId_Params
{
public:
	class FString                                InputDeviceId;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.SetAudioOutputVolume
struct UVoiceChatUser_SetAudioOutputVolume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.SetAudioOutputDeviceMuted
struct UVoiceChatUser_SetAudioOutputDeviceMuted_Params
{
public:
	bool                                         bIsMuted;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.SetAudioInputVolume
struct UVoiceChatUser_SetAudioInputVolume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.SetAudioInputDeviceMuted
struct UVoiceChatUser_SetAudioInputDeviceMuted_Params
{
public:
	bool                                         bIsMuted;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.Set3DPosition
struct UVoiceChatUser_Set3DPosition_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpeakerPosition;                                   // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ListenerPosition;                                  // 0x1C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ListenerForwardDirection;                          // 0x28(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ListenerUpDirection;                               // 0x34(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.IsPlayerTalking
struct UVoiceChatUser_IsPlayerTalking_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.IsPlayerMuted
struct UVoiceChatUser_IsPlayerMuted_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.IsLoggingIn
struct UVoiceChatUser_IsLoggingIn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.IsLoggedIn
struct UVoiceChatUser_IsLoggedIn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.InsecureGetLoginToken
struct UVoiceChatUser_InsecureGetLoginToken_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.InsecureGetJoinToken
struct UVoiceChatUser_InsecureGetJoinToken_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoiceChatChannelType_            ChannelType;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_801[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoiceChatChannel3dPropertiesBP       Channel3dProperties;                               // 0x14(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_802[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetTransmitMode
struct UVoiceChatUser_GetTransmitMode_Params
{
public:
	enum class EVoiceChatTransmitMode_           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetTransmitChannel
struct UVoiceChatUser_GetTransmitChannel_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetSetting
struct UVoiceChatUser_GetSetting_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetPlayerVolume
struct UVoiceChatUser_GetPlayerVolume_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_803[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetPlayersInChannel
struct UVoiceChatUser_GetPlayersInChannel_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetOutputDeviceInfo
struct UVoiceChatUser_GetOutputDeviceInfo_Params
{
public:
	struct FVoiceChatDeviceInfoBP                ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetLoggedInPlayerName
struct UVoiceChatUser_GetLoggedInPlayerName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetInputDeviceInfo
struct UVoiceChatUser_GetInputDeviceInfo_Params
{
public:
	struct FVoiceChatDeviceInfoBP                ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetDefaultOutputDeviceInfo
struct UVoiceChatUser_GetDefaultOutputDeviceInfo_Params
{
public:
	struct FVoiceChatDeviceInfoBP                ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetDefaultInputDeviceInfo
struct UVoiceChatUser_GetDefaultInputDeviceInfo_Params
{
public:
	struct FVoiceChatDeviceInfoBP                ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetChannelType
struct UVoiceChatUser_GetChannelType_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoiceChatChannelType_            ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_805[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetChannels
struct UVoiceChatUser_GetChannels_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetAvailableOutputDeviceInfos
struct UVoiceChatUser_GetAvailableOutputDeviceInfos_Params
{
public:
	TArray<struct FVoiceChatDeviceInfoBP>        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetAvailableInputDeviceInfos
struct UVoiceChatUser_GetAvailableInputDeviceInfos_Params
{
public:
	TArray<struct FVoiceChatDeviceInfoBP>        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetAudioOutputVolume
struct UVoiceChatUser_GetAudioOutputVolume_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetAudioOutputDeviceMuted
struct UVoiceChatUser_GetAudioOutputDeviceMuted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetAudioInputVolume
struct UVoiceChatUser_GetAudioInputVolume_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.GetAudioInputDeviceMuted
struct UVoiceChatUser_GetAudioInputDeviceMuted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUser.BlockPlayers
struct UVoiceChatUser_BlockPlayers_Params
{
public:
	TArray<class FString>                        PlayerNames;                                       // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUserLogin.Login
struct UVoiceChatUserLogin_Login_Params
{
public:
	class UVoiceChatUser*                        Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlatformId;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Credentials;                                       // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVoiceChatUserLogin*                   ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUserLogout.Logout
struct UVoiceChatUserLogout_Logout_Params
{
public:
	class UVoiceChatUser*                        Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVoiceChatUserLogout*                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUserJoinChannel.JoinChannel
struct UVoiceChatUserJoinChannel_JoinChannel_Params
{
public:
	class UVoiceChatUser*                        Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChannelName;                                       // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChannelCredentials;                                // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoiceChatChannelType_            ChannelType;                                       // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoiceChatChannel3dPropertiesBP       Channel3dProperties;                               // 0x2C(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_81F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UVoiceChatUserJoinChannel*             ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemBlueprints.VoiceChatUserLeaveChannel.LeaveChannel
struct UVoiceChatUserLeaveChannel_LeaveChannel_Params
{
public:
	class UVoiceChatUser*                        Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChannelName;                                       // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVoiceChatUserLeaveChannel*            ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


