#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x3E1 - 0x398)
// BlueprintGeneratedClass Alpha_PlayerState.Alpha_PlayerState_C
class AAlpha_PlayerState_C : public AEOS_PlayerState_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCustomization_Member_State_C*         Customization_Member_State;                        // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCombat_Member_State_C*                Combat_Member_State;                               // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTeam_Crew_Ship_Member_State_C*        Team_Crew_Ship_Member_State;                       // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ANewTeamManager_C*                     Team_Manager;                                      // 0x3B8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANewCrewManager_C*                     Crew_Manager;                                      // 0x3C0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANewShipManager_C*                     Ship_Manager;                                      // 0x3C8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDead;                                            // 0x3D0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAlpha_PlayerController_C*             ControllerRef;                                     // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Clean_Leave;                                       // 0x3E0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AAlpha_PlayerState_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void S_Set_Clean_Leave();
	void ExecuteUbergraph_Alpha_PlayerState(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AAlpha_PlayerController_C* K2Node_DynamicCast_AsAlpha_Player_Controller, bool K2Node_DynamicCast_bSuccess);
};

}


