#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x4C0 - 0x4A9)
// BlueprintGeneratedClass BP_WeaponPoisonBow.BP_WeaponPoisonBow_C
class ABP_WeaponPoisonBow_C : public ABP_WeaponRangedBase_C
{
public:
	uint8                                        Pad_2C9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WeaponPoisonBow_C* GetDefaultObj();

	void LoadedState(bool Loaded);
	void ExecuteUbergraph_BP_WeaponPoisonBow(int32 EntryPoint, bool K2Node_Event_Loaded, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1);
};

}


