// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PenGwyn/AshenAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAshenAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
PENGWYN_API UClass* Z_Construct_UClass_UAshenAttributeSet();
PENGWYN_API UClass* Z_Construct_UClass_UAshenAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_PenGwyn();
// End Cross Module References

// Begin Class UAshenAttributeSet Function OnRep_Dexterity
struct Z_Construct_UFunction_UAshenAttributeSet_OnRep_Dexterity_Statics
{
	struct AshenAttributeSet_eventOnRep_Dexterity_Parms
	{
		FGameplayAttributeData OldDexterity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldDexterity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldDexterity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Dexterity_Statics::NewProp_OldDexterity = { "OldDexterity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AshenAttributeSet_eventOnRep_Dexterity_Parms, OldDexterity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldDexterity_MetaData), NewProp_OldDexterity_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAshenAttributeSet_OnRep_Dexterity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAshenAttributeSet_OnRep_Dexterity_Statics::NewProp_OldDexterity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Dexterity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Dexterity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAshenAttributeSet, nullptr, "OnRep_Dexterity", nullptr, nullptr, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Dexterity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Dexterity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Dexterity_Statics::AshenAttributeSet_eventOnRep_Dexterity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Dexterity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAshenAttributeSet_OnRep_Dexterity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Dexterity_Statics::AshenAttributeSet_eventOnRep_Dexterity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAshenAttributeSet_OnRep_Dexterity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Dexterity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAshenAttributeSet::execOnRep_Dexterity)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDexterity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Dexterity(Z_Param_Out_OldDexterity);
	P_NATIVE_END;
}
// End Class UAshenAttributeSet Function OnRep_Dexterity

// Begin Class UAshenAttributeSet Function OnRep_Endurance
struct Z_Construct_UFunction_UAshenAttributeSet_OnRep_Endurance_Statics
{
	struct AshenAttributeSet_eventOnRep_Endurance_Parms
	{
		FGameplayAttributeData OldEndurance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldEndurance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldEndurance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Endurance_Statics::NewProp_OldEndurance = { "OldEndurance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AshenAttributeSet_eventOnRep_Endurance_Parms, OldEndurance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldEndurance_MetaData), NewProp_OldEndurance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAshenAttributeSet_OnRep_Endurance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAshenAttributeSet_OnRep_Endurance_Statics::NewProp_OldEndurance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Endurance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Endurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAshenAttributeSet, nullptr, "OnRep_Endurance", nullptr, nullptr, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Endurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Endurance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Endurance_Statics::AshenAttributeSet_eventOnRep_Endurance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Endurance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAshenAttributeSet_OnRep_Endurance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Endurance_Statics::AshenAttributeSet_eventOnRep_Endurance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAshenAttributeSet_OnRep_Endurance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Endurance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAshenAttributeSet::execOnRep_Endurance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldEndurance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Endurance(Z_Param_Out_OldEndurance);
	P_NATIVE_END;
}
// End Class UAshenAttributeSet Function OnRep_Endurance

// Begin Class UAshenAttributeSet Function OnRep_Faith
struct Z_Construct_UFunction_UAshenAttributeSet_OnRep_Faith_Statics
{
	struct AshenAttributeSet_eventOnRep_Faith_Parms
	{
		FGameplayAttributeData OldFaith;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldFaith_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldFaith;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Faith_Statics::NewProp_OldFaith = { "OldFaith", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AshenAttributeSet_eventOnRep_Faith_Parms, OldFaith), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldFaith_MetaData), NewProp_OldFaith_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAshenAttributeSet_OnRep_Faith_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAshenAttributeSet_OnRep_Faith_Statics::NewProp_OldFaith,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Faith_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Faith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAshenAttributeSet, nullptr, "OnRep_Faith", nullptr, nullptr, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Faith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Faith_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Faith_Statics::AshenAttributeSet_eventOnRep_Faith_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Faith_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAshenAttributeSet_OnRep_Faith_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Faith_Statics::AshenAttributeSet_eventOnRep_Faith_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAshenAttributeSet_OnRep_Faith()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Faith_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAshenAttributeSet::execOnRep_Faith)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldFaith);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Faith(Z_Param_Out_OldFaith);
	P_NATIVE_END;
}
// End Class UAshenAttributeSet Function OnRep_Faith

// Begin Class UAshenAttributeSet Function OnRep_Health
struct Z_Construct_UFunction_UAshenAttributeSet_OnRep_Health_Statics
{
	struct AshenAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AshenAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAshenAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAshenAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAshenAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Health_Statics::AshenAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAshenAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Health_Statics::AshenAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAshenAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAshenAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class UAshenAttributeSet Function OnRep_Health

// Begin Class UAshenAttributeSet Function OnRep_Intelligence
struct Z_Construct_UFunction_UAshenAttributeSet_OnRep_Intelligence_Statics
{
	struct AshenAttributeSet_eventOnRep_Intelligence_Parms
	{
		FGameplayAttributeData OldIntelligence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldIntelligence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldIntelligence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence = { "OldIntelligence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AshenAttributeSet_eventOnRep_Intelligence_Parms, OldIntelligence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldIntelligence_MetaData), NewProp_OldIntelligence_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAshenAttributeSet_OnRep_Intelligence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAshenAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Intelligence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Intelligence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAshenAttributeSet, nullptr, "OnRep_Intelligence", nullptr, nullptr, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Intelligence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Intelligence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Intelligence_Statics::AshenAttributeSet_eventOnRep_Intelligence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAshenAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Intelligence_Statics::AshenAttributeSet_eventOnRep_Intelligence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAshenAttributeSet_OnRep_Intelligence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Intelligence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAshenAttributeSet::execOnRep_Intelligence)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldIntelligence);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Intelligence(Z_Param_Out_OldIntelligence);
	P_NATIVE_END;
}
// End Class UAshenAttributeSet Function OnRep_Intelligence

// Begin Class UAshenAttributeSet Function OnRep_Luck
struct Z_Construct_UFunction_UAshenAttributeSet_OnRep_Luck_Statics
{
	struct AshenAttributeSet_eventOnRep_Luck_Parms
	{
		FGameplayAttributeData OldLuck;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldLuck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldLuck;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Luck_Statics::NewProp_OldLuck = { "OldLuck", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AshenAttributeSet_eventOnRep_Luck_Parms, OldLuck), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldLuck_MetaData), NewProp_OldLuck_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAshenAttributeSet_OnRep_Luck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAshenAttributeSet_OnRep_Luck_Statics::NewProp_OldLuck,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Luck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Luck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAshenAttributeSet, nullptr, "OnRep_Luck", nullptr, nullptr, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Luck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Luck_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Luck_Statics::AshenAttributeSet_eventOnRep_Luck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Luck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAshenAttributeSet_OnRep_Luck_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Luck_Statics::AshenAttributeSet_eventOnRep_Luck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAshenAttributeSet_OnRep_Luck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Luck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAshenAttributeSet::execOnRep_Luck)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldLuck);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Luck(Z_Param_Out_OldLuck);
	P_NATIVE_END;
}
// End Class UAshenAttributeSet Function OnRep_Luck

// Begin Class UAshenAttributeSet Function OnRep_Mana
struct Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mana_Statics
{
	struct AshenAttributeSet_eventOnRep_Mana_Parms
	{
		FGameplayAttributeData OldMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AshenAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMana_MetaData), NewProp_OldMana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAshenAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mana_Statics::AshenAttributeSet_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mana_Statics::AshenAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAshenAttributeSet::execOnRep_Mana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
	P_NATIVE_END;
}
// End Class UAshenAttributeSet Function OnRep_Mana

// Begin Class UAshenAttributeSet Function OnRep_Mind
struct Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mind_Statics
{
	struct AshenAttributeSet_eventOnRep_Mind_Parms
	{
		FGameplayAttributeData OldMind;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMind_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mind_Statics::NewProp_OldMind = { "OldMind", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AshenAttributeSet_eventOnRep_Mind_Parms, OldMind), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMind_MetaData), NewProp_OldMind_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mind_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mind_Statics::NewProp_OldMind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mind_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAshenAttributeSet, nullptr, "OnRep_Mind", nullptr, nullptr, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mind_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mind_Statics::AshenAttributeSet_eventOnRep_Mind_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mind_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mind_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mind_Statics::AshenAttributeSet_eventOnRep_Mind_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mind()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mind_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAshenAttributeSet::execOnRep_Mind)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMind);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Mind(Z_Param_Out_OldMind);
	P_NATIVE_END;
}
// End Class UAshenAttributeSet Function OnRep_Mind

// Begin Class UAshenAttributeSet Function OnRep_Stamina
struct Z_Construct_UFunction_UAshenAttributeSet_OnRep_Stamina_Statics
{
	struct AshenAttributeSet_eventOnRep_Stamina_Parms
	{
		FGameplayAttributeData OldStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina = { "OldStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AshenAttributeSet_eventOnRep_Stamina_Parms, OldStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldStamina_MetaData), NewProp_OldStamina_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAshenAttributeSet_OnRep_Stamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAshenAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Stamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Stamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAshenAttributeSet, nullptr, "OnRep_Stamina", nullptr, nullptr, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Stamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Stamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Stamina_Statics::AshenAttributeSet_eventOnRep_Stamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAshenAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Stamina_Statics::AshenAttributeSet_eventOnRep_Stamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAshenAttributeSet_OnRep_Stamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Stamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAshenAttributeSet::execOnRep_Stamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Stamina(Z_Param_Out_OldStamina);
	P_NATIVE_END;
}
// End Class UAshenAttributeSet Function OnRep_Stamina

// Begin Class UAshenAttributeSet Function OnRep_Strength
struct Z_Construct_UFunction_UAshenAttributeSet_OnRep_Strength_Statics
{
	struct AshenAttributeSet_eventOnRep_Strength_Parms
	{
		FGameplayAttributeData OldStrength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldStrength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength = { "OldStrength", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AshenAttributeSet_eventOnRep_Strength_Parms, OldStrength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldStrength_MetaData), NewProp_OldStrength_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAshenAttributeSet_OnRep_Strength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAshenAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Strength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Strength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAshenAttributeSet, nullptr, "OnRep_Strength", nullptr, nullptr, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Strength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Strength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Strength_Statics::AshenAttributeSet_eventOnRep_Strength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAshenAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Strength_Statics::AshenAttributeSet_eventOnRep_Strength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAshenAttributeSet_OnRep_Strength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Strength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAshenAttributeSet::execOnRep_Strength)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Strength(Z_Param_Out_OldStrength);
	P_NATIVE_END;
}
// End Class UAshenAttributeSet Function OnRep_Strength

// Begin Class UAshenAttributeSet Function OnRep_Vigor
struct Z_Construct_UFunction_UAshenAttributeSet_OnRep_Vigor_Statics
{
	struct AshenAttributeSet_eventOnRep_Vigor_Parms
	{
		FGameplayAttributeData OldVigor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldVigor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldVigor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Vigor_Statics::NewProp_OldVigor = { "OldVigor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AshenAttributeSet_eventOnRep_Vigor_Parms, OldVigor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldVigor_MetaData), NewProp_OldVigor_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAshenAttributeSet_OnRep_Vigor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAshenAttributeSet_OnRep_Vigor_Statics::NewProp_OldVigor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Vigor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAshenAttributeSet_OnRep_Vigor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAshenAttributeSet, nullptr, "OnRep_Vigor", nullptr, nullptr, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Vigor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Vigor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Vigor_Statics::AshenAttributeSet_eventOnRep_Vigor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Vigor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAshenAttributeSet_OnRep_Vigor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAshenAttributeSet_OnRep_Vigor_Statics::AshenAttributeSet_eventOnRep_Vigor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAshenAttributeSet_OnRep_Vigor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAshenAttributeSet_OnRep_Vigor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAshenAttributeSet::execOnRep_Vigor)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldVigor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Vigor(Z_Param_Out_OldVigor);
	P_NATIVE_END;
}
// End Class UAshenAttributeSet Function OnRep_Vigor

// Begin Class UAshenAttributeSet
void UAshenAttributeSet::StaticRegisterNativesUAshenAttributeSet()
{
	UClass* Class = UAshenAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Dexterity", &UAshenAttributeSet::execOnRep_Dexterity },
		{ "OnRep_Endurance", &UAshenAttributeSet::execOnRep_Endurance },
		{ "OnRep_Faith", &UAshenAttributeSet::execOnRep_Faith },
		{ "OnRep_Health", &UAshenAttributeSet::execOnRep_Health },
		{ "OnRep_Intelligence", &UAshenAttributeSet::execOnRep_Intelligence },
		{ "OnRep_Luck", &UAshenAttributeSet::execOnRep_Luck },
		{ "OnRep_Mana", &UAshenAttributeSet::execOnRep_Mana },
		{ "OnRep_Mind", &UAshenAttributeSet::execOnRep_Mind },
		{ "OnRep_Stamina", &UAshenAttributeSet::execOnRep_Stamina },
		{ "OnRep_Strength", &UAshenAttributeSet::execOnRep_Strength },
		{ "OnRep_Vigor", &UAshenAttributeSet::execOnRep_Vigor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAshenAttributeSet);
UClass* Z_Construct_UClass_UAshenAttributeSet_NoRegister()
{
	return UAshenAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UAshenAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AshenAttributeSet.h" },
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vigor_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mind_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Endurance_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dexterity_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Faith_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Luck_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AshenAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vigor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mind;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Endurance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dexterity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Intelligence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Faith;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Luck;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAshenAttributeSet_OnRep_Dexterity, "OnRep_Dexterity" }, // 3840500184
		{ &Z_Construct_UFunction_UAshenAttributeSet_OnRep_Endurance, "OnRep_Endurance" }, // 570034078
		{ &Z_Construct_UFunction_UAshenAttributeSet_OnRep_Faith, "OnRep_Faith" }, // 1257866617
		{ &Z_Construct_UFunction_UAshenAttributeSet_OnRep_Health, "OnRep_Health" }, // 2321421443
		{ &Z_Construct_UFunction_UAshenAttributeSet_OnRep_Intelligence, "OnRep_Intelligence" }, // 2156507985
		{ &Z_Construct_UFunction_UAshenAttributeSet_OnRep_Luck, "OnRep_Luck" }, // 2701015910
		{ &Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 1675085457
		{ &Z_Construct_UFunction_UAshenAttributeSet_OnRep_Mind, "OnRep_Mind" }, // 2121082150
		{ &Z_Construct_UFunction_UAshenAttributeSet_OnRep_Stamina, "OnRep_Stamina" }, // 2209762657
		{ &Z_Construct_UFunction_UAshenAttributeSet_OnRep_Strength, "OnRep_Strength" }, // 573319445
		{ &Z_Construct_UFunction_UAshenAttributeSet_OnRep_Vigor, "OnRep_Vigor" }, // 2403648635
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAshenAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAshenAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAshenAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAshenAttributeSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Vigor = { "Vigor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAshenAttributeSet, Vigor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vigor_MetaData), NewProp_Vigor_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Mind = { "Mind", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAshenAttributeSet, Mind), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mind_MetaData), NewProp_Mind_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Endurance = { "Endurance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAshenAttributeSet, Endurance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Endurance_MetaData), NewProp_Endurance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAshenAttributeSet, Strength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Dexterity = { "Dexterity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAshenAttributeSet, Dexterity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dexterity_MetaData), NewProp_Dexterity_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Intelligence = { "Intelligence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAshenAttributeSet, Intelligence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intelligence_MetaData), NewProp_Intelligence_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Faith = { "Faith", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAshenAttributeSet, Faith), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Faith_MetaData), NewProp_Faith_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Luck = { "Luck", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAshenAttributeSet, Luck), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Luck_MetaData), NewProp_Luck_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAshenAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Vigor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Mind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Endurance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Dexterity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Intelligence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Faith,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAshenAttributeSet_Statics::NewProp_Luck,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAshenAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAshenAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_PenGwyn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAshenAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAshenAttributeSet_Statics::ClassParams = {
	&UAshenAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAshenAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAshenAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAshenAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAshenAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAshenAttributeSet()
{
	if (!Z_Registration_Info_UClass_UAshenAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAshenAttributeSet.OuterSingleton, Z_Construct_UClass_UAshenAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAshenAttributeSet.OuterSingleton;
}
template<> PENGWYN_API UClass* StaticClass<UAshenAttributeSet>()
{
	return UAshenAttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAshenAttributeSet);
UAshenAttributeSet::~UAshenAttributeSet() {}
// End Class UAshenAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_temp_honours_PenGwyn_Honours_Project_PenGwyn_Source_PenGwyn_AshenAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAshenAttributeSet, UAshenAttributeSet::StaticClass, TEXT("UAshenAttributeSet"), &Z_Registration_Info_UClass_UAshenAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAshenAttributeSet), 2184822312U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_temp_honours_PenGwyn_Honours_Project_PenGwyn_Source_PenGwyn_AshenAttributeSet_h_2117979322(TEXT("/Script/PenGwyn"),
	Z_CompiledInDeferFile_FID_temp_honours_PenGwyn_Honours_Project_PenGwyn_Source_PenGwyn_AshenAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_temp_honours_PenGwyn_Honours_Project_PenGwyn_Source_PenGwyn_AshenAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
