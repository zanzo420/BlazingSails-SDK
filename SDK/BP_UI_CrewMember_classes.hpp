#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x318 - 0x220)
// BlueprintGeneratedClass BP_UI_CrewMember.BP_UI_CrewMember_C
class ABP_UI_CrewMember_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      LoadingWidget;                                     // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  MannequinChild;                                    // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayerIndex;                                       // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DB4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_CrewMemberInfo_C*                  MemberInfoWidgetRef;                               // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_UI_CrewLobbyManager_C*             CrewManager;                                       // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Joining;                                        // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TimeoutTimer;                                      // 0x260(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FST_PlayerCustomisation               Cached_Cosmetics;                                  // 0x268(0x6C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Cached_Curse;                                      // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DB6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      Party_Member_Id;                                   // 0x2D8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         FinishedBeginPlay;                                 // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Ready;                                          // 0x301(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DB7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Player_ID;                                         // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_UI_CrewMember_C* GetDefaultObj();

	void ForceUpdateReady();
	void SetSlotPartyMember(const struct FUniqueNetIdRepl& Party_Member_Id, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, class UEOS_PartyMemberReference_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Update_Player_Curse(bool Curse, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABP_Mannequin_C* K2Node_DynamicCast_AsBP_Mannequin, bool K2Node_DynamicCast_bSuccess);
	void JoinTimeoutFallback();
	void Set_Is_Joining(bool Is_Joining_Party, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void Update_Player_Cosmetics(const struct FST_PlayerCustomisation& Cosmetics, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABP_Mannequin_C* K2Node_DynamicCast_AsBP_Mannequin, bool K2Node_DynamicCast_bSuccess);
	void UpdateSlotVisibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_FUniqueNetIdIsValid_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Is_In_Party_In_Party_, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateShouldShowInfoWidget(bool bShouldShow);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ForceUpdateMemberInfo();
	void ExecuteUbergraph_BP_UI_CrewMember(int32 EntryPoint, TArray<class ABP_UI_CrewLobbyManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_UI_CrewLobbyManager_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ABP_Mannequin_C* K2Node_DynamicCast_AsBP_Mannequin, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue, class UUI_CrewMemberInfo_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FUniqueNetIdRepl& K2Node_MakeStruct_UniqueNetIdRepl, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue);
};

}


