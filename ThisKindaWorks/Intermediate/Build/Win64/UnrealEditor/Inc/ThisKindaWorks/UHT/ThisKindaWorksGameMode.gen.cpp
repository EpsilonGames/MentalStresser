// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThisKindaWorks/ThisKindaWorksGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThisKindaWorksGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THISKINDAWORKS_API UClass* Z_Construct_UClass_AThisKindaWorksGameMode();
THISKINDAWORKS_API UClass* Z_Construct_UClass_AThisKindaWorksGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThisKindaWorks();
// End Cross Module References

// Begin Class AThisKindaWorksGameMode
void AThisKindaWorksGameMode::StaticRegisterNativesAThisKindaWorksGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThisKindaWorksGameMode);
UClass* Z_Construct_UClass_AThisKindaWorksGameMode_NoRegister()
{
	return AThisKindaWorksGameMode::StaticClass();
}
struct Z_Construct_UClass_AThisKindaWorksGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ThisKindaWorksGameMode.h" },
		{ "ModuleRelativePath", "ThisKindaWorksGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThisKindaWorksGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AThisKindaWorksGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ThisKindaWorks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThisKindaWorksGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThisKindaWorksGameMode_Statics::ClassParams = {
	&AThisKindaWorksGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThisKindaWorksGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AThisKindaWorksGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThisKindaWorksGameMode()
{
	if (!Z_Registration_Info_UClass_AThisKindaWorksGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThisKindaWorksGameMode.OuterSingleton, Z_Construct_UClass_AThisKindaWorksGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThisKindaWorksGameMode.OuterSingleton;
}
template<> THISKINDAWORKS_API UClass* StaticClass<AThisKindaWorksGameMode>()
{
	return AThisKindaWorksGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThisKindaWorksGameMode);
AThisKindaWorksGameMode::~AThisKindaWorksGameMode() {}
// End Class AThisKindaWorksGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MarcusPersson_Documents_Unreal_School_Unreal_Engine_MentalStresser_ThisKindaWorks_Source_ThisKindaWorks_ThisKindaWorksGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThisKindaWorksGameMode, AThisKindaWorksGameMode::StaticClass, TEXT("AThisKindaWorksGameMode"), &Z_Registration_Info_UClass_AThisKindaWorksGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThisKindaWorksGameMode), 1395214868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MarcusPersson_Documents_Unreal_School_Unreal_Engine_MentalStresser_ThisKindaWorks_Source_ThisKindaWorks_ThisKindaWorksGameMode_h_3495047726(TEXT("/Script/ThisKindaWorks"),
	Z_CompiledInDeferFile_FID_Users_MarcusPersson_Documents_Unreal_School_Unreal_Engine_MentalStresser_ThisKindaWorks_Source_ThisKindaWorks_ThisKindaWorksGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MarcusPersson_Documents_Unreal_School_Unreal_Engine_MentalStresser_ThisKindaWorks_Source_ThisKindaWorks_ThisKindaWorksGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
