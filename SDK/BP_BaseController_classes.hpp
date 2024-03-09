#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x5B9 - 0x598)
// BlueprintGeneratedClass BP_BaseController.BP_BaseController_C
class ABP_BaseController_C : public ABP_COM_Controller_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x598(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInventoryTracker_C*                   InventoryTracker;                                  // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOfferChecker*                         OfferChecker;                                      // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlayerTracker_C*                      PlayerTracker;                                     // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Menu_Controller;                                   // 0x5B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_BaseController_C* GetDefaultObj();

	void OnQueryOnlineStoreOffersComplete_F6ED9309430A791E51BE4198CCC93620(bool bWasSuccessful, TArray<class FString>& OfferIds, const class FString& Error);
	void OnCallFailed_F6ED9309430A791E51BE4198CCC93620(bool bWasSuccessful, TArray<class FString>& OfferIds, const class FString& Error);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BaseController(int32 EntryPoint, bool K2Node_CustomEvent_bWasSuccessful_1, TArray<class FString>& K2Node_CustomEvent_OfferIds_1, const class FString& K2Node_CustomEvent_Error_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bWasSuccessful, TArray<class FString>& K2Node_CustomEvent_OfferIds, const class FString& K2Node_CustomEvent_Error, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& Temp_string_Variable, TArray<class FString>& Temp_string_Variable_1, bool Temp_bool_Variable, const class FString& Temp_string_Variable_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasOwnershipData_ReturnValue, const class FString& CallFunc_Get_Epic_Account_ID_Epic_ID, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UOnlineStoreV2Subsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class UOnlineStoreV2SubsystemQueryOffersByFilter* CallFunc_QueryOffersByFilter_ReturnValue, TArray<class FString>& CallFunc_ReadOwnershipData_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1, TArray<class FString>& CallFunc_Get_All_Platforms_Platforms, bool CallFunc_Array_Contains_ReturnValue);
};

}


