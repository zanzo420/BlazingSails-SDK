#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass UI_Weapon.UI_Weapon_C
class UUI_Weapon_C : public UUserWidget
{
public:
	class UProgressBar*                          ProgressBar_121;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_WeaponBase_C*                      WeaponRef;                                         // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Weapon_C* GetDefaultObj();

	enum class ESlateVisibility SetReloadingVisbility(bool CallFunc_IsValid_ReturnValue, class ABP_WeaponRangedBase_C* K2Node_DynamicCast_AsBP_Weapon_Ranged_Base, bool K2Node_DynamicCast_bSuccess);
	float SetReloadingPercent(class ABP_WeaponRangedBase_C* K2Node_DynamicCast_AsBP_Weapon_Ranged_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
};

}


