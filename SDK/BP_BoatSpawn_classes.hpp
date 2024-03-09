#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7D (0x29D - 0x220)
// BlueprintGeneratedClass BP_BoatSpawn.BP_BoatSpawn_C
class ABP_BoatSpawn_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      Widget;                                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Cylinder;                                          // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         InUse;                                             // 0x250(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_37F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TeamUsingThisSpawnPoint;                           // 0x254(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                TeamPlayerColors;                                  // 0x258(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	bool                                         PointSelected;                                     // 0x268(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         Used;                                              // 0x269(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Disabled;                                          // 0x26A(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         ClusterSelectionSpawn;                             // 0x26B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                  ClusterName;                                       // 0x26C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FST_TeamSpawnVotes>            TeamVotes;                                         // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  ActualClusterName;                                 // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_BoatSpawnPoint_C*                  UIBoatSpawnRef;                                    // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ClusterID;                                         // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Conquest;                                          // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_BoatSpawn_C* GetDefaultObj();

	void GetRandomClusterSpawnLocation(class ABP_BoatSpawn_C** BoatSpawnPoint, const TArray<class ABP_BoatSpawn_C*>& SpawnPoints, class ABP_BoatSpawn_C* SpawnPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class ABP_BoatSpawn_C* CallFunc_Array_Get_Item, TArray<class ABP_BoatSpawn_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_BoatSpawn_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue);
	void OnRep_Disabled();
	void OnRep_Selected(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_BoatSpawnPoint_C* K2Node_DynamicCast_AsUI_Boat_Spawn_Point, bool K2Node_DynamicCast_bSuccess, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Get_Team_ID_Team_ID, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnRep_TeamPlayerColors();
	void UpdateButton(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, class UUI_BoatSpawnPoint_C* K2Node_DynamicCast_AsUI_Boat_Spawn_Point, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Get_Team_ID_Team_ID, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnRep_TeamUsingThisSpawnPoint();
	void OnRep_InUse();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void RemovePoint();
	void RemoveKnife(const struct FUniqueNetIdRepl& Player_ID);
	void Add_Knife(const struct FUniqueNetIdRepl& Player_ID, class ABP_PlayerState_C* Player_State);
	void ExecuteUbergraph_BP_BoatSpawn(int32 EntryPoint, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, bool CallFunc_HasAuthority_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Player_ID_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUI_BoatSpawnPoint_C* K2Node_DynamicCast_AsUI_Boat_Spawn_Point, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Player_ID, class ABP_PlayerState_C* K2Node_CustomEvent_Player_State, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1);
};

}


