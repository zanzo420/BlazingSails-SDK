#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x318 - 0x310)
// BlueprintGeneratedClass BP_JunkDamagePoints.BP_JunkDamagePoints_C
class ABP_JunkDamagePoints_C : public ABP_BrigantineDamagePoints_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_JunkDamagePoints_C* GetDefaultObj();

	void DestroyUnwantedDamagePoint(class UChildActorComponent* DamagePointRef, bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PrepPoints();
	void ExecuteUbergraph_BP_JunkDamagePoints(int32 EntryPoint);
};

}

