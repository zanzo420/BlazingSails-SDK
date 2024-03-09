#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x318 - 0x310)
// BlueprintGeneratedClass BP_BombvesselDamagePoints.BP_BombvesselDamagePoints_C
class ABP_BombvesselDamagePoints_C : public ABP_BrigantineDamagePoints_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_BombvesselDamagePoints_C* GetDefaultObj();

	void DestroyUnwantedDamagePoint(class UChildActorComponent* DamagePointRef, bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PrepPoints();
	void ExecuteUbergraph_BP_BombvesselDamagePoints(int32 EntryPoint);
};

}


