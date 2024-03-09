#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass EOS_PartyReference.EOS_PartyReference_C
class UEOS_PartyReference_C : public UObject
{
public:
	class UPartyId*                              Party_ID;                                          // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEOS_PartyReference_C* GetDefaultObj();

	void ToString(class FString* Party_ID, const class FString& CallFunc_ToDebugString_ReturnValue);
};

}


