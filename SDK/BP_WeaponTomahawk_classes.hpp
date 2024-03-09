#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x47A - 0x46A)
// BlueprintGeneratedClass BP_WeaponTomahawk.BP_WeaponTomahawk_C
class ABP_WeaponTomahawk_C : public ABP_WeaponMeleeBase_C
{
public:
	uint8                                        Pad_2D4C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Ready;                                             // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowWeapon;                                        // 0x479(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_WeaponTomahawk_C* GetDefaultObj();

	void OnRep_ShowWeapon();
	void MC_Throw(const struct FVector& Location, const struct FVector& Direction, int32 TeamID);
	void SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void ExecuteUbergraph_BP_WeaponTomahawk(int32 EntryPoint, const struct FVector& K2Node_Event_CameraLocation, const struct FVector& K2Node_Event_Direction, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& K2Node_CustomEvent_Direction, int32 K2Node_CustomEvent_TeamId, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ProjectileTomahawk_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


