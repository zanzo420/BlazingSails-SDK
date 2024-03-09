#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x231 - 0x228)
// BlueprintGeneratedClass Shooting_Range.Shooting_Range_C
class AShooting_Range_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         SetPlayerVehicleInteract;                          // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AShooting_Range_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Shooting_Range(int32 EntryPoint, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_HasAuthority_ReturnValue, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item, float K2Node_Event_DeltaSeconds, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<class ABP_Character_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Character_C* CallFunc_Array_Get_Item_1, class ABP_ActionPauseStartTimer_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


