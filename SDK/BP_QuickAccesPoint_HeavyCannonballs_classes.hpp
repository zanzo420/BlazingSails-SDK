#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x398 - 0x388)
// BlueprintGeneratedClass BP_QuickAccesPoint_HeavyCannonballs.BP_QuickAccesPoint_HeavyCannonballs_C
class ABP_QuickAccesPoint_HeavyCannonballs_C : public ABP_QuickAccesPointBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_QuickAccesPoint_HeavyCannonballs_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void GiveResources();
	void AmountRepEvent();
	void ExecuteUbergraph_BP_QuickAccesPoint_HeavyCannonballs(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUI_QuickAccessAmount_C* K2Node_DynamicCast_AsUI_Quick_Access_Amount, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


