#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x98 - 0x28)
// BlueprintGeneratedClass EOS_Party_Repicated_Attribute.EOS_Party_Repicated_Attribute_C
class UEOS_Party_Repicated_Attribute_C : public UObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEOS_GameInstance_C*                   EOS_Instance;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                Key;                                               // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EOnlineKeyValuePairDataType_      Type;                                              // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2841[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Int;                                               // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                String;                                            // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Float;                                             // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Bool;                                              // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2842[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Non_party_int;                                     // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2843[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Non_party_string;                                  // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        Non_party_float;                                   // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Non_party_bool;                                    // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2844[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Values_Changed;                                    // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UEOS_Party_Repicated_Attribute_C* GetDefaultObj();

	void Send_Data(bool CallFunc_Is_Party_Leader_IsLeader, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP);
	void Set_Data_Internal(int32 As_Int, const class FString& As_String, float As_Float, bool As_Bool, bool NewLocalVar_3, float NewLocalVar_2, const class FString& NewLocalVar_1, int32 NewLocalVar_0, int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Is_In_Party_In_Party_);
	void Get_Data(int32* Int, class FString* String, float* Float, bool* Bool, bool CallFunc_Is_In_Party_In_Party_);
	void Set_Data(int32 As_Int, const class FString& As_String, float As_Float, bool As_Bool, bool CallFunc_Is_Party_Leader_IsLeader, bool CallFunc_Is_In_Party_In_Party_);
	void Initialize_Party_Attribute();
	void Party_Data_Received(class UReadablePartyData* Party_Data);
	void Switch_To_Non_Party(bool Success);
	void Force_Send_Data(bool Successful);
	void ExecuteUbergraph_EOS_Party_Repicated_Attribute(int32 EntryPoint, bool K2Node_CustomEvent_Success, bool K2Node_CustomEvent_Successful, bool K2Node_SwitchEnum_CmpSuccess, class UReadablePartyData* K2Node_CustomEvent_Party_Data, bool CallFunc_GetAttribute_OutFound, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Values_Changed__DelegateSignature();
};

}


