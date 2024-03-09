#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x3A - 0x28)
// BlueprintGeneratedClass EOS_FriendReference.EOS_FriendReference_C
class UEOS_FriendReference_C : public UObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOnlineFriendRef*                      Friend;                                            // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsSteam;                                           // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsEOS;                                             // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UEOS_FriendReference_C* GetDefaultObj();

	void Get_Platform(class FString* Platform_Name, bool CallFunc_GetUserAttribute_Found, const class FString& CallFunc_GetUserAttribute_ReturnValue);
	struct FUniqueNetIdRepl Get_Unique_Net_Id(const struct FUniqueNetIdRepl& CallFunc_GetUserId_ReturnValue);
	void Initialize();
	void ExecuteUbergraph_EOS_FriendReference(int32 EntryPoint, const class FString& CallFunc_Get_Platform_Platform_Name, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_GetUserAttribute_Found, const class FString& CallFunc_GetUserAttribute_ReturnValue);
};

}


