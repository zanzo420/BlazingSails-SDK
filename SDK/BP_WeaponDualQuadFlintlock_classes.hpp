#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4C1 - 0x4A9)
// BlueprintGeneratedClass BP_WeaponDualQuadFlintlock.BP_WeaponDualQuadFlintlock_C
class ABP_WeaponDualQuadFlintlock_C : public ABP_WeaponRangedBase_C
{
public:
	uint8                                        Pad_2ECA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        SecondaryFireAmount;                               // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SecondaryFireRate;                                 // 0x4BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SecondaryFireContinue;                             // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_WeaponDualQuadFlintlock_C* GetDefaultObj();

	void HolsteredEvent();
	void SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void ReloadEvent(class ABP_Character_C* CharacterRef);
	void StopSecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void ExecuteUbergraph_BP_WeaponDualQuadFlintlock(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& K2Node_Event_CameraLocation_1, const struct FVector& K2Node_Event_Direction_1, int32 CallFunc_Min_ReturnValue, class ABP_Character_C* K2Node_Event_CharacterRef, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& K2Node_Event_CameraLocation, const struct FVector& K2Node_Event_Direction, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1);
};

}


