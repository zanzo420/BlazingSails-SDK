#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Character_Clothing.UI_Character_Clothing_C
// (None)

class UClass* UUI_Character_Clothing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Character_Clothing_C");

	return Clss;
}


// UI_Character_Clothing_C UI_Character_Clothing.Default__UI_Character_Clothing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Character_Clothing_C* UUI_Character_Clothing_C::GetDefaultObj()
{
	static class UUI_Character_Clothing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Character_Clothing_C*>(UUI_Character_Clothing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Character_Clothing.UI_Character_Clothing_C.AddToGrid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_NewEOSInventoryItem     SteamItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_SteamItemCategories   Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Secundary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_AddToGrid_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_AddClothingItem_Widget                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_AddTattoo_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_AddHairColor_Widget                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Character_Clothing_C::AddToGrid(const struct FST_NewEOSInventoryItem& SteamItem, int32 Index, enum class E_SteamItemCategories Category, int32 Rarity, bool Secundary, int32 Amount, class UUserWidget** Widget, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUserWidget* CallFunc_AddToGrid_Widget, class UUserWidget* CallFunc_AddClothingItem_Widget, class UUserWidget* CallFunc_AddTattoo_Widget, class UUserWidget* CallFunc_AddHairColor_Widget, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "AddToGrid");

	Params::UUI_Character_Clothing_C_AddToGrid_Params Parms{};

	Parms.SteamItem = SteamItem;
	Parms.Index = Index;
	Parms.Category = Category;
	Parms.Rarity = Rarity;
	Parms.Secundary = Secundary;
	Parms.Amount = Amount;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_AddToGrid_Widget = CallFunc_AddToGrid_Widget;
	Parms.CallFunc_AddClothingItem_Widget = CallFunc_AddClothingItem_Widget;
	Parms.CallFunc_AddTattoo_Widget = CallFunc_AddTattoo_Widget;
	Parms.CallFunc_AddHairColor_Widget = CallFunc_AddHairColor_Widget;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.ValidatePirateCosmetics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Character_C*             K2Node_DynamicCast_AsUI_Character                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Character_Clothing_C::ValidatePirateCosmetics(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UUI_Character_C* K2Node_DynamicCast_AsUI_Character, bool K2Node_DynamicCast_bSuccess_3, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_3, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "ValidatePirateCosmetics");

	Params::UUI_Character_Clothing_C_ValidatePirateCosmetics_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_1 = K2Node_DynamicCast_AsBP_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_2 = K2Node_DynamicCast_AsBP_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsUI_Character = K2Node_DynamicCast_AsUI_Character;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_3 = K2Node_DynamicCast_AsBP_Game_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.AddTattoo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_NewEOSInventoryItem     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Column                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Row                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Character_Tattoo_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Character_C*             K2Node_DynamicCast_AsUI_Character                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Character_Clothing_C::AddTattoo(const struct FST_NewEOSInventoryItem& Item, int32 Index, int32 Rarity, class UUserWidget** Widget, int32 Column, int32 Row, class UUI_Character_Tattoo_C* CallFunc_Create_ReturnValue, class UUI_Character_C* K2Node_DynamicCast_AsUI_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "AddTattoo");

	Params::UUI_Character_Clothing_C_AddTattoo_Params Parms{};

	Parms.Item = Item;
	Parms.Index = Index;
	Parms.Rarity = Rarity;
	Parms.Column = Column;
	Parms.Row = Row;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Character = K2Node_DynamicCast_AsUI_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.AddHairColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_NewEOSInventoryItem     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Column                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Row                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Character_HairColor_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// class UUI_Character_C*             K2Node_DynamicCast_AsUI_Character                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Character_Clothing_C::AddHairColor(const struct FST_NewEOSInventoryItem& Item, int32 Index, int32 Rarity, class UUserWidget** Widget, int32 Column, int32 Row, class UUI_Character_HairColor_C* CallFunc_Create_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UUI_Character_C* K2Node_DynamicCast_AsUI_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "AddHairColor");

	Params::UUI_Character_Clothing_C_AddHairColor_Params Parms{};

	Parms.Item = Item;
	Parms.Index = Index;
	Parms.Rarity = Rarity;
	Parms.Column = Column;
	Parms.Row = Row;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_DynamicCast_AsUI_Character = K2Node_DynamicCast_AsUI_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.AddClothingItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_NewEOSInventoryItem     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_SteamItemCategories   ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Column                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Row                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Cosmetic_Item_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_SelectObject_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetEventIcon_Icon                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Character_C*             K2Node_DynamicCast_AsUI_Character                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Character_Clothing_C::AddClothingItem(const struct FST_NewEOSInventoryItem& Item, int32 Index, enum class E_SteamItemCategories ItemCategory, int32 Rarity, class UUserWidget** Widget, int32 Column, int32 Row, const class FString& Temp_string_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUI_Cosmetic_Item_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_SelectObject_ReturnValue, class UTexture2D* CallFunc_GetEventIcon_Icon, const class FString& CallFunc_GetObjectName_ReturnValue, bool Temp_bool_Variable, class UUI_Character_C* K2Node_DynamicCast_AsUI_Character, bool K2Node_DynamicCast_bSuccess, const class FString& K2Node_Select_Default, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "AddClothingItem");

	Params::UUI_Character_Clothing_C_AddClothingItem_Params Parms{};

	Parms.Item = Item;
	Parms.Index = Index;
	Parms.ItemCategory = ItemCategory;
	Parms.Rarity = Rarity;
	Parms.Column = Column;
	Parms.Row = Row;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SelectObject_ReturnValue = CallFunc_SelectObject_ReturnValue;
	Parms.CallFunc_GetEventIcon_Icon = CallFunc_GetEventIcon_Icon;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsUI_Character = K2Node_DynamicCast_AsUI_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.RefreshClothing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_Clothing_C::RefreshClothing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "RefreshClothing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadFaces
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_Clothing_C::LoadFaces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "LoadFaces");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadHats
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_Clothing_C::LoadHats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "LoadHats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadPants
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_Clothing_C::LoadPants()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "LoadPants");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadTorsos
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_Clothing_C::LoadTorsos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "LoadTorsos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadBeards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_Clothing_C::LoadBeards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "LoadBeards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadLeftFoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_Clothing_C::LoadLeftFoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "LoadLeftFoot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadHairDyes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_Clothing_C::LoadHairDyes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "LoadHairDyes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadRightFoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_Clothing_C::LoadRightFoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "LoadRightFoot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadTattoos
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_Clothing_C::LoadTattoos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "LoadTattoos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadAllItems
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_Clothing_C::LoadAllItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "LoadAllItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadRightHand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_Clothing_C::LoadRightHand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "LoadRightHand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadLeftHand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_Clothing_C::LoadLeftHand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "LoadLeftHand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadLowerFaces
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_Clothing_C::LoadLowerFaces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "LoadLowerFaces");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.Scroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ScrollValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Character_Clothing_C::Scroll(float ScrollValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "Scroll");

	Params::UUI_Character_Clothing_C_Scroll_Params Parms{};

	Parms.ScrollValue = ScrollValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Character_Clothing_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character_Clothing.UI_Character_Clothing_C.ExecuteUbergraph_UI_Character_Clothing
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ScrollValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_MainMenuCOntroller_C*    K2Node_DynamicCast_AsBP_Main_Menu_COntroller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Character_Clothing_C::ExecuteUbergraph_UI_Character_Clothing(int32 EntryPoint, TArray<int32>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float K2Node_CustomEvent_ScrollValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, class ABP_MainMenuCOntroller_C* K2Node_DynamicCast_AsBP_Main_Menu_COntroller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsVisible_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_Clothing_C", "ExecuteUbergraph_UI_Character_Clothing");

	Params::UUI_Character_Clothing_C_ExecuteUbergraph_UI_Character_Clothing_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_ScrollValue = K2Node_CustomEvent_ScrollValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Main_Menu_COntroller = K2Node_DynamicCast_AsBP_Main_Menu_COntroller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


