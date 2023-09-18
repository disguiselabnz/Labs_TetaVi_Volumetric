// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Labs_TetasVolumetric/Labs_TetasVolumetricGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLabs_TetasVolumetricGameMode() {}
// Cross Module References
	LABS_TETASVOLUMETRIC_API UClass* Z_Construct_UClass_ALabs_TetasVolumetricGameMode_NoRegister();
	LABS_TETASVOLUMETRIC_API UClass* Z_Construct_UClass_ALabs_TetasVolumetricGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Labs_TetasVolumetric();
// End Cross Module References
	void ALabs_TetasVolumetricGameMode::StaticRegisterNativesALabs_TetasVolumetricGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALabs_TetasVolumetricGameMode);
	UClass* Z_Construct_UClass_ALabs_TetasVolumetricGameMode_NoRegister()
	{
		return ALabs_TetasVolumetricGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALabs_TetasVolumetricGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALabs_TetasVolumetricGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Labs_TetasVolumetric,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALabs_TetasVolumetricGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Labs_TetasVolumetricGameMode.h" },
		{ "ModuleRelativePath", "Labs_TetasVolumetricGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALabs_TetasVolumetricGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALabs_TetasVolumetricGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALabs_TetasVolumetricGameMode_Statics::ClassParams = {
		&ALabs_TetasVolumetricGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALabs_TetasVolumetricGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALabs_TetasVolumetricGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALabs_TetasVolumetricGameMode()
	{
		if (!Z_Registration_Info_UClass_ALabs_TetasVolumetricGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALabs_TetasVolumetricGameMode.OuterSingleton, Z_Construct_UClass_ALabs_TetasVolumetricGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALabs_TetasVolumetricGameMode.OuterSingleton;
	}
	template<> LABS_TETASVOLUMETRIC_API UClass* StaticClass<ALabs_TetasVolumetricGameMode>()
	{
		return ALabs_TetasVolumetricGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALabs_TetasVolumetricGameMode);
	struct Z_CompiledInDeferFile_FID_Labs_TetasVolumetric_Source_Labs_TetasVolumetric_Labs_TetasVolumetricGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Labs_TetasVolumetric_Source_Labs_TetasVolumetric_Labs_TetasVolumetricGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALabs_TetasVolumetricGameMode, ALabs_TetasVolumetricGameMode::StaticClass, TEXT("ALabs_TetasVolumetricGameMode"), &Z_Registration_Info_UClass_ALabs_TetasVolumetricGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALabs_TetasVolumetricGameMode), 1469146571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Labs_TetasVolumetric_Source_Labs_TetasVolumetric_Labs_TetasVolumetricGameMode_h_1758364771(TEXT("/Script/Labs_TetasVolumetric"),
		Z_CompiledInDeferFile_FID_Labs_TetasVolumetric_Source_Labs_TetasVolumetric_Labs_TetasVolumetricGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Labs_TetasVolumetric_Source_Labs_TetasVolumetric_Labs_TetasVolumetricGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
