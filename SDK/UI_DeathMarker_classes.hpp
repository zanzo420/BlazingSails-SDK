#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x298 - 0x288)
// WidgetBlueprintGeneratedClass UI_DeathMarker.UI_DeathMarker_C
class UUI_DeathMarker_C : public UUI_CharacterMarker_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_57;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_DeathMarker_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_UI_DeathMarker(int32 EntryPoint);
};

}


