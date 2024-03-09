#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass CommandPingFunctions.CommandPingFunctions_C
class UCommandPingFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCommandPingFunctions_C* GetDefaultObj();

	void GetPingEnemyShipInfo(class AActor* PingedShip, class UObject* __WorldContext, struct FST_CommandPingInfo* Info, const struct FST_CommandPingInfo& PingInfo, bool Temp_bool_Variable, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base, bool K2Node_DynamicCast_bSuccess, float Temp_float_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float Temp_float_Variable_1, float K2Node_Select_Default, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void GetPingRightCannonsInfo(class ABP_BoatMeshBase_C* ShipRef, bool MirrorIcon, class UObject* __WorldContext, struct FST_CommandPingInfo* Info, TArray<class AActor*>* ToPingActors, const TArray<class AActor*>& Cannons, const struct FST_CommandPingInfo& PingInfo, int32 Temp_int_Array_Index_Variable, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UChildActorComponent* K2Node_DynamicCast_AsChild_Actor_Component, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void GetPingLeftCannonsInfo(class ABP_BoatMeshBase_C* ShipRef, bool MirrorIcon, class UObject* __WorldContext, struct FST_CommandPingInfo* Info, TArray<class AActor*>* ToPingActors, const TArray<class AActor*>& Cannons, const struct FST_CommandPingInfo& PingInfo, int32 Temp_int_Array_Index_Variable, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UChildActorComponent* K2Node_DynamicCast_AsChild_Actor_Component, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void GetPingCapstanInfo(class AActor* PingedActor, class ABP_BoatMeshBase_C* ShipRef, class UObject* __WorldContext, struct FST_CommandPingInfo* Info, const struct FST_CommandPingInfo& PingInfo, class ABP_CapstanSloop_C* K2Node_DynamicCast_AsBP_Capstan_Sloop, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetPingSailsInfo(class ABP_BoatMeshBase_C* ShipRef, class UObject* __WorldContext, struct FST_CommandPingInfo* Info, TArray<class AActor*>* ToPingActors, TArray<struct FVector>* ExtraOffsets, const TArray<struct FVector>& Offsets, const struct FST_CommandPingInfo& PingInfo, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class ABP_Brig_MastBase_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void GetPingRepairInfo(class ABP_BoatMeshBase_C* ShipRef, class UObject* __WorldContext, struct FST_CommandPingInfo* PumpInfo, struct FST_CommandPingInfo* BarrelInfo, const struct FST_CommandPingInfo& BarrelPingInfo, const struct FST_CommandPingInfo& PumpPingInfo, TArray<class ABP_WoodBarrel_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class ABP_WaterPump_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, class ABP_WaterPump_C* CallFunc_Array_Get_Item, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, class ABP_WoodBarrel_C* CallFunc_Array_Get_Item_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void MakeSlateBrushForCommandPing(class UObject* Image, class UObject* __WorldContext, struct FSlateBrush* SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void PrintBadCommandPing(bool ObjectNotFound, class UObject* __WorldContext);
	void GetPingCannonInfo(class AActor* PingedActor, bool FlipIcon, class UObject* __WorldContext, struct FST_CommandPingInfo* Info, const struct FST_CommandPingInfo& PingInfo, const struct FSlateBrush& CallFunc_MakeSlateBrushForCommandPing_SlateBrush, const struct FSlateBrush& CallFunc_MakeSlateBrushForCommandPing_SlateBrush_1, class ABP_VehicleCannon_C* K2Node_DynamicCast_AsBP_Vehicle_Cannon, bool K2Node_DynamicCast_bSuccess, class ABP_VehicleSwivelCannon_C* K2Node_DynamicCast_AsBP_Vehicle_Swivel_Cannon, bool K2Node_DynamicCast_bSuccess_1, class ABP_VehicleGalleonCannon_C* K2Node_DynamicCast_AsBP_Vehicle_Galleon_Cannon, bool K2Node_DynamicCast_bSuccess_2, class ABP_VehicleMortar_C* K2Node_DynamicCast_AsBP_Vehicle_Mortar, bool K2Node_DynamicCast_bSuccess_3);
	void GetPingSteeringWheelInfo(class AActor* PingedActor, class ABP_BoatMeshBase_C* ShipRef, class UObject* __WorldContext, struct FST_CommandPingInfo* Info, const struct FST_CommandPingInfo& PingInfo, class ABP_VehicleSteeringWheel_C* K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

}


