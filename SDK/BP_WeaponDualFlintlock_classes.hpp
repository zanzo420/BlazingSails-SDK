#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x4BC - 0x4A9)
// BlueprintGeneratedClass BP_WeaponDualFlintlock.BP_WeaponDualFlintlock_C
class ABP_WeaponDualFlintlock_C : public ABP_WeaponRangedBase_C
{
public:
	uint8                                        Pad_2ECC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        SecondaryFireAmount;                               // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WeaponDualFlintlock_C* GetDefaultObj();

	void ReloadEvent(class ABP_Character_C* CharacterRef);
	void HolsteredEvent();
	void SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void ExecuteUbergraph_BP_WeaponDualFlintlock(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class ABP_Character_C* K2Node_Event_CharacterRef, const struct FVector& K2Node_Event_CameraLocation, const struct FVector& K2Node_Event_Direction, int32 CallFunc_Min_ReturnValue);
};

}


