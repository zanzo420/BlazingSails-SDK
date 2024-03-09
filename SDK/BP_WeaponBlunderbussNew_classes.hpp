#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x4C0 - 0x4A9)
// BlueprintGeneratedClass BP_WeaponBlunderbussNew.BP_WeaponBlunderbussNew_C
class ABP_WeaponBlunderbussNew_C : public ABP_WeaponRangedBase_C
{
public:
	uint8                                        Pad_2EE4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        PelletsAmount;                                     // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FullShotAmmoCost;                                  // 0x4BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WeaponBlunderbussNew_C* GetDefaultObj();

	void PrimaryFire(const struct FVector& CameraLocation, const struct FVector& Direction, bool FullPrecision, bool WasSprinting);
	void ExecuteUbergraph_BP_WeaponBlunderbussNew(int32 EntryPoint, const struct FVector& K2Node_Event_CameraLocation, const struct FVector& K2Node_Event_Direction, bool K2Node_Event_FullPrecision, bool K2Node_Event_WasSprinting, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
};

}


