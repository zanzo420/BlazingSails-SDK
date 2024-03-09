#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6A (0x494 - 0x42A)
// BlueprintGeneratedClass BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C
class ABP_ProjectileCannonballBase_C : public ABP_ProjectileBase_C
{
public:
	uint8                                        Pad_3C28[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  ShortTrail;                                        // 0x438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio;                                             // 0x440(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        ShipDamage;                                        // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ArmorPlateDamage;                                  // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SailDamage;                                        // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_DamageType                      HullDamageSize;                                    // 0x454(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C29[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                AOE;                                               // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanPlayFly;                                        // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_Character_C*>               OverlappedCharacters;                              // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                PreviousHitActor;                                  // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       SailDamageParticleEffect;                          // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            TravelSound;                                       // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DamageMultiplier;                                  // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ProjectileCannonballBase_C* GetDefaultObj();

	void DamageShip(class ABP_BoatMeshBase_C* ShipRef, enum class E_GameModes Temp_byte_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, bool CallFunc_IsMyTeamShip_MyShip, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class ABP_AOEBase_C* CallFunc_SpawnAOE_AOEActorRef, int32 CallFunc_GetFinalDamageNumbers_DamageRounded, int32 CallFunc_Clamp_ReturnValue, int32 K2Node_Select_Default);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void PostHit(bool ForceKilled_);
	void ExecuteUbergraph_BP_ProjectileCannonballBase(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool K2Node_Event_ForceKilled_, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base, bool K2Node_DynamicCast_bSuccess, class ABP_Brig_MastBase_C* K2Node_DynamicCast_AsBP_Brig_Mast_Base, bool K2Node_DynamicCast_bSuccess_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class ABP_AOEBase_C* CallFunc_SpawnAOE_AOEActorRef, class ABP_VehicleCannon_C* K2Node_DynamicCast_AsBP_Vehicle_Cannon, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Compare_Teams_Is_Same_Team, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_Compare_Teams_Is_Same_Team_1, bool CallFunc_Compare_Teams_Is_Same_Team_2);
};

}


