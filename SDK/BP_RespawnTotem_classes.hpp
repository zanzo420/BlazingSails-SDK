#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x308 - 0x220)
// BlueprintGeneratedClass BP_RespawnTotem.BP_RespawnTotem_C
class ABP_RespawnTotem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  PointLight;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       One0__Magical_Elven_Outpost_LowerQuality;          // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       SpawnLocation;                                     // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  TotemRange;                                        // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_TotemArea;                                       // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  AztecPlate;                                        // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              TotemRangeMaterialInstanceRef;                     // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColorShip;                                         // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Icon;                                              // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              AztecPlateMaterialInstanceRef;                     // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_RespawnTotem_C*                    TeleportLocation;                                  // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShipTotem;                                         // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_RespawnTotem_C*>            SameIslandShipTotems;                              // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	float                                        Intensity;                                         // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_TeleportType                    Enum;                                              // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorTropical;                                     // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColorTemple;                                       // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColorTrident;                                      // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColorDefault;                                      // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColorKrakenKeep;                                   // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_RespawnTotem_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void Refresh();
	void ReceiveBeginPlay();
	void Teleport(class ABP_Character_C* Character);
	void ExecuteUbergraph_BP_RespawnTotem(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_3, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4, const struct FTransform& CallFunc_MakeTransform_ReturnValue_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_6, class UAudioComponent* CallFunc_AddComponent_ReturnValue_5, class UAudioComponent* CallFunc_AddComponent_ReturnValue_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue_7, const struct FTransform& CallFunc_MakeTransform_ReturnValue_8, class UAudioComponent* CallFunc_AddComponent_ReturnValue_7, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_8, const struct FTransform& CallFunc_MakeTransform_ReturnValue_9, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_9, bool CallFunc_SetStaticMesh_ReturnValue_5, bool CallFunc_SetStaticMesh_ReturnValue_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue_10, class UAudioComponent* CallFunc_AddComponent_ReturnValue_10, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_11, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, bool CallFunc_SetStaticMesh_ReturnValue_7, bool CallFunc_SetStaticMesh_ReturnValue_8, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_12, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult_1, bool CallFunc_SetStaticMesh_ReturnValue_9, bool CallFunc_SetStaticMesh_ReturnValue_10, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_2, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_13, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult_2, bool CallFunc_SetStaticMesh_ReturnValue_11, bool CallFunc_SetStaticMesh_ReturnValue_12, float K2Node_Event_DeltaSeconds, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_11, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_14, bool CallFunc_SetStaticMesh_ReturnValue_13, bool CallFunc_SetStaticMesh_ReturnValue_14, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_3, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_15, const struct FTransform& CallFunc_MakeTransform_ReturnValue_12, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_16, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult_3, bool CallFunc_SetStaticMesh_ReturnValue_15, bool CallFunc_SetStaticMesh_ReturnValue_16, class ABP_Character_C* K2Node_CustomEvent_Character, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class ABP_RespawnTotem_C* CallFunc_Array_Get_Item, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
};

}


