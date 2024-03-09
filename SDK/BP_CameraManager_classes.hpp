#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2840 - 0x2810)
// BlueprintGeneratedClass BP_CameraManager.BP_CameraManager_C
class ABP_CameraManager_C : public APlayerCameraManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2810(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Sphere;                                            // 0x2818(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        WaterHeight;                                       // 0x2820(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D41[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_WaterPP_C*                         UnderwaterPPRef;                                   // 0x2828(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASound_Volume_Detecter_C*              SoundVolumeDetecterRef;                            // 0x2830(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameState_C*                       BPGameState;                                       // 0x2838(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CameraManager_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_CameraManager(int32 EntryPoint, float K2Node_Event_DeltaSeconds, TArray<class ABP_WaterPP_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class ABP_WaterPP_C* CallFunc_Array_Get_Item, float CallFunc_GetWaterHeight_WaterHeight, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess);
};

}


