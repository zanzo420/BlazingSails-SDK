#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x440 - 0x42A)
// BlueprintGeneratedClass BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C
class ABP_ProjectilePoisonArrow_C : public ABP_ProjectileBase_C
{
public:
	uint8                                        Pad_1B7A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_FlamingArrowTip;                                 // 0x438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ProjectilePoisonArrow_C* GetDefaultObj();

	void PostHit(bool ForceKilled_);
	void PostPlayerHit(class ABP_Character_C* HitPlayer, class ABP_Controller_C* Attacker);
	void ExecuteUbergraph_BP_ProjectilePoisonArrow(int32 EntryPoint, bool K2Node_Event_ForceKilled_, class ABP_Character_C* K2Node_Event_HitPlayer, class ABP_Controller_C* K2Node_Event_Attacker, class AAlpha_PlayerState_C* K2Node_DynamicCast_AsAlpha_Player_State, bool K2Node_DynamicCast_bSuccess, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Compare_Teams_Is_Same_Team);
};

}


