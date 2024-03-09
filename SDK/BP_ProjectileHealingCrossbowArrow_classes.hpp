#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x22 (0x44C - 0x42A)
// BlueprintGeneratedClass BP_ProjectileHealingCrossbowArrow.BP_ProjectileHealingCrossbowArrow_C
class ABP_ProjectileHealingCrossbowArrow_C : public ABP_ProjectileBase_C
{
public:
	uint8                                        Pad_3C34[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_HealingSmoke;                                    // 0x438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        HealAmount;                                        // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealDuration;                                      // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Direct_Health_Amount;                              // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ProjectileHealingCrossbowArrow_C* GetDefaultObj();

	void PostHit(bool ForceKilled_);
	void PostPlayerHit(class ABP_Character_C* HitPlayer, class ABP_Controller_C* Attacker);
	void PostCharacterHit();
	void ExecuteUbergraph_BP_ProjectileHealingCrossbowArrow(int32 EntryPoint, bool K2Node_Event_ForceKilled_, class ABP_Character_C* K2Node_Event_HitPlayer, class ABP_Controller_C* K2Node_Event_Attacker);
};

}


