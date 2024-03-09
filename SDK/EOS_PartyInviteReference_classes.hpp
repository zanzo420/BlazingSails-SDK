#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass EOS_PartyInviteReference.EOS_PartyInviteReference_C
class UEOS_PartyInviteReference_C : public UObject
{
public:
	class UOnlinePartyJoinInfo*                  Party_ID;                                          // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEOS_PartyInviteReference_C* GetDefaultObj();

	void Get_Combined_ID(class FString* Combined_ID, const class FString& CallFunc_Get__Sender_Sender, const struct FUniqueNetIdRepl& CallFunc_Get__Sender_Sender_ID, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void Get__Sender(class FString* Sender, struct FUniqueNetIdRepl* Sender_ID, const class FString& CallFunc_GetSourceDisplayName_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetSourceUserId_ReturnValue);
	void ToString(class FString* Value, class UPartyId* CallFunc_GetPartyId_ReturnValue, const class FString& CallFunc_ToDebugString_ReturnValue);
};

}


