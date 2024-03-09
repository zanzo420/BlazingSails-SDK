#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x598 - 0x570)
// BlueprintGeneratedClass EOS_Controller.EOS_Controller_C
class AEOS_Controller_C : public ACustomController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioCaptureComponent*                AudioCapture;                                      // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FString                                UserName;                                          // 0x580(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class AEOS_Voice_Chat_Service_C*             Voice_Chat_Services;                               // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AEOS_Controller_C* GetDefaultObj();

	void OnRep_Username();
	void On_Player_Disconnected();
	void On_Player_Connected();
	void Receive_Voice_Channel_Credentials(const class FString& Channel_Name, const class FString& Channel_Credentials);
	void Continue_After_Login(bool Succsessful);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_EOS_Controller(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_Channel_Name, const class FString& K2Node_CustomEvent_Channel_Credentials, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool K2Node_CustomEvent_Succsessful, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AEOS_Voice_Chat_Service_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


