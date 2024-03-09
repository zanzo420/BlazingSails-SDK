#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3E0 - 0x3D8)
// BlueprintGeneratedClass BP_PickupAntiSail.BP_PickupAntiSail_C
class ABP_PickupAntiSail_C : public ABP_PickupItemBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_PickupAntiSail_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void S_Activate();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void ExecuteUbergraph_BP_PickupAntiSail(int32 EntryPoint, class ABP_Character_C* K2Node_Event_LocalCharacterRef);
};

}


