#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x349 - 0x31D)
// BlueprintGeneratedClass BP_ShipBell.BP_ShipBell_C
class ABP_ShipBell_C : public ABP_InteractableBase_C
{
public:
	uint8                                        Pad_2E55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Bell;                                              // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Shipbell2;                                         // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       InteractingCharRefLocal;                           // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Ringed;                                            // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_ShipBell_C* GetDefaultObj();

	void RingBell(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void OnNotifyEnd_A39EE6E94569F47DA32128A3B9B74B90(class FName NotifyName);
	void OnNotifyBegin_A39EE6E94569F47DA32128A3B9B74B90(class FName NotifyName);
	void OnInterrupted_A39EE6E94569F47DA32128A3B9B74B90(class FName NotifyName);
	void OnBlendOut_A39EE6E94569F47DA32128A3B9B74B90(class FName NotifyName);
	void OnCompleted_A39EE6E94569F47DA32128A3B9B74B90(class FName NotifyName);
	void OnNotifyEnd_70B16DF84B17F8E9962B3FA17C34CE70(class FName NotifyName);
	void OnNotifyBegin_70B16DF84B17F8E9962B3FA17C34CE70(class FName NotifyName);
	void OnInterrupted_70B16DF84B17F8E9962B3FA17C34CE70(class FName NotifyName);
	void OnBlendOut_70B16DF84B17F8E9962B3FA17C34CE70(class FName NotifyName);
	void OnCompleted_70B16DF84B17F8E9962B3FA17C34CE70(class FName NotifyName);
	void S_Activate();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void MC_Ring();
	void PlayBellAnimation();
	void DoSomething();
	void MC_DoSomething();
	void ExecuteUbergraph_BP_ShipBell(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName Temp_name_Variable_1, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABP_Character_C* K2Node_Event_LocalCharacterRef, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


