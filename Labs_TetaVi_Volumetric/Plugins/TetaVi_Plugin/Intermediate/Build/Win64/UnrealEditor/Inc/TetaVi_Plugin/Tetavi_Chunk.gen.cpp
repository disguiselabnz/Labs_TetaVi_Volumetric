// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetaVi_Plugin/Public/Tetavi_Chunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetavi_Chunk() {}
// Cross Module References
	TETAVI_PLUGIN_API UEnum* Z_Construct_UEnum_TetaVi_Plugin_Status();
	UPackage* Z_Construct_UPackage__Script_TetaVi_Plugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_Status;
	static UEnum* Status_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_Status.OuterSingleton)
		{
			Z_Registration_Info_UEnum_Status.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TetaVi_Plugin_Status, Z_Construct_UPackage__Script_TetaVi_Plugin(), TEXT("Status"));
		}
		return Z_Registration_Info_UEnum_Status.OuterSingleton;
	}
	template<> TETAVI_PLUGIN_API UEnum* StaticEnum<Status>()
	{
		return Status_StaticEnum();
	}
	struct Z_Construct_UEnum_TetaVi_Plugin_Status_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TetaVi_Plugin_Status_Statics::Enumerators[] = {
		{ "Is_Not_Required", (int64)Is_Not_Required },
		{ "Is_Required", (int64)Is_Required },
		{ "Not_Downloaded", (int64)Not_Downloaded },
		{ "Is_Downloading", (int64)Is_Downloading },
		{ "Downloaded", (int64)Downloaded },
		{ "Not_Opened", (int64)Not_Opened },
		{ "Is_Opening", (int64)Is_Opening },
		{ "Opend", (int64)Opend },
		{ "Playing", (int64)Playing },
		{ "Finished_Playing", (int64)Finished_Playing },
		{ "Deleting", (int64)Deleting },
		{ "Deleted", (int64)Deleted },
		{ "Loop", (int64)Loop },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TetaVi_Plugin_Status_Statics::Enum_MetaDataParams[] = {
		{ "Deleted.Name", "Deleted" },
		{ "Deleting.Name", "Deleting" },
		{ "Downloaded.Name", "Downloaded" },
		{ "Finished_Playing.Name", "Finished_Playing" },
		{ "Is_Downloading.Name", "Is_Downloading" },
		{ "Is_Not_Required.Name", "Is_Not_Required" },
		{ "Is_Opening.Name", "Is_Opening" },
		{ "Is_Required.Name", "Is_Required" },
		{ "Loop.Name", "Loop" },
		{ "ModuleRelativePath", "Public/Tetavi_Chunk.h" },
		{ "Not_Downloaded.Name", "Not_Downloaded" },
		{ "Not_Opened.Name", "Not_Opened" },
		{ "Opend.Name", "Opend" },
		{ "Playing.Name", "Playing" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TetaVi_Plugin_Status_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TetaVi_Plugin,
		nullptr,
		"Status",
		"Status",
		Z_Construct_UEnum_TetaVi_Plugin_Status_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TetaVi_Plugin_Status_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_TetaVi_Plugin_Status_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TetaVi_Plugin_Status_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TetaVi_Plugin_Status()
	{
		if (!Z_Registration_Info_UEnum_Status.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_Status.InnerSingleton, Z_Construct_UEnum_TetaVi_Plugin_Status_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_Status.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_Tetavi_Chunk_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_Tetavi_Chunk_h_Statics::EnumInfo[] = {
		{ Status_StaticEnum, TEXT("Status"), &Z_Registration_Info_UEnum_Status, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1958319495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_Tetavi_Chunk_h_3633574353(TEXT("/Script/TetaVi_Plugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_Tetavi_Chunk_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_Tetavi_Chunk_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
