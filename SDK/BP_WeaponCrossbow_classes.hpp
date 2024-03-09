#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x4C0 - 0x4A9)
// BlueprintGeneratedClass BP_WeaponCrossbow.BP_WeaponCrossbow_C
class ABP_WeaponCrossbow_C : public ABP_WeaponRangedBase_C
{
public:
	uint8                                        Pad_2ED1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Bolt;                                              // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WeaponCrossbow_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ReloadEvent(class ABP_Character_C* CharacterRef);
	void HolsteredEvent();
	void LoadedState(bool Loaded);
	void ExecuteUbergraph_BP_WeaponCrossbow(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class ABP_Character_C* K2Node_Event_CharacterRef, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool K2Node_Event_Loaded, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2);
};

}


