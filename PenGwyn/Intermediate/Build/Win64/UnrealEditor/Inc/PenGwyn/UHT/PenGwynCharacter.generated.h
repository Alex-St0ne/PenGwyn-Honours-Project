// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PenGwynCharacter.h"

#ifdef PENGWYN_PenGwynCharacter_generated_h
#error "PenGwynCharacter.generated.h already included, missing '#pragma once' in PenGwynCharacter.h"
#endif
#define PENGWYN_PenGwynCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APenGwynCharacter ********************************************************
PENGWYN_API UClass* Z_Construct_UClass_APenGwynCharacter_NoRegister();

#define FID_PenGwyn_Source_PenGwyn_PenGwynCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPenGwynCharacter(); \
	friend struct Z_Construct_UClass_APenGwynCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PENGWYN_API UClass* Z_Construct_UClass_APenGwynCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(APenGwynCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PenGwyn"), Z_Construct_UClass_APenGwynCharacter_NoRegister) \
	DECLARE_SERIALIZER(APenGwynCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<APenGwynCharacter*>(this); }


#define FID_PenGwyn_Source_PenGwyn_PenGwynCharacter_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APenGwynCharacter(APenGwynCharacter&&) = delete; \
	APenGwynCharacter(const APenGwynCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APenGwynCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APenGwynCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APenGwynCharacter) \
	NO_API virtual ~APenGwynCharacter();


#define FID_PenGwyn_Source_PenGwyn_PenGwynCharacter_h_22_PROLOG
#define FID_PenGwyn_Source_PenGwyn_PenGwynCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PenGwyn_Source_PenGwyn_PenGwynCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_PenGwyn_Source_PenGwyn_PenGwynCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APenGwynCharacter;

// ********** End Class APenGwynCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PenGwyn_Source_PenGwyn_PenGwynCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
