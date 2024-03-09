#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x538 - 0x4F0)
// BlueprintGeneratedClass Conquest_Player_State.Conquest_Player_State_C
class AConquest_Player_State_C : public ABP_PlayerState_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FST_Loadout                           Selected_Loadout;                                  // 0x4F8(0x40)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AConquest_Player_State_C* GetDefaultObj();

	void S_Set_Loadout(const struct FST_Loadout& Loadout);
	void ExecuteUbergraph_Conquest_Player_State(int32 EntryPoint, const struct FST_Loadout& K2Node_CustomEvent_Loadout);
};

}


