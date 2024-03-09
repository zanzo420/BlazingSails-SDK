#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x4C8 - 0x4A9)
// BlueprintGeneratedClass BP_WeaponSniper.BP_WeaponSniper_C
class ABP_WeaponSniper_C : public ABP_WeaponRangedBase_C
{
public:
	uint8                                        Pad_2EAD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  Glint;                                             // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        BreathingPitch;                                    // 0x4C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BreathReverseMultiplier;                           // 0x4C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WeaponSniper_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void HolsteredEvent();
	void StopSecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void ExecuteUbergraph_BP_WeaponSniper(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& K2Node_Event_CameraLocation_1, const struct FVector& K2Node_Event_Direction_1, const struct FVector& K2Node_Event_CameraLocation, const struct FVector& K2Node_Event_Direction, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6);
};

}


