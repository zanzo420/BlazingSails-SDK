#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass SG_Banlist.SG_Banlist_C
class USG_Banlist_C : public USaveGame
{
public:
	TArray<struct FST_BanListEntry_new>          BannedPlayerList;                                  // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class USG_Banlist_C* GetDefaultObj();

};

}


