// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PenGwyn/PenGwynGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePenGwynGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PENGWYN_API UClass* Z_Construct_UClass_APenGwynGameMode();
PENGWYN_API UClass* Z_Construct_UClass_APenGwynGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PenGwyn();
// End Cross Module References

// Begin Class APenGwynGameMode
void APenGwynGameMode::StaticRegisterNativesAPenGwynGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APenGwynGameMode);
UClass* Z_Construct_UClass_APenGwynGameMode_NoRegister()
{
	return APenGwynGameMode::StaticClass();
}
struct Z_Construct_UClass_APenGwynGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PenGwynGameMode.h" },
		{ "ModuleRelativePath", "PenGwynGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APenGwynGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APenGwynGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PenGwyn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APenGwynGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APenGwynGameMode_Statics::ClassParams = {
	&APenGwynGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APenGwynGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APenGwynGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APenGwynGameMode()
{
	if (!Z_Registration_Info_UClass_APenGwynGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APenGwynGameMode.OuterSingleton, Z_Construct_UClass_APenGwynGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APenGwynGameMode.OuterSingleton;
}
template<> PENGWYN_API UClass* StaticClass<APenGwynGameMode>()
{
	return APenGwynGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APenGwynGameMode);
APenGwynGameMode::~APenGwynGameMode() {}
// End Class APenGwynGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_temp_honours_PenGwyn_Honours_Project_PenGwyn_Source_PenGwyn_PenGwynGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APenGwynGameMode, APenGwynGameMode::StaticClass, TEXT("APenGwynGameMode"), &Z_Registration_Info_UClass_APenGwynGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APenGwynGameMode), 575438260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_temp_honours_PenGwyn_Honours_Project_PenGwyn_Source_PenGwyn_PenGwynGameMode_h_53170049(TEXT("/Script/PenGwyn"),
	Z_CompiledInDeferFile_FID_temp_honours_PenGwyn_Honours_Project_PenGwyn_Source_PenGwyn_PenGwynGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_temp_honours_PenGwyn_Honours_Project_PenGwyn_Source_PenGwyn_PenGwynGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
