#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x318 - 0x310)
// BlueprintGeneratedClass BP_DuoShipDamagePoints.BP_DuoShipDamagePoints_C
class ABP_DuoShipDamagePoints_C : public ABP_BrigantineDamagePoints_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_DuoShipDamagePoints_C* GetDefaultObj();

	void DestroyUnwantedDamagePoint(class UChildActorComponent* DamagePointRef, bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PrepPoints();
	void ExecuteUbergraph_BP_DuoShipDamagePoints(int32 EntryPoint);
};

}


