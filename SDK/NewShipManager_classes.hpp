#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x350 - 0x220)
// BlueprintGeneratedClass NewShipManager.NewShipManager_C
class ANewShipManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTeam_Crew_Ship_Member_State_C*        Team_Crew_Ship_Member_State;                       // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ANewTeamManager_C*                     Team_Manager_Ref;                                  // 0x238(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ANewCrewManager_C*                     Crew_Manager_Ref;                                  // 0x240(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class E_ShipTypes                       Ship_Type;                                         // 0x248(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_BoatMeshBase_C*                    Ship_Ref;                                          // 0x250(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AAlpha_PlayerState_C*>          Crew_Members;                                      // 0x258(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         Spawned_Ship_Mesh;                                 // 0x268(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            On_Ship_Sunk;                                      // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Ship_Spawned;                                   // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Ship_Change_Type;                               // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Ship_Despawn;                                   // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Crew_Updated;                                   // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Defeated;                                          // 0x2C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            On_Ship_Defeated;                                  // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FST_ShipCustomisations                Set_Ship_Customization;                            // 0x2D8(0x74)(Edit, BlueprintVisible, Net, HasGetValueTypeHash)
	uint8                                        Pad_1B05[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANewShipManager_C* GetDefaultObj();

	void On_Ship_Has_Sunk();
	void Bind_to_Ship_Events(class ABP_BoatMeshBase_C* Ship, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Destroy_Ship();
	void GetShipClass(enum class E_ShipTypes ShipType, class UClass** ShipClass, bool K2Node_SwitchEnum_CmpSuccess);
	void Spawn_Ship(class ABP_BoatSpawn_C* Spawn_Point);
	void Change_Ship_Type(enum class E_ShipTypes New_Ship_Type);
	void ExecuteUbergraph_NewShipManager(int32 EntryPoint, class ABP_BoatSpawn_C* K2Node_CustomEvent_Spawn_Point, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class E_ShipTypes K2Node_CustomEvent_New_Ship_Type, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UClass* CallFunc_GetShipClass_ShipClass, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_BoatMeshBase_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Output);
	void On_Ship_Defeated__DelegateSignature(class ANewShipManager_C* Ship);
	void On_Crew_Updated__DelegateSignature();
	void On_Ship_Despawn__DelegateSignature();
	void On_Ship_Change_Type__DelegateSignature(enum class E_ShipTypes New_Ship_Type);
	void On_Ship_Spawned__DelegateSignature();
	void On_Ship_Sunk__DelegateSignature(int32 Ship_ID);
};

}


