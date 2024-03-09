#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8B (0x3A8 - 0x31D)
// BlueprintGeneratedClass BP_Cork.BP_Cork_C
class ABP_Cork_C : public ABP_InteractableBase_C
{
public:
	uint8                                        Pad_3CAC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      Progress_0;                                        // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CorkWater;                                         // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio;                                             // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CorkMesh;                                          // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_BoatMeshBase_C*                    ShipRef;                                           // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       LocalInteractingCharacterRef;                      // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Releasing;                                         // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Popped;                                            // 0x359(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3CAD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReleaseTimer;                                      // 0x35C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InteractingCharacters_0;                           // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CorkLevel;                                         // 0x364(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                   PluggedMeshes;                                     // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMesh*>                   UnPluggedMeshes;                                   // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                PoppingMultipliers;                                // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                UnPoppingMultipliers;                              // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Cork_C* GetDefaultObj();

	void HandleCorkUpgrade(class UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item_1, bool CallFunc_SetStaticMesh_ReturnValue_1);
	void OnRep_CorkLevel();
	void UpgradeCork(bool* HasUpgraded, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnRep_Popped(class AAlpha_PlayerState_C* CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State, bool CallFunc_Compare_Crews_Is_Same_Team_And_Crew, class UStaticMesh* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item_1, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StopActivate();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void ShowHighlight();
	void HideHighlight();
	void EngageFromServer();
	void MC_ResetTimer();
	void S_Activate();
	void SetInUse();
	void MC_CorkUpgrade();
	void ExecuteUbergraph_BP_Cork(int32 EntryPoint, TArray<enum class E_ScoreType>& K2Node_MakeArray_Array, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, class ABP_Character_C* K2Node_Event_LocalCharacterRef, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_1, bool K2Node_DynamicCast_bSuccess_2, TArray<enum class E_ScoreType>& K2Node_MakeArray_Array_1, TArray<enum class E_ScoreType>& K2Node_MakeArray_Array_2, float CallFunc_Array_Get_Item, bool CallFunc_HasAuthority_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Array_Get_Item_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, TArray<enum class E_ScoreType>& K2Node_MakeArray_Array_3);
};

}


