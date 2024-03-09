#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x3F0 - 0x3C9)
// BlueprintGeneratedClass BP_PickupWeaponBase.BP_PickupWeaponBase_C
class ABP_PickupWeaponBase_C : public ABP_PickupBase_C
{
public:
	uint8                                        Pad_32B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        WeaponID;                                          // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DefaultAmmoAmount;                                 // 0x3DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentSlots                  WeaponType;                                        // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_NewWeaponStates                 NewWeapon;                                         // 0x3E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_32B6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       Real_Interacting_Character_Ref;                    // 0x3E8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PickupWeaponBase_C* GetDefaultObj();

	void OnRep_Real_Interacting_Character_Ref();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void TakePickup();
	void TakePickupLocal();
	void Refresh_materials();
	void S_Force_Interactive_Character_Ref(class ABP_Character_C* Character_Ref);
	void ExecuteUbergraph_BP_PickupWeaponBase(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_CheckIfDifferentWeapon_DifferentWeapon, bool CallFunc_CheckIfDifferentWeapon_DifferentWeapon_1, bool K2Node_SwitchEnum_CmpSuccess, class ABP_Character_C* K2Node_CustomEvent_Character_Ref);
};

}


