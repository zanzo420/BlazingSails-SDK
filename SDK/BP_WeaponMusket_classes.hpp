#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x4C0 - 0x4A9)
// BlueprintGeneratedClass BP_WeaponMusket.BP_WeaponMusket_C
class ABP_WeaponMusket_C : public ABP_WeaponRangedBase_C
{
public:
	uint8                                        Pad_1C67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Bullet;                                            // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WeaponMusket_C* GetDefaultObj();

	void ReloadEvent(class ABP_Character_C* CharacterRef);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_WeaponMusket(int32 EntryPoint, class ABP_Character_C* K2Node_Event_CharacterRef, float K2Node_Event_DeltaSeconds);
};

}


