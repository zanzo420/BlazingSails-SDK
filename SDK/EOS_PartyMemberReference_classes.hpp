#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A0 (0x1C8 - 0x28)
// BlueprintGeneratedClass EOS_PartyMemberReference.EOS_PartyMemberReference_C
class UEOS_PartyMemberReference_C : public UObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEOS_GameInstance_C*                   EOS_Instance;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Local_Player_ID;                                   // 0x38(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UBlueprintPartyMember*                 Party_Member;                                      // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Unique_Net_ID;                                     // 0x68(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UEOS_Party_Member_Replicated_Attribute_C* Name_Sync;                                         // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_Party_Member_Replicated_Attribute_C* Primary_Account_ID_Sync;                           // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_Party_Member_Replicated_Attribute_C* Ready_State_Sync;                                  // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_Party_Member_Replicated_Attribute_C* Curse_State_Sync;                                  // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_Party_Member_Replicated_Attribute_C* Ship_Cosmetics_Sync;                               // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_Party_Member_Replicated_Attribute_C* Player_Cosmetics_Sync;                             // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_Party_Member_Replicated_Attribute_C* Level_Sync;                                        // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_Party_Member_Replicated_Attribute_C* Restricted_Sync;                                   // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ShipCustomisations                Ship_Cosmetics;                                    // 0xD0(0x74)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_28F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_PlayerCustomisation               Player_Cosmetics;                                  // 0x148(0x6C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_Party_Member_Replicated_Attribute_C* Steam_Token_Sync;                                  // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_Party_Member_Replicated_Attribute_C* Epic_Token_Sync;                                   // 0x1C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEOS_PartyMemberReference_C* GetDefaultObj();

	void Set_Epic_Token(const class FString& Token);
	void Set_Steam_Token(const class FString& Token);
	void Set_Restricted(bool Restricted);
	void Set_Player_Level(int32 Level);
	void Set_Player_Cosmetics(const struct FST_PlayerCustomisation& Player_Cosmetics, const class FString& CallFunc_StructToJsonObjectStringV2_OutJsonString, bool CallFunc_StructToJsonObjectStringV2_ReturnValue);
	void Set_Ship_Cosmetics(const struct FST_ShipCustomisations& Ship_Cosmetics, const class FString& CallFunc_StructToJsonObjectStringV2_OutJsonString, bool CallFunc_StructToJsonObjectStringV2_ReturnValue);
	void Set_All_Atributes(const class FString& Name, const class FString& Primary_Acount_ID, bool Ready_State, bool Curse_State, const struct FST_ShipCustomisations& Ship_Cosmetics, const struct FST_PlayerCustomisation& Player_Cosmetics, int32 Level, bool Restricted, const class FString& Steam_Token, const class FString& Epic_Token);
	void Request_Existing_Attributes();
	void Player_Cosmetics_Updated(int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool, const struct FST_PlayerCustomisation& CallFunc_JsonStringToStructV2_Struct, bool CallFunc_JsonStringToStructV2_ReturnValue);
	void Ship_Cosmetics_Updated(int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool, const struct FST_ShipCustomisations& CallFunc_JsonStringToStructV2_Struct, bool CallFunc_JsonStringToStructV2_ReturnValue);
	void Get_Ready(bool* Ready, int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool);
	void Set_Ready(bool Ready);
	void Create_Attributes(uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, uint8 CallFunc_MakeLiteralByte_ReturnValue_4, uint8 CallFunc_MakeLiteralByte_ReturnValue_5, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_6, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_2, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_7, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_4, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_5, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_6, uint8 CallFunc_MakeLiteralByte_ReturnValue_8, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_7, uint8 CallFunc_MakeLiteralByte_ReturnValue_9, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_8, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_9);
	void Get_User_ID(struct FUniqueNetIdRepl* User_ID);
	void ToString(class FString* Value, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue);
	void Initialize();
	void ExecuteUbergraph_EOS_PartyMemberReference(int32 EntryPoint);
};

}


