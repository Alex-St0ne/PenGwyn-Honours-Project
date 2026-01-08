// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AshenAttributeSet.h"

#ifdef PENGWYN_AshenAttributeSet_generated_h
#error "AshenAttributeSet.generated.h already included, missing '#pragma once' in AshenAttributeSet.h"
#endif
#define PENGWYN_AshenAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayAttributeData;

// ********** Begin Class UAshenAttributeSet *******************************************************
#define FID_PenGwyn_Source_PenGwyn_AshenAttributeSet_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Luck); \
	DECLARE_FUNCTION(execOnRep_Faith); \
	DECLARE_FUNCTION(execOnRep_Intelligence); \
	DECLARE_FUNCTION(execOnRep_Dexterity); \
	DECLARE_FUNCTION(execOnRep_Strength); \
	DECLARE_FUNCTION(execOnRep_Endurance); \
	DECLARE_FUNCTION(execOnRep_Mind); \
	DECLARE_FUNCTION(execOnRep_Vigor); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_Health);


PENGWYN_API UClass* Z_Construct_UClass_UAshenAttributeSet_NoRegister();

#define FID_PenGwyn_Source_PenGwyn_AshenAttributeSet_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAshenAttributeSet(); \
	friend struct Z_Construct_UClass_UAshenAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PENGWYN_API UClass* Z_Construct_UClass_UAshenAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UAshenAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PenGwyn"), Z_Construct_UClass_UAshenAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UAshenAttributeSet)


#define FID_PenGwyn_Source_PenGwyn_AshenAttributeSet_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAshenAttributeSet(UAshenAttributeSet&&) = delete; \
	UAshenAttributeSet(const UAshenAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAshenAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAshenAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAshenAttributeSet) \
	NO_API virtual ~UAshenAttributeSet();


#define FID_PenGwyn_Source_PenGwyn_AshenAttributeSet_h_23_PROLOG
#define FID_PenGwyn_Source_PenGwyn_AshenAttributeSet_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PenGwyn_Source_PenGwyn_AshenAttributeSet_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PenGwyn_Source_PenGwyn_AshenAttributeSet_h_26_INCLASS_NO_PURE_DECLS \
	FID_PenGwyn_Source_PenGwyn_AshenAttributeSet_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAshenAttributeSet;

// ********** End Class UAshenAttributeSet *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PenGwyn_Source_PenGwyn_AshenAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
