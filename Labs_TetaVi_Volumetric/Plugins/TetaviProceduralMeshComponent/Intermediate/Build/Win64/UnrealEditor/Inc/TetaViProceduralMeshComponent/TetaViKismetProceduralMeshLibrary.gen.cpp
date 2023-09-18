// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetaViProceduralMeshComponent/Public/TetaViKismetProceduralMeshLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetaViKismetProceduralMeshLibrary() {}
// Cross Module References
	TETAVIPROCEDURALMESHCOMPONENT_API UEnum* Z_Construct_UEnum_TetaViProceduralMeshComponent_ETetaViProcMeshSliceCapOption();
	UPackage* Z_Construct_UPackage__Script_TetaViProceduralMeshComponent();
	TETAVIPROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary_NoRegister();
	TETAVIPROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	TETAVIPROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FTetaViProcMeshTangent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TETAVIPROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UTetaViProceduralMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETetaViProcMeshSliceCapOption;
	static UEnum* ETetaViProcMeshSliceCapOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETetaViProcMeshSliceCapOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETetaViProcMeshSliceCapOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TetaViProceduralMeshComponent_ETetaViProcMeshSliceCapOption, Z_Construct_UPackage__Script_TetaViProceduralMeshComponent(), TEXT("ETetaViProcMeshSliceCapOption"));
		}
		return Z_Registration_Info_UEnum_ETetaViProcMeshSliceCapOption.OuterSingleton;
	}
	template<> TETAVIPROCEDURALMESHCOMPONENT_API UEnum* StaticEnum<ETetaViProcMeshSliceCapOption>()
	{
		return ETetaViProcMeshSliceCapOption_StaticEnum();
	}
	struct Z_Construct_UEnum_TetaViProceduralMeshComponent_ETetaViProcMeshSliceCapOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TetaViProceduralMeshComponent_ETetaViProcMeshSliceCapOption_Statics::Enumerators[] = {
		{ "ETetaViProcMeshSliceCapOption::NoCap", (int64)ETetaViProcMeshSliceCapOption::NoCap },
		{ "ETetaViProcMeshSliceCapOption::CreateNewSectionForCap", (int64)ETetaViProcMeshSliceCapOption::CreateNewSectionForCap },
		{ "ETetaViProcMeshSliceCapOption::UseLastSectionForCap", (int64)ETetaViProcMeshSliceCapOption::UseLastSectionForCap },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TetaViProceduralMeshComponent_ETetaViProcMeshSliceCapOption_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Options for creating cap geometry when slicing */" },
		{ "CreateNewSectionForCap.Comment", "/** Add a new section to ProceduralMesh for cap */" },
		{ "CreateNewSectionForCap.Name", "ETetaViProcMeshSliceCapOption::CreateNewSectionForCap" },
		{ "CreateNewSectionForCap.ToolTip", "Add a new section to ProceduralMesh for cap" },
		{ "ModuleRelativePath", "Public/TetaViKismetProceduralMeshLibrary.h" },
		{ "NoCap.Comment", "/** Do not create cap geometry */" },
		{ "NoCap.Name", "ETetaViProcMeshSliceCapOption::NoCap" },
		{ "NoCap.ToolTip", "Do not create cap geometry" },
		{ "ToolTip", "Options for creating cap geometry when slicing" },
		{ "UseLastSectionForCap.Comment", "/** Add cap geometry to existing last section */" },
		{ "UseLastSectionForCap.Name", "ETetaViProcMeshSliceCapOption::UseLastSectionForCap" },
		{ "UseLastSectionForCap.ToolTip", "Add cap geometry to existing last section" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TetaViProceduralMeshComponent_ETetaViProcMeshSliceCapOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TetaViProceduralMeshComponent,
		nullptr,
		"ETetaViProcMeshSliceCapOption",
		"ETetaViProcMeshSliceCapOption",
		Z_Construct_UEnum_TetaViProceduralMeshComponent_ETetaViProcMeshSliceCapOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TetaViProceduralMeshComponent_ETetaViProcMeshSliceCapOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TetaViProceduralMeshComponent_ETetaViProcMeshSliceCapOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TetaViProceduralMeshComponent_ETetaViProcMeshSliceCapOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TetaViProceduralMeshComponent_ETetaViProcMeshSliceCapOption()
	{
		if (!Z_Registration_Info_UEnum_ETetaViProcMeshSliceCapOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETetaViProcMeshSliceCapOption.InnerSingleton, Z_Construct_UEnum_TetaViProceduralMeshComponent_ETetaViProcMeshSliceCapOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETetaViProcMeshSliceCapOption.InnerSingleton;
	}
	DEFINE_FUNCTION(UTetaViKismetProceduralMeshLibrary::execSliceProceduralMesh)
	{
		P_GET_OBJECT(UTetaViProceduralMeshComponent,Z_Param_InProcMesh);
		P_GET_STRUCT(FVector,Z_Param_PlanePosition);
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal);
		P_GET_UBOOL(Z_Param_bCreateOtherHalf);
		P_GET_OBJECT_REF(UTetaViProceduralMeshComponent,Z_Param_Out_OutOtherHalfProcMesh);
		P_GET_ENUM(ETetaViProcMeshSliceCapOption,Z_Param_CapOption);
		P_GET_OBJECT(UMaterialInterface,Z_Param_CapMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTetaViKismetProceduralMeshLibrary::SliceProceduralMesh(Z_Param_InProcMesh,Z_Param_PlanePosition,Z_Param_PlaneNormal,Z_Param_bCreateOtherHalf,Z_Param_Out_OutOtherHalfProcMesh,ETetaViProcMeshSliceCapOption(Z_Param_CapOption),Z_Param_CapMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViKismetProceduralMeshLibrary::execGetSectionFromProceduralMesh)
	{
		P_GET_OBJECT(UTetaViProceduralMeshComponent,Z_Param_InProcMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UVs);
		P_GET_TARRAY_REF(FTetaViProcMeshTangent,Z_Param_Out_Tangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTetaViKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(Z_Param_InProcMesh,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViKismetProceduralMeshLibrary::execCopyProceduralMeshFromStaticMeshComponent)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_OBJECT(UTetaViProceduralMeshComponent,Z_Param_ProcMeshComponent);
		P_GET_UBOOL(Z_Param_bCreateCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTetaViKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(Z_Param_StaticMeshComponent,Z_Param_LODIndex,Z_Param_ProcMeshComponent,Z_Param_bCreateCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViKismetProceduralMeshLibrary::execGetSectionFromStaticMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_InMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UVs);
		P_GET_TARRAY_REF(FTetaViProcMeshTangent,Z_Param_Out_Tangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTetaViKismetProceduralMeshLibrary::GetSectionFromStaticMesh(Z_Param_InMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViKismetProceduralMeshLibrary::execCreateGridMeshSplit)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumX);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumY);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UVs);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UV1s);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GridSpacing);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTetaViKismetProceduralMeshLibrary::CreateGridMeshSplit(Z_Param_NumX,Z_Param_NumY,Z_Param_Out_Triangles,Z_Param_Out_Vertices,Z_Param_Out_UVs,Z_Param_Out_UV1s,Z_Param_GridSpacing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViKismetProceduralMeshLibrary::execCreateGridMeshWelded)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumX);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumY);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UVs);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GridSpacing);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTetaViKismetProceduralMeshLibrary::CreateGridMeshWelded(Z_Param_NumX,Z_Param_NumY,Z_Param_Out_Triangles,Z_Param_Out_Vertices,Z_Param_Out_UVs,Z_Param_GridSpacing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViKismetProceduralMeshLibrary::execCreateGridMeshTriangles)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumX);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumY);
		P_GET_UBOOL(Z_Param_bWinding);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTetaViKismetProceduralMeshLibrary::CreateGridMeshTriangles(Z_Param_NumX,Z_Param_NumY,Z_Param_bWinding,Z_Param_Out_Triangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViKismetProceduralMeshLibrary::execConvertQuadToTriangles)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_PROPERTY(FIntProperty,Z_Param_Vert0);
		P_GET_PROPERTY(FIntProperty,Z_Param_Vert1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Vert2);
		P_GET_PROPERTY(FIntProperty,Z_Param_Vert3);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTetaViKismetProceduralMeshLibrary::ConvertQuadToTriangles(Z_Param_Out_Triangles,Z_Param_Vert0,Z_Param_Vert1,Z_Param_Vert2,Z_Param_Vert3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViKismetProceduralMeshLibrary::execCalculateTangentsForMesh)
	{
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UVs);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FTetaViProcMeshTangent,Z_Param_Out_Tangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTetaViKismetProceduralMeshLibrary::CalculateTangentsForMesh(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_UVs,Z_Param_Out_Normals,Z_Param_Out_Tangents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViKismetProceduralMeshLibrary::execGenerateBoxMesh)
	{
		P_GET_STRUCT(FVector,Z_Param_BoxRadius);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UVs);
		P_GET_TARRAY_REF(FTetaViProcMeshTangent,Z_Param_Out_Tangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTetaViKismetProceduralMeshLibrary::GenerateBoxMesh(Z_Param_BoxRadius,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents);
		P_NATIVE_END;
	}
	void UTetaViKismetProceduralMeshLibrary::StaticRegisterNativesUTetaViKismetProceduralMeshLibrary()
	{
		UClass* Class = UTetaViKismetProceduralMeshLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateTangentsForMesh", &UTetaViKismetProceduralMeshLibrary::execCalculateTangentsForMesh },
			{ "ConvertQuadToTriangles", &UTetaViKismetProceduralMeshLibrary::execConvertQuadToTriangles },
			{ "CopyProceduralMeshFromStaticMeshComponent", &UTetaViKismetProceduralMeshLibrary::execCopyProceduralMeshFromStaticMeshComponent },
			{ "CreateGridMeshSplit", &UTetaViKismetProceduralMeshLibrary::execCreateGridMeshSplit },
			{ "CreateGridMeshTriangles", &UTetaViKismetProceduralMeshLibrary::execCreateGridMeshTriangles },
			{ "CreateGridMeshWelded", &UTetaViKismetProceduralMeshLibrary::execCreateGridMeshWelded },
			{ "GenerateBoxMesh", &UTetaViKismetProceduralMeshLibrary::execGenerateBoxMesh },
			{ "GetSectionFromProceduralMesh", &UTetaViKismetProceduralMeshLibrary::execGetSectionFromProceduralMesh },
			{ "GetSectionFromStaticMesh", &UTetaViKismetProceduralMeshLibrary::execGetSectionFromStaticMesh },
			{ "SliceProceduralMesh", &UTetaViKismetProceduralMeshLibrary::execSliceProceduralMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics
	{
		struct TetaViKismetProceduralMeshLibrary_eventCalculateTangentsForMesh_Parms
		{
			TArray<FVector3f> Vertices;
			TArray<int32> Triangles;
			TArray<FVector2f> UVs;
			TArray<FVector3f> Normals;
			TArray<FTetaViProcMeshTangent> Tangents;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCalculateTangentsForMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCalculateTangentsForMesh_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Triangles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_UVs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCalculateTangentsForMesh_Parms, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_UVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_UVs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCalculateTangentsForMesh_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetaViProcMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 3814049566
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCalculateTangentsForMesh_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3814049566
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_UVs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_UVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Tangents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SmoothingGroups,UVs" },
		{ "Category", "Components|TetaViProceduralMesh" },
		{ "Comment", "/** \n\x09 *\x09""Automatically generate normals and tangent vectors for a mesh\n\x09 *\x09UVs are required for correct tangent generation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TetaViKismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Automatically generate normals and tangent vectors for a mesh\nUVs are required for correct tangent generation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary, nullptr, "CalculateTangentsForMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::TetaViKismetProceduralMeshLibrary_eventCalculateTangentsForMesh_Parms), Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics
	{
		struct TetaViKismetProceduralMeshLibrary_eventConvertQuadToTriangles_Parms
		{
			TArray<int32> Triangles;
			int32 Vert0;
			int32 Vert1;
			int32 Vert2;
			int32 Vert3;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Vert0;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Vert1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Vert2;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Vert3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventConvertQuadToTriangles_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert0 = { "Vert0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventConvertQuadToTriangles_Parms, Vert0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert1 = { "Vert1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventConvertQuadToTriangles_Parms, Vert1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert2 = { "Vert2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventConvertQuadToTriangles_Parms, Vert2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert3 = { "Vert3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventConvertQuadToTriangles_Parms, Vert3), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|TetaViProceduralMesh" },
		{ "Comment", "/** Add a quad, specified by four indices, to a triangle index buffer as two triangles. */" },
		{ "ModuleRelativePath", "Public/TetaViKismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Add a quad, specified by four indices, to a triangle index buffer as two triangles." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary, nullptr, "ConvertQuadToTriangles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::TetaViKismetProceduralMeshLibrary_eventConvertQuadToTriangles_Parms), Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics
	{
		struct TetaViKismetProceduralMeshLibrary_eventCopyProceduralMeshFromStaticMeshComponent_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			int32 LODIndex;
			UTetaViProceduralMeshComponent* ProcMeshComponent;
			bool bCreateCollision;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProcMeshComponent;
		static void NewProp_bCreateCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCopyProceduralMeshFromStaticMeshComponent_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCopyProceduralMeshFromStaticMeshComponent_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_ProcMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_ProcMeshComponent = { "ProcMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCopyProceduralMeshFromStaticMeshComponent_Parms, ProcMeshComponent), Z_Construct_UClass_UTetaViProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_ProcMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_ProcMeshComponent_MetaData)) };
	void Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
	{
		((TetaViKismetProceduralMeshLibrary_eventCopyProceduralMeshFromStaticMeshComponent_Parms*)Obj)->bCreateCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TetaViKismetProceduralMeshLibrary_eventCopyProceduralMeshFromStaticMeshComponent_Parms), &Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_ProcMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_bCreateCollision,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|TetaViProceduralMesh" },
		{ "Comment", "/** Copy materials from StaticMeshComponent to ProceduralMeshComponent. */" },
		{ "ModuleRelativePath", "Public/TetaViKismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Copy materials from StaticMeshComponent to ProceduralMeshComponent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary, nullptr, "CopyProceduralMeshFromStaticMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::TetaViKismetProceduralMeshLibrary_eventCopyProceduralMeshFromStaticMeshComponent_Parms), Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics
	{
		struct TetaViKismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms
		{
			int32 NumX;
			int32 NumY;
			TArray<int32> Triangles;
			TArray<FVector3f> Vertices;
			TArray<FVector2f> UVs;
			TArray<FVector2f> UV1s;
			float GridSpacing;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumY;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV1s_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV1s;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSpacing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_NumX = { "NumX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms, NumX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_NumY = { "NumY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms, NumY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UV1s_Inner = { "UV1s", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UV1s = { "UV1s", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms, UV1s), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_GridSpacing = { "GridSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms, GridSpacing), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_NumX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_NumY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UVs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UV1s_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UV1s,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_GridSpacing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|TetaViProceduralMesh" },
		{ "Comment", "/**\n\x09*\x09Generate a vertex buffer, index buffer and UVs for a grid mesh where each quad is split, with standard 0-1 UVs on UV0 and point sampled texel center UVs for UV1.\n\x09*\x09@param\x09NumX\x09\x09\x09Number of vertices in X direction (must be >= 2)\n\x09*\x09@param\x09NumY\x09\x09\x09Number of vertices in y direction (must be >= 2)\n\x09*\x09@out\x09Triangles\x09\x09Output index buffer\n\x09*\x09@out\x09Vertices\x09\x09Output vertex buffer\n\x09*\x09@out\x09UVs\x09\x09\x09\x09Out UVs\n\x09*\x09@out\x09UV1s\x09\x09\x09Out UV1s\n\x09*\x09@param\x09GridSpacing\x09\x09Size of each quad in world units\n\x09*/" },
		{ "ModuleRelativePath", "Public/TetaViKismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Generate a vertex buffer, index buffer and UVs for a grid mesh where each quad is split, with standard 0-1 UVs on UV0 and point sampled texel center UVs for UV1.\n@param  NumX                    Number of vertices in X direction (must be >= 2)\n@param  NumY                    Number of vertices in y direction (must be >= 2)\n@out    Triangles               Output index buffer\n@out    Vertices                Output vertex buffer\n@out    UVs                             Out UVs\n@out    UV1s                    Out UV1s\n@param  GridSpacing             Size of each quad in world units" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary, nullptr, "CreateGridMeshSplit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::TetaViKismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms), Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics
	{
		struct TetaViKismetProceduralMeshLibrary_eventCreateGridMeshTriangles_Parms
		{
			int32 NumX;
			int32 NumY;
			bool bWinding;
			TArray<int32> Triangles;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumY;
		static void NewProp_bWinding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWinding;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_NumX = { "NumX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshTriangles_Parms, NumX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_NumY = { "NumY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshTriangles_Parms, NumY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_bWinding_SetBit(void* Obj)
	{
		((TetaViKismetProceduralMeshLibrary_eventCreateGridMeshTriangles_Parms*)Obj)->bWinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_bWinding = { "bWinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshTriangles_Parms), &Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_bWinding_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshTriangles_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_NumX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_NumY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_bWinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_Triangles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** \n\x09 *\x09Generate an index buffer for a grid of quads. \n\x09 *\x09@param\x09NumX\x09\x09\x09Number of vertices in X direction (must be >= 2)\n\x09 *\x09@param\x09NumY\x09\x09\x09Number of vertices in y direction (must be >= 2)\n\x09 *\x09@param\x09""bWinding\x09\x09Reverses winding of indices generated for each quad\n\x09 *\x09@out\x09Triangles\x09\x09Output index buffer\n\x09 */" },
		{ "ModuleRelativePath", "Public/TetaViKismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Generate an index buffer for a grid of quads.\n@param  NumX                    Number of vertices in X direction (must be >= 2)\n@param  NumY                    Number of vertices in y direction (must be >= 2)\n@param  bWinding                Reverses winding of indices generated for each quad\n@out    Triangles               Output index buffer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary, nullptr, "CreateGridMeshTriangles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::TetaViKismetProceduralMeshLibrary_eventCreateGridMeshTriangles_Parms), Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics
	{
		struct TetaViKismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms
		{
			int32 NumX;
			int32 NumY;
			TArray<int32> Triangles;
			TArray<FVector3f> Vertices;
			TArray<FVector2f> UVs;
			float GridSpacing;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumY;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSpacing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_NumX = { "NumX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms, NumX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_NumY = { "NumY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms, NumY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_GridSpacing = { "GridSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms, GridSpacing), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_NumX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_NumY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_UVs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_UVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_GridSpacing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09*\x09Generate a vertex buffer, index buffer and UVs for a tessellated grid mesh.\n\x09*\x09@param\x09NumX\x09\x09\x09Number of vertices in X direction (must be >= 2)\n\x09*\x09@param\x09NumY\x09\x09\x09Number of vertices in y direction (must be >= 2)\n\x09*\x09@out\x09Triangles\x09\x09Output index buffer\n\x09*\x09@out\x09Vertices\x09\x09Output vertex buffer\n\x09*\x09@out\x09UVs\x09\x09\x09\x09Out UVs\n\x09*\x09@param\x09GridSpacing\x09\x09Size of each quad in world units\n\x09*/" },
		{ "ModuleRelativePath", "Public/TetaViKismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Generate a vertex buffer, index buffer and UVs for a tessellated grid mesh.\n@param  NumX                    Number of vertices in X direction (must be >= 2)\n@param  NumY                    Number of vertices in y direction (must be >= 2)\n@out    Triangles               Output index buffer\n@out    Vertices                Output vertex buffer\n@out    UVs                             Out UVs\n@param  GridSpacing             Size of each quad in world units" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary, nullptr, "CreateGridMeshWelded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::TetaViKismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms), Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics
	{
		struct TetaViKismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms
		{
			FVector BoxRadius;
			TArray<FVector3f> Vertices;
			TArray<int32> Triangles;
			TArray<FVector3f> Normals;
			TArray<FVector2f> UVs;
			TArray<FTetaViProcMeshTangent> Tangents;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxRadius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_BoxRadius = { "BoxRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms, BoxRadius), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetaViProcMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 3814049566
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3814049566
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_BoxRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_UVs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_UVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Tangents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|TetaViProceduralMesh" },
		{ "Comment", "/** Generate vertex and index buffer for a simple box, given the supplied dimensions. Normals, UVs and tangents are also generated for each vertex. */" },
		{ "ModuleRelativePath", "Public/TetaViKismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Generate vertex and index buffer for a simple box, given the supplied dimensions. Normals, UVs and tangents are also generated for each vertex." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary, nullptr, "GenerateBoxMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::TetaViKismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms), Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics
	{
		struct TetaViKismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms
		{
			UTetaViProceduralMeshComponent* InProcMesh;
			int32 SectionIndex;
			TArray<FVector3f> Vertices;
			TArray<int32> Triangles;
			TArray<FVector3f> Normals;
			TArray<FVector2f> UVs;
			TArray<FTetaViProcMeshTangent> Tangents;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProcMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InProcMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_InProcMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_InProcMesh = { "InProcMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms, InProcMesh), Z_Construct_UClass_UTetaViProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_InProcMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_InProcMesh_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetaViProcMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 3814049566
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3814049566
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_InProcMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_UVs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_UVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Tangents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|TetaViProceduralMesh" },
		{ "Comment", "/** Grab geometry data from a ProceduralMeshComponent. */" },
		{ "ModuleRelativePath", "Public/TetaViKismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Grab geometry data from a ProceduralMeshComponent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary, nullptr, "GetSectionFromProceduralMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::TetaViKismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms), Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics
	{
		struct TetaViKismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms
		{
			UStaticMesh* InMesh;
			int32 LODIndex;
			int32 SectionIndex;
			TArray<FVector3f> Vertices;
			TArray<int32> Triangles;
			TArray<FVector3f> Normals;
			TArray<FVector2f> UVs;
			TArray<FTetaViProcMeshTangent> Tangents;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_InMesh = { "InMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, InMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetaViProcMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 3814049566
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3814049566
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_InMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_UVs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_UVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Tangents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|TetaViProceduralMesh" },
		{ "Comment", "/** Grab geometry data from a StaticMesh asset. */" },
		{ "ModuleRelativePath", "Public/TetaViKismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Grab geometry data from a StaticMesh asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary, nullptr, "GetSectionFromStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::TetaViKismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms), Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics
	{
		struct TetaViKismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms
		{
			UTetaViProceduralMeshComponent* InProcMesh;
			FVector PlanePosition;
			FVector PlaneNormal;
			bool bCreateOtherHalf;
			UTetaViProceduralMeshComponent* OutOtherHalfProcMesh;
			ETetaViProcMeshSliceCapOption CapOption;
			UMaterialInterface* CapMaterial;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProcMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InProcMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlanePosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
		static void NewProp_bCreateOtherHalf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateOtherHalf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutOtherHalfProcMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutOtherHalfProcMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CapOption_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CapOption;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CapMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_InProcMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_InProcMesh = { "InProcMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms, InProcMesh), Z_Construct_UClass_UTetaViProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_InProcMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_InProcMesh_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_PlanePosition = { "PlanePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms, PlanePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_bCreateOtherHalf_SetBit(void* Obj)
	{
		((TetaViKismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms*)Obj)->bCreateOtherHalf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_bCreateOtherHalf = { "bCreateOtherHalf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TetaViKismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms), &Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_bCreateOtherHalf_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_OutOtherHalfProcMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_OutOtherHalfProcMesh = { "OutOtherHalfProcMesh", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms, OutOtherHalfProcMesh), Z_Construct_UClass_UTetaViProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_OutOtherHalfProcMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_OutOtherHalfProcMesh_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_CapOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_CapOption = { "CapOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms, CapOption), Z_Construct_UEnum_TetaViProceduralMeshComponent_ETetaViProcMeshSliceCapOption, METADATA_PARAMS(nullptr, 0) }; // 3860038248
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_CapMaterial = { "CapMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViKismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms, CapMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_InProcMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_PlanePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_PlaneNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_bCreateOtherHalf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_OutOtherHalfProcMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_CapOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_CapOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_CapMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|TetaViProceduralMesh" },
		{ "Comment", "/** \n\x09 *\x09Slice the ProceduralMeshComponent (including simple convex collision) using a plane. Optionally create 'cap' geometry. \n\x09 *\x09@param\x09InProcMesh\x09\x09\x09\x09ProceduralMeshComponent to slice\n\x09 *\x09@param\x09PlanePosition\x09\x09\x09Point on the plane to use for slicing, in world space\n\x09 *\x09@param\x09PlaneNormal\x09\x09\x09\x09Normal of plane used for slicing. Geometry on the positive side of the plane will be kept.\n\x09 *\x09@param\x09""bCreateOtherHalf\x09\x09If true, an additional ProceduralMeshComponent (OutOtherHalfProcMesh) will be created using the other half of the sliced geometry\n\x09 *\x09@param\x09OutOtherHalfProcMesh\x09If bCreateOtherHalf is set, this is the new component created. Its owner will be the same as the supplied InProcMesh.\n\x09 *\x09@param\x09""CapOption\x09\x09\x09\x09If and how to create 'cap' geometry on the slicing plane\n\x09 *\x09@param\x09""CapMaterial\x09\x09\x09\x09If creating a new section for the cap, assign this material to that section\n\x09 */" },
		{ "ModuleRelativePath", "Public/TetaViKismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Slice the ProceduralMeshComponent (including simple convex collision) using a plane. Optionally create 'cap' geometry.\n@param  InProcMesh                              ProceduralMeshComponent to slice\n@param  PlanePosition                   Point on the plane to use for slicing, in world space\n@param  PlaneNormal                             Normal of plane used for slicing. Geometry on the positive side of the plane will be kept.\n@param  bCreateOtherHalf                If true, an additional ProceduralMeshComponent (OutOtherHalfProcMesh) will be created using the other half of the sliced geometry\n@param  OutOtherHalfProcMesh    If bCreateOtherHalf is set, this is the new component created. Its owner will be the same as the supplied InProcMesh.\n@param  CapOption                               If and how to create 'cap' geometry on the slicing plane\n@param  CapMaterial                             If creating a new section for the cap, assign this material to that section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary, nullptr, "SliceProceduralMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::TetaViKismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms), Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTetaViKismetProceduralMeshLibrary);
	UClass* Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary_NoRegister()
	{
		return UTetaViKismetProceduralMeshLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TetaViProceduralMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CalculateTangentsForMesh, "CalculateTangentsForMesh" }, // 2407897655
		{ &Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_ConvertQuadToTriangles, "ConvertQuadToTriangles" }, // 3621651651
		{ &Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent, "CopyProceduralMeshFromStaticMeshComponent" }, // 3224285790
		{ &Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshSplit, "CreateGridMeshSplit" }, // 1532160871
		{ &Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshTriangles, "CreateGridMeshTriangles" }, // 1511456464
		{ &Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_CreateGridMeshWelded, "CreateGridMeshWelded" }, // 2602075224
		{ &Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GenerateBoxMesh, "GenerateBoxMesh" }, // 4226558063
		{ &Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromProceduralMesh, "GetSectionFromProceduralMesh" }, // 1314813354
		{ &Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_GetSectionFromStaticMesh, "GetSectionFromStaticMesh" }, // 15000246
		{ &Z_Construct_UFunction_UTetaViKismetProceduralMeshLibrary_SliceProceduralMesh, "SliceProceduralMesh" }, // 187843763
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TetaViKismetProceduralMeshLibrary.h" },
		{ "ModuleRelativePath", "Public/TetaViKismetProceduralMeshLibrary.h" },
		{ "ScriptName", "TetaViProceduralMeshLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetaViKismetProceduralMeshLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary_Statics::ClassParams = {
		&UTetaViKismetProceduralMeshLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary()
	{
		if (!Z_Registration_Info_UClass_UTetaViKismetProceduralMeshLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetaViKismetProceduralMeshLibrary.OuterSingleton, Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTetaViKismetProceduralMeshLibrary.OuterSingleton;
	}
	template<> TETAVIPROCEDURALMESHCOMPONENT_API UClass* StaticClass<UTetaViKismetProceduralMeshLibrary>()
	{
		return UTetaViKismetProceduralMeshLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetaViKismetProceduralMeshLibrary);
	struct Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_Statics::EnumInfo[] = {
		{ ETetaViProcMeshSliceCapOption_StaticEnum, TEXT("ETetaViProcMeshSliceCapOption"), &Z_Registration_Info_UEnum_ETetaViProcMeshSliceCapOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3860038248U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary, UTetaViKismetProceduralMeshLibrary::StaticClass, TEXT("UTetaViKismetProceduralMeshLibrary"), &Z_Registration_Info_UClass_UTetaViKismetProceduralMeshLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetaViKismetProceduralMeshLibrary), 4294668972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_1524658998(TEXT("/Script/TetaViProceduralMeshComponent"),
		Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
