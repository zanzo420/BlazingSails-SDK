#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A0 (0x400 - 0x260)
// WidgetBlueprintGeneratedClass UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C
class UUI_FriendsListEntry_Epic_Steam_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            FriendNameTxt;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FriendNameTxt_1;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FriendPersonaImg;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FriendStatusTxt;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               InviteButton;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               StatusBorder;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEOS_FriendReference_C*                Friend_Reference;                                  // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Fetching_Avatar_;                               // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3880[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Cached_Avatar;                                     // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Default_Avatar;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Has_Avatar;                                        // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3881[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Avatar;                                            // 0x2C8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture*                              Default_Avatar_Epic;                               // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Default_Avatar_Steam;                              // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnlineUserPresenceData               Presence;                                          // 0x360(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUI_FriendsListEntry_Epic_Steam_C* GetDefaultObj();

	bool Get_InviteButton_bIsEnabled_0(class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool, bool CallFunc_Not_PreBool_ReturnValue);
	class FText Get_FriendStatusTxt_Text_0(const struct FOnlineUserPresenceData& CallFunc_GetPresence_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Set_Default_Avatar_Based_on_platform();
	class FText Get_FriendNameTxt_1_Text_0(const class FString& Final_Platform_Text, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
	enum class ESlateVisibility Get_SteamLogo_Visibility_0();
	enum class ESlateVisibility Get_EpicLogo_Visibility_0();
	struct FLinearColor Get_StatusBorder_BrushColor_0(const struct FLinearColor& CallFunc_LinearColor_Blue_ReturnValue, const struct FLinearColor& CallFunc_LinearColor_Green_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FOnlineUserPresenceData& CallFunc_GetPresence_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	struct FSlateBrush Get_FriendPersonaImg_Brush_0(class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	class FText Get_FriendNameTxt_Text_0(const class FString& UserName, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_GetUserAttribute_Found, const class FString& CallFunc_GetUserAttribute_ReturnValue);
	struct FLinearColor GetInviteButtonColorAndOpacity(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_IsHovered_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	void EnableInvitebutton();
	void Fetch_Friend_Avatar();
	void OnGetAvatarComplete_96C2E5094E63B87CA9F63DB8B447DC8A(bool bWasSuccessful, class UTexture* ResultTexture);
	void OnCallFailed_96C2E5094E63B87CA9F63DB8B447DC8A(bool bWasSuccessful, class UTexture* ResultTexture);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Created_Party(bool Successful);
	void Invite_Friend();
	void Recieved_Avatar(bool Successful, class UTexture* Avatar, const struct FUniqueNetIdRepl& User_ID);
	void ExecuteUbergraph_UI_FriendsListEntry_Epic_Steam(int32 EntryPoint, class UOnlineAvatarSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool K2Node_CustomEvent_bWasSuccessful_1, class UTexture* K2Node_CustomEvent_ResultTexture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bWasSuccessful, class UTexture* K2Node_CustomEvent_ResultTexture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture* Temp_object_Variable, bool Temp_bool_Variable, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UEOS_FriendReference_C* K2Node_DynamicCast_AsEOS_Friend_Reference, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Is_In_Party_In_Party_, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_CustomEvent_Successful_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, bool K2Node_CustomEvent_Successful, class UTexture* K2Node_CustomEvent_Avatar, const struct FUniqueNetIdRepl& K2Node_CustomEvent_User_Id, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_2, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_3, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_Get_Unique_Net_Id_ReturnValue, class UOnlineAvatarSubsystemGetAvatar* CallFunc_GetAvatar_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


