// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThisKindaWorks/ThisKindaWorksPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThisKindaWorksPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
THISKINDAWORKS_API UClass* Z_Construct_UClass_AThisKindaWorksPlayerController();
THISKINDAWORKS_API UClass* Z_Construct_UClass_AThisKindaWorksPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThisKindaWorks();
// End Cross Module References

// Begin Class AThisKindaWorksPlayerController
void AThisKindaWorksPlayerController::StaticRegisterNativesAThisKindaWorksPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThisKindaWorksPlayerController);
UClass* Z_Construct_UClass_AThisKindaWorksPlayerController_NoRegister()
{
	return AThisKindaWorksPlayerController::StaticClass();
}
struct Z_Construct_UClass_AThisKindaWorksPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ThisKindaWorksPlayerController.h" },
		{ "ModuleRelativePath", "ThisKindaWorksPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "ThisKindaWorksPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThisKindaWorksPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThisKindaWorksPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThisKindaWorksPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThisKindaWorksPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThisKindaWorksPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThisKindaWorksPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThisKindaWorksPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ThisKindaWorks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThisKindaWorksPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThisKindaWorksPlayerController_Statics::ClassParams = {
	&AThisKindaWorksPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AThisKindaWorksPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AThisKindaWorksPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThisKindaWorksPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AThisKindaWorksPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThisKindaWorksPlayerController()
{
	if (!Z_Registration_Info_UClass_AThisKindaWorksPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThisKindaWorksPlayerController.OuterSingleton, Z_Construct_UClass_AThisKindaWorksPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThisKindaWorksPlayerController.OuterSingleton;
}
template<> THISKINDAWORKS_API UClass* StaticClass<AThisKindaWorksPlayerController>()
{
	return AThisKindaWorksPlayerController::StaticClass();
}
AThisKindaWorksPlayerController::AThisKindaWorksPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThisKindaWorksPlayerController);
AThisKindaWorksPlayerController::~AThisKindaWorksPlayerController() {}
// End Class AThisKindaWorksPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MarcusPersson_Documents_Unreal_School_Unreal_Engine_MentalStresser_ThisKindaWorks_Source_ThisKindaWorks_ThisKindaWorksPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThisKindaWorksPlayerController, AThisKindaWorksPlayerController::StaticClass, TEXT("AThisKindaWorksPlayerController"), &Z_Registration_Info_UClass_AThisKindaWorksPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThisKindaWorksPlayerController), 2396134926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MarcusPersson_Documents_Unreal_School_Unreal_Engine_MentalStresser_ThisKindaWorks_Source_ThisKindaWorks_ThisKindaWorksPlayerController_h_921261403(TEXT("/Script/ThisKindaWorks"),
	Z_CompiledInDeferFile_FID_Users_MarcusPersson_Documents_Unreal_School_Unreal_Engine_MentalStresser_ThisKindaWorks_Source_ThisKindaWorks_ThisKindaWorksPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MarcusPersson_Documents_Unreal_School_Unreal_Engine_MentalStresser_ThisKindaWorks_Source_ThisKindaWorks_ThisKindaWorksPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
