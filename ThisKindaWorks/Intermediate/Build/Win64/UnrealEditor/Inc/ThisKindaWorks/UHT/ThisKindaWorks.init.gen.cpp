// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThisKindaWorks_init() {}
	THISKINDAWORKS_API UFunction* Z_Construct_UDelegateFunction_ThisKindaWorks_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ThisKindaWorks;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ThisKindaWorks()
	{
		if (!Z_Registration_Info_UPackage__Script_ThisKindaWorks.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ThisKindaWorks_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ThisKindaWorks",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBDCE7EB4,
				0xB26331B7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ThisKindaWorks.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ThisKindaWorks.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ThisKindaWorks(Z_Construct_UPackage__Script_ThisKindaWorks, TEXT("/Script/ThisKindaWorks"), Z_Registration_Info_UPackage__Script_ThisKindaWorks, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBDCE7EB4, 0xB26331B7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
