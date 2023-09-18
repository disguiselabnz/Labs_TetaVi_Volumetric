// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetaVi_Plugin_init() {}
	TETAVI_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_ATetaVi_Player_OnStreamReady__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TetaVi_Plugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TetaVi_Plugin()
	{
		if (!Z_Registration_Info_UPackage__Script_TetaVi_Plugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ATetaVi_Player_OnStreamReady__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TetaVi_Plugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF08C0158,
				0x0C673463,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TetaVi_Plugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TetaVi_Plugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TetaVi_Plugin(Z_Construct_UPackage__Script_TetaVi_Plugin, TEXT("/Script/TetaVi_Plugin"), Z_Registration_Info_UPackage__Script_TetaVi_Plugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF08C0158, 0x0C673463));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
