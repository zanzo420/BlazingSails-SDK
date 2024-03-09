#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x4C0 - 0x4A9)
// BlueprintGeneratedClass BP_WeaponNockGun.BP_WeaponNockGun_C
class ABP_WeaponNockGun_C : public ABP_WeaponRangedBase_C
{
public:
	uint8                                        Pad_1F45[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         ApplyDaze;                                         // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultKnockback;                                  // 0x4BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WeaponNockGun_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void SecundaryFired();
	void SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void ReceiveBeginPlay();
	void PrimaryFire(const struct FVector& CameraLocation, const struct FVector& Direction, bool FullPrecision, bool WasSprinting);
	void ExecuteUbergraph_BP_WeaponNockGun(int32 EntryPoint, const struct FVector& K2Node_Event_CameraLocation, const struct FVector& K2Node_Event_Direction, bool K2Node_Event_FullPrecision, bool K2Node_Event_WasSprinting, float K2Node_Event_DeltaSeconds, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& K2Node_Event_CameraLocation_1, const struct FVector& K2Node_Event_Direction_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


