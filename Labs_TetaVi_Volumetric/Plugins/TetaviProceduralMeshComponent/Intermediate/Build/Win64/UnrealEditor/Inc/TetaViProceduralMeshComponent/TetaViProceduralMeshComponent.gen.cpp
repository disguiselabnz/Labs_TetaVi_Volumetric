// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetaViProceduralMeshComponent/Public/TetaViProceduralMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetaViProceduralMeshComponent() {}
// Cross Module References
	TETAVIPROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FTetaViProcMeshTangent();
	UPackage* Z_Construct_UPackage__Script_TetaViProceduralMeshComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	TETAVIPROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FTetaViProcMeshVertex();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	TETAVIPROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FTetaViProcMeshSection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	TETAVIPROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UTetaViProceduralMeshComponent_NoRegister();
	TETAVIPROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UTetaViProceduralMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetaViProcMeshTangent;
class UScriptStruct* FTetaViProcMeshTangent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetaViProcMeshTangent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetaViProcMeshTangent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetaViProcMeshTangent, Z_Construct_UPackage__Script_TetaViProceduralMeshComponent(), TEXT("TetaViProcMeshTangent"));
	}
	return Z_Registration_Info_UScriptStruct_TetaViProcMeshTangent.OuterSingleton;
}
template<> TETAVIPROCEDURALMESHCOMPONENT_API UScriptStruct* StaticStruct<FTetaViProcMeshTangent>()
{
	return FTetaViProcMeshTangent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipTangentY_MetaData[];
#endif
		static void NewProp_bFlipTangentY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipTangentY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Struct used to specify a tangent vector for a vertex\n*\x09The Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member.\n*/" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Struct used to specify a tangent vector for a vertex\nThe Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetaViProcMeshTangent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::NewProp_TangentX_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** Direction of X tangent for this vertex */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Direction of X tangent for this vertex" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::NewProp_TangentX = { "TangentX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetaViProcMeshTangent, TangentX), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::NewProp_TangentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::NewProp_TangentX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::NewProp_bFlipTangentY_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** Bool that indicates whether we should flip the Y tangent when we compute it using cross product */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Bool that indicates whether we should flip the Y tangent when we compute it using cross product" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::NewProp_bFlipTangentY_SetBit(void* Obj)
	{
		((FTetaViProcMeshTangent*)Obj)->bFlipTangentY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::NewProp_bFlipTangentY = { "bFlipTangentY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetaViProcMeshTangent), &Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::NewProp_bFlipTangentY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::NewProp_bFlipTangentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::NewProp_bFlipTangentY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::NewProp_TangentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::NewProp_bFlipTangentY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TetaViProceduralMeshComponent,
		nullptr,
		&NewStructOps,
		"TetaViProcMeshTangent",
		sizeof(FTetaViProcMeshTangent),
		alignof(FTetaViProcMeshTangent),
		Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetaViProcMeshTangent()
	{
		if (!Z_Registration_Info_UScriptStruct_TetaViProcMeshTangent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetaViProcMeshTangent.InnerSingleton, Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetaViProcMeshTangent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetaViProcMeshVertex;
class UScriptStruct* FTetaViProcMeshVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetaViProcMeshVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetaViProcMeshVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetaViProcMeshVertex, Z_Construct_UPackage__Script_TetaViProceduralMeshComponent(), TEXT("TetaViProcMeshVertex"));
	}
	return Z_Registration_Info_UScriptStruct_TetaViProcMeshVertex.OuterSingleton;
}
template<> TETAVIPROCEDURALMESHCOMPONENT_API UScriptStruct* StaticStruct<FTetaViProcMeshVertex>()
{
	return FTetaViProcMeshVertex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** One vertex for the procedural mesh, used for storing data internally */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "One vertex for the procedural mesh, used for storing data internally" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetaViProcMeshVertex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex position */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex position" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetaViProcMeshVertex, Position), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex normal */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex normal" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetaViProcMeshVertex, Normal), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Tangent_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex tangent */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex tangent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetaViProcMeshVertex, Tangent), Z_Construct_UScriptStruct_FTetaViProcMeshTangent, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Tangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Tangent_MetaData)) }; // 3814049566
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex color */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetaViProcMeshVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV0_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetaViProcMeshVertex, UV0), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV1_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetaViProcMeshVertex, UV1), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV2_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetaViProcMeshVertex, UV2), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV3_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetaViProcMeshVertex, UV3), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV3_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Tangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewProp_UV3,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TetaViProceduralMeshComponent,
		nullptr,
		&NewStructOps,
		"TetaViProcMeshVertex",
		sizeof(FTetaViProcMeshVertex),
		alignof(FTetaViProcMeshVertex),
		Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetaViProcMeshVertex()
	{
		if (!Z_Registration_Info_UScriptStruct_TetaViProcMeshVertex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetaViProcMeshVertex.InnerSingleton, Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetaViProcMeshVertex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetaViProcMeshSection;
class UScriptStruct* FTetaViProcMeshSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetaViProcMeshSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetaViProcMeshSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetaViProcMeshSection, Z_Construct_UPackage__Script_TetaViProceduralMeshComponent(), TEXT("TetaViProcMeshSection"));
	}
	return Z_Registration_Info_UScriptStruct_TetaViProcMeshSection.OuterSingleton;
}
template<> TETAVIPROCEDURALMESHCOMPONENT_API UScriptStruct* StaticStruct<FTetaViProcMeshSection>()
{
	return FTetaViProcMeshSection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProcVertexBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcVertexBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcVertexBuffer;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ProcIndexBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcIndexBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcIndexBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionLocalBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionLocalBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSectionVisible_MetaData[];
#endif
		static void NewProp_bSectionVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSectionVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** One section of the procedural mesh. Each material has its own section. */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "One section of the procedural mesh. Each material has its own section." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetaViProcMeshSection>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_ProcVertexBuffer_Inner = { "ProcVertexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetaViProcMeshVertex, METADATA_PARAMS(nullptr, 0) }; // 685057300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_ProcVertexBuffer_MetaData[] = {
		{ "Comment", "/** Vertex buffer for this section */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex buffer for this section" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_ProcVertexBuffer = { "ProcVertexBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetaViProcMeshSection, ProcVertexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_ProcVertexBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_ProcVertexBuffer_MetaData)) }; // 685057300
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_ProcIndexBuffer_Inner = { "ProcIndexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_ProcIndexBuffer_MetaData[] = {
		{ "Comment", "/** Index buffer for this section */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Index buffer for this section" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_ProcIndexBuffer = { "ProcIndexBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetaViProcMeshSection, ProcIndexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_ProcIndexBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_ProcIndexBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_SectionLocalBox_MetaData[] = {
		{ "Comment", "/** Local bounding box of section */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Local bounding box of section" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_SectionLocalBox = { "SectionLocalBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetaViProcMeshSection, SectionLocalBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_SectionLocalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_SectionLocalBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Comment", "/** Should we build collision data for triangles in this section */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Should we build collision data for triangles in this section" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FTetaViProcMeshSection*)Obj)->bEnableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetaViProcMeshSection), &Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_bSectionVisible_MetaData[] = {
		{ "Comment", "/** Should we display this section */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Should we display this section" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_bSectionVisible_SetBit(void* Obj)
	{
		((FTetaViProcMeshSection*)Obj)->bSectionVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_bSectionVisible = { "bSectionVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetaViProcMeshSection), &Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_bSectionVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_bSectionVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_bSectionVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_ProcVertexBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_ProcVertexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_ProcIndexBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_ProcIndexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_SectionLocalBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewProp_bSectionVisible,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TetaViProceduralMeshComponent,
		nullptr,
		&NewStructOps,
		"TetaViProcMeshSection",
		sizeof(FTetaViProcMeshSection),
		alignof(FTetaViProcMeshSection),
		Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetaViProcMeshSection()
	{
		if (!Z_Registration_Info_UScriptStruct_TetaViProcMeshSection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetaViProcMeshSection.InnerSingleton, Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetaViProcMeshSection.InnerSingleton;
	}
	DEFINE_FUNCTION(UTetaViProceduralMeshComponent::execClearCollisionConvexMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCollisionConvexMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViProceduralMeshComponent::execAddCollisionConvexMesh)
	{
		P_GET_TARRAY(FVector,Z_Param_ConvexVerts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCollisionConvexMesh(Z_Param_ConvexVerts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViProceduralMeshComponent::execGetNumSections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViProceduralMeshComponent::execIsMeshSectionVisible)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMeshSectionVisible(Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViProceduralMeshComponent::execSetMeshSectionVisible)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshSectionVisible(Z_Param_SectionIndex,Z_Param_bNewVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViProceduralMeshComponent::execClearAllMeshSections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllMeshSections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViProceduralMeshComponent::execClearMeshSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMeshSection(Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViProceduralMeshComponent::execUpdateMeshSection_LinearColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UV0);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UV1);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UV2);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UV3);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors);
		P_GET_TARRAY_REF(FTetaViProcMeshTangent,Z_Param_Out_Tangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMeshSection_LinearColor(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Out_UV3,Z_Param_Out_VertexColors,Z_Param_Out_Tangents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViProceduralMeshComponent::execUpdateMeshSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UV0);
		P_GET_TARRAY_REF(FColor,Z_Param_Out_VertexColors);
		P_GET_TARRAY_REF(FTetaViProcMeshTangent,Z_Param_Out_Tangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMeshSection(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_VertexColors,Z_Param_Out_Tangents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViProceduralMeshComponent::execCreateMeshSection_LinearColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UV0);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UV1);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UV2);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UV3);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors);
		P_GET_TARRAY_REF(FTetaViProcMeshTangent,Z_Param_Out_Tangents);
		P_GET_UBOOL(Z_Param_bCreateCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMeshSection_LinearColor(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Out_UV3,Z_Param_Out_VertexColors,Z_Param_Out_Tangents,Z_Param_bCreateCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTetaViProceduralMeshComponent::execCreateMeshSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UV0);
		P_GET_TARRAY_REF(FColor,Z_Param_Out_VertexColors);
		P_GET_TARRAY_REF(FTetaViProcMeshTangent,Z_Param_Out_Tangents);
		P_GET_UBOOL(Z_Param_bCreateCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMeshSection(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_VertexColors,Z_Param_Out_Tangents,Z_Param_bCreateCollision);
		P_NATIVE_END;
	}
	void UTetaViProceduralMeshComponent::StaticRegisterNativesUTetaViProceduralMeshComponent()
	{
		UClass* Class = UTetaViProceduralMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCollisionConvexMesh", &UTetaViProceduralMeshComponent::execAddCollisionConvexMesh },
			{ "ClearAllMeshSections", &UTetaViProceduralMeshComponent::execClearAllMeshSections },
			{ "ClearCollisionConvexMeshes", &UTetaViProceduralMeshComponent::execClearCollisionConvexMeshes },
			{ "ClearMeshSection", &UTetaViProceduralMeshComponent::execClearMeshSection },
			{ "CreateMeshSection", &UTetaViProceduralMeshComponent::execCreateMeshSection },
			{ "CreateMeshSection_LinearColor", &UTetaViProceduralMeshComponent::execCreateMeshSection_LinearColor },
			{ "GetNumSections", &UTetaViProceduralMeshComponent::execGetNumSections },
			{ "IsMeshSectionVisible", &UTetaViProceduralMeshComponent::execIsMeshSectionVisible },
			{ "SetMeshSectionVisible", &UTetaViProceduralMeshComponent::execSetMeshSectionVisible },
			{ "UpdateMeshSection", &UTetaViProceduralMeshComponent::execUpdateMeshSection },
			{ "UpdateMeshSection_LinearColor", &UTetaViProceduralMeshComponent::execUpdateMeshSection_LinearColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh_Statics
	{
		struct TetaViProceduralMeshComponent_eventAddCollisionConvexMesh_Parms
		{
			TArray<FVector> ConvexVerts;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConvexVerts_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConvexVerts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts_Inner = { "ConvexVerts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts = { "ConvexVerts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventAddCollisionConvexMesh_Parms, ConvexVerts), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Add simple collision convex to this component */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Add simple collision convex to this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViProceduralMeshComponent, nullptr, "AddCollisionConvexMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh_Statics::TetaViProceduralMeshComponent_eventAddCollisionConvexMesh_Parms), Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearAllMeshSections_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Clear all mesh sections and reset to empty state */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Clear all mesh sections and reset to empty state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearAllMeshSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViProceduralMeshComponent, nullptr, "ClearAllMeshSections", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearAllMeshSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearAllMeshSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearCollisionConvexMeshes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearCollisionConvexMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Remove collision meshes from this component */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Remove collision meshes from this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearCollisionConvexMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViProceduralMeshComponent, nullptr, "ClearCollisionConvexMeshes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearCollisionConvexMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearCollisionConvexMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearCollisionConvexMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearCollisionConvexMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearMeshSection_Statics
	{
		struct TetaViProceduralMeshComponent_eventClearMeshSection_Parms
		{
			int32 SectionIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearMeshSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventClearMeshSection_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearMeshSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearMeshSection_Statics::NewProp_SectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Clear a section of the procedural mesh. Other sections do not change index. */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Clear a section of the procedural mesh. Other sections do not change index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearMeshSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViProceduralMeshComponent, nullptr, "ClearMeshSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearMeshSection_Statics::TetaViProceduralMeshComponent_eventClearMeshSection_Parms), Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearMeshSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearMeshSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearMeshSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearMeshSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics
	{
		struct TetaViProceduralMeshComponent_eventCreateMeshSection_Parms
		{
			int32 SectionIndex;
			TArray<FVector3f> Vertices;
			TArray<int32> Triangles;
			TArray<FVector3f> Normals;
			TArray<FVector2f> UV0;
			TArray<FColor> VertexColors;
			TArray<FTetaViProcMeshTangent> Tangents;
			bool bCreateCollision;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static void NewProp_bCreateCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Triangles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Normals_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_UV0_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetaViProcMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 3814049566
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Tangents_MetaData)) }; // 3814049566
	void Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
	{
		((TetaViProceduralMeshComponent_eventCreateMeshSection_Parms*)Obj)->bCreateCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TetaViProceduralMeshComponent_eventCreateMeshSection_Parms), &Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Tangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Normals,UV0,VertexColors,Tangents" },
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09 *\x09""Create/replace a section for this procedural mesh component.\n\x09 *\x09This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n\x09 *\x09@param\x09SectionIndex\x09\x09Index of the section to create or replace.\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 *\x09@param\x09Triangles\x09\x09\x09Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n\x09 *\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09""bCreateCollision\x09Indicates whether collision should be created for this section. This adds significant cost.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead." },
		{ "DisplayName", "Create Mesh Section FColor" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Create/replace a section for this procedural mesh component.\nThis function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n@param  SectionIndex            Index of the section to create or replace.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n@param  bCreateCollision        Indicates whether collision should be created for this section. This adds significant cost." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViProceduralMeshComponent, nullptr, "CreateMeshSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::TetaViProceduralMeshComponent_eventCreateMeshSection_Parms), Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics
	{
		struct TetaViProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms
		{
			int32 SectionIndex;
			TArray<FVector3f> Vertices;
			TArray<int32> Triangles;
			TArray<FVector3f> Normals;
			TArray<FVector2f> UV0;
			TArray<FVector2f> UV1;
			TArray<FVector2f> UV2;
			TArray<FVector2f> UV3;
			TArray<FLinearColor> VertexColors;
			TArray<FTetaViProcMeshTangent> Tangents;
			bool bCreateCollision;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV2_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV3_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV3;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static void NewProp_bCreateCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1_Inner = { "UV1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, UV1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2_Inner = { "UV2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, UV2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3_Inner = { "UV3", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, UV3), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetaViProcMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 3814049566
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents_MetaData)) }; // 3814049566
	void Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
	{
		((TetaViProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms*)Obj)->bCreateCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TetaViProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms), &Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bCreateCollision,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "UV1,UV2,UV3" },
		{ "AutoCreateRefTerm", "Normals,UV0,UV1,UV2,UV3,VertexColors,Tangents" },
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09 *\x09""Create/replace a section for this procedural mesh component.\n\x09 *\x09@param\x09SectionIndex\x09\x09Index of the section to create or replace.\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 *\x09@param\x09Triangles\x09\x09\x09Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n\x09 *\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09""bCreateCollision\x09Indicates whether collision should be created for this section. This adds significant cost.\n\x09 */" },
		{ "DisplayName", "Create Mesh Section" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Create/replace a section for this procedural mesh component.\n@param  SectionIndex            Index of the section to create or replace.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n@param  bCreateCollision        Indicates whether collision should be created for this section. This adds significant cost." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViProceduralMeshComponent, nullptr, "CreateMeshSection_LinearColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::TetaViProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms), Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViProceduralMeshComponent_GetNumSections_Statics
	{
		struct TetaViProceduralMeshComponent_eventGetNumSections_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_GetNumSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventGetNumSections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViProceduralMeshComponent_GetNumSections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_GetNumSections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_GetNumSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Returns number of sections currently created for this component */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Returns number of sections currently created for this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_GetNumSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViProceduralMeshComponent, nullptr, "GetNumSections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViProceduralMeshComponent_GetNumSections_Statics::TetaViProceduralMeshComponent_eventGetNumSections_Parms), Z_Construct_UFunction_UTetaViProceduralMeshComponent_GetNumSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_GetNumSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_GetNumSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_GetNumSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViProceduralMeshComponent_GetNumSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViProceduralMeshComponent_GetNumSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics
	{
		struct TetaViProceduralMeshComponent_eventIsMeshSectionVisible_Parms
		{
			int32 SectionIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventIsMeshSectionVisible_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TetaViProceduralMeshComponent_eventIsMeshSectionVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TetaViProceduralMeshComponent_eventIsMeshSectionVisible_Parms), &Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Returns whether a particular section is currently visible */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Returns whether a particular section is currently visible" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViProceduralMeshComponent, nullptr, "IsMeshSectionVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics::TetaViProceduralMeshComponent_eventIsMeshSectionVisible_Parms), Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics
	{
		struct TetaViProceduralMeshComponent_eventSetMeshSectionVisible_Parms
		{
			int32 SectionIndex;
			bool bNewVisibility;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventSetMeshSectionVisible_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((TetaViProceduralMeshComponent_eventSetMeshSectionVisible_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TetaViProceduralMeshComponent_eventSetMeshSectionVisible_Parms), &Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Control visibility of a particular section */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Control visibility of a particular section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViProceduralMeshComponent, nullptr, "SetMeshSectionVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics::TetaViProceduralMeshComponent_eventSetMeshSectionVisible_Parms), Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics
	{
		struct TetaViProceduralMeshComponent_eventUpdateMeshSection_Parms
		{
			int32 SectionIndex;
			TArray<FVector3f> Vertices;
			TArray<FVector3f> Normals;
			TArray<FVector2f> UV0;
			TArray<FColor> VertexColors;
			TArray<FTetaViProcMeshTangent> Tangents;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventUpdateMeshSection_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventUpdateMeshSection_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventUpdateMeshSection_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Normals_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventUpdateMeshSection_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_UV0_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventUpdateMeshSection_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetaViProcMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 3814049566
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventUpdateMeshSection_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents_MetaData)) }; // 3814049566
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Normals,UV0,VertexColors,Tangents" },
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09 *\x09Updates a section of this procedural mesh component. This is faster than CreateMeshSection, but does not let you change topology. Collision info is also updated.\n\x09 *\x09This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 *\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Update Mesh Section' function which uses LinearColor instead." },
		{ "DisplayName", "Update Mesh Section FColor" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Updates a section of this procedural mesh component. This is faster than CreateMeshSection, but does not let you change topology. Collision info is also updated.\nThis function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViProceduralMeshComponent, nullptr, "UpdateMeshSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::TetaViProceduralMeshComponent_eventUpdateMeshSection_Parms), Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics
	{
		struct TetaViProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms
		{
			int32 SectionIndex;
			TArray<FVector3f> Vertices;
			TArray<FVector3f> Normals;
			TArray<FVector2f> UV0;
			TArray<FVector2f> UV1;
			TArray<FVector2f> UV2;
			TArray<FVector2f> UV3;
			TArray<FLinearColor> VertexColors;
			TArray<FTetaViProcMeshTangent> Tangents;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV2_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV3_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV3;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1_Inner = { "UV1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, UV1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2_Inner = { "UV2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, UV2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3_Inner = { "UV3", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, UV3), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetaViProcMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 3814049566
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaViProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents_MetaData)) }; // 3814049566
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "UV1,UV2,UV3" },
		{ "AutoCreateRefTerm", "Normals,UV0,UV1,UV2,UV3,VertexColors,Tangents" },
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09 *\x09Updates a section of this procedural mesh component. This is faster than CreateMeshSection, but does not let you change topology. Collision info is also updated.\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 *\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09 */" },
		{ "DisplayName", "Update Mesh Section" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Updates a section of this procedural mesh component. This is faster than CreateMeshSection, but does not let you change topology. Collision info is also updated.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTetaViProceduralMeshComponent, nullptr, "UpdateMeshSection_LinearColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::TetaViProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms), Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTetaViProceduralMeshComponent);
	UClass* Z_Construct_UClass_UTetaViProceduralMeshComponent_NoRegister()
	{
		return UTetaViProceduralMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseComplexAsSimpleCollision_MetaData[];
#endif
		static void NewProp_bUseComplexAsSimpleCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComplexAsSimpleCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncCooking_MetaData[];
#endif
		static void NewProp_bUseAsyncCooking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncCooking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcMeshBodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProcMeshBodySetup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProcMeshSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcMeshSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcMeshSections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionConvexElems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionConvexElems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionConvexElems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AsyncBodySetupQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsyncBodySetupQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AsyncBodySetupQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TetaViProceduralMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTetaViProceduralMeshComponent_AddCollisionConvexMesh, "AddCollisionConvexMesh" }, // 2327508352
		{ &Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearAllMeshSections, "ClearAllMeshSections" }, // 437370341
		{ &Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearCollisionConvexMeshes, "ClearCollisionConvexMeshes" }, // 306765289
		{ &Z_Construct_UFunction_UTetaViProceduralMeshComponent_ClearMeshSection, "ClearMeshSection" }, // 3078710822
		{ &Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection, "CreateMeshSection" }, // 3673784235
		{ &Z_Construct_UFunction_UTetaViProceduralMeshComponent_CreateMeshSection_LinearColor, "CreateMeshSection_LinearColor" }, // 736757525
		{ &Z_Construct_UFunction_UTetaViProceduralMeshComponent_GetNumSections, "GetNumSections" }, // 3486143602
		{ &Z_Construct_UFunction_UTetaViProceduralMeshComponent_IsMeshSectionVisible, "IsMeshSectionVisible" }, // 216830883
		{ &Z_Construct_UFunction_UTetaViProceduralMeshComponent_SetMeshSectionVisible, "SetMeshSectionVisible" }, // 1757593387
		{ &Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection, "UpdateMeshSection" }, // 3588530753
		{ &Z_Construct_UFunction_UTetaViProceduralMeshComponent_UpdateMeshSection_LinearColor, "UpdateMeshSection_LinearColor" }, // 1997317754
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n*\x09""Component that allows you to specify custom triangle mesh geometry\n*\x09""Beware! This feature is experimental and may be substantially changed in future releases.\n*/" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "TetaViProceduralMeshComponent.h" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry\nBeware! This feature is experimental and may be substantially changed in future releases." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "/** \n\x09 *\x09""Controls whether the complex (Per poly) geometry should be treated as 'simple' collision. \n\x09 *\x09Should be set to false if this component is going to be given simple collision and simulated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Controls whether the complex (Per poly) geometry should be treated as 'simple' collision.\nShould be set to false if this component is going to be given simple collision and simulated." },
	};
#endif
	void Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_SetBit(void* Obj)
	{
		((UTetaViProceduralMeshComponent*)Obj)->bUseComplexAsSimpleCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision = { "bUseComplexAsSimpleCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTetaViProceduralMeshComponent), &Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_bUseAsyncCooking_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "/**\n\x09*\x09""Controls whether the physics cooking should be done off the game thread. This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)\n\x09*/" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Controls whether the physics cooking should be done off the game thread. This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)" },
	};
#endif
	void Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit(void* Obj)
	{
		((UTetaViProceduralMeshComponent*)Obj)->bUseAsyncCooking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_bUseAsyncCooking = { "bUseAsyncCooking", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTetaViProceduralMeshComponent), &Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_bUseAsyncCooking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_bUseAsyncCooking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_ProcMeshBodySetup_MetaData[] = {
		{ "Comment", "/** Collision data */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Collision data" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_ProcMeshBodySetup = { "ProcMeshBodySetup", nullptr, (EPropertyFlags)0x0016000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetaViProceduralMeshComponent, ProcMeshBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_ProcMeshBodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_ProcMeshBodySetup_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_ProcMeshSections_Inner = { "ProcMeshSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetaViProcMeshSection, METADATA_PARAMS(nullptr, 0) }; // 2799470793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_ProcMeshSections_MetaData[] = {
		{ "Comment", "/** Array of sections of mesh */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Array of sections of mesh" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_ProcMeshSections = { "ProcMeshSections", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetaViProceduralMeshComponent, ProcMeshSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_ProcMeshSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_ProcMeshSections_MetaData)) }; // 2799470793
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_CollisionConvexElems_Inner = { "CollisionConvexElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKConvexElem, METADATA_PARAMS(nullptr, 0) }; // 3351838121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_CollisionConvexElems_MetaData[] = {
		{ "Comment", "/** Convex shapes used for simple collision */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Convex shapes used for simple collision" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_CollisionConvexElems = { "CollisionConvexElems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetaViProceduralMeshComponent, CollisionConvexElems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_CollisionConvexElems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_CollisionConvexElems_MetaData)) }; // 3351838121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_LocalBounds_MetaData[] = {
		{ "Comment", "/** Local space bounds of mesh */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Local space bounds of mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetaViProceduralMeshComponent, LocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_LocalBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_LocalBounds_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_AsyncBodySetupQueue_Inner = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_AsyncBodySetupQueue_MetaData[] = {
		{ "Comment", "/** Queue for async body setups that are being cooked */" },
		{ "ModuleRelativePath", "Public/TetaViProceduralMeshComponent.h" },
		{ "ToolTip", "Queue for async body setups that are being cooked" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_AsyncBodySetupQueue = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetaViProceduralMeshComponent, AsyncBodySetupQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_AsyncBodySetupQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_AsyncBodySetupQueue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_bUseAsyncCooking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_ProcMeshBodySetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_ProcMeshSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_ProcMeshSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_CollisionConvexElems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_CollisionConvexElems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_LocalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_AsyncBodySetupQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::NewProp_AsyncBodySetupQueue,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UTetaViProceduralMeshComponent, IInterface_CollisionDataProvider), false },  // 1866130202
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetaViProceduralMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::ClassParams = {
		&UTetaViProceduralMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetaViProceduralMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UTetaViProceduralMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetaViProceduralMeshComponent.OuterSingleton, Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTetaViProceduralMeshComponent.OuterSingleton;
	}
	template<> TETAVIPROCEDURALMESHCOMPONENT_API UClass* StaticClass<UTetaViProceduralMeshComponent>()
	{
		return UTetaViProceduralMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetaViProceduralMeshComponent);
	struct Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_Statics::ScriptStructInfo[] = {
		{ FTetaViProcMeshTangent::StaticStruct, Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics::NewStructOps, TEXT("TetaViProcMeshTangent"), &Z_Registration_Info_UScriptStruct_TetaViProcMeshTangent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetaViProcMeshTangent), 3814049566U) },
		{ FTetaViProcMeshVertex::StaticStruct, Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics::NewStructOps, TEXT("TetaViProcMeshVertex"), &Z_Registration_Info_UScriptStruct_TetaViProcMeshVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetaViProcMeshVertex), 685057300U) },
		{ FTetaViProcMeshSection::StaticStruct, Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics::NewStructOps, TEXT("TetaViProcMeshSection"), &Z_Registration_Info_UScriptStruct_TetaViProcMeshSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetaViProcMeshSection), 2799470793U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTetaViProceduralMeshComponent, UTetaViProceduralMeshComponent::StaticClass, TEXT("UTetaViProceduralMeshComponent"), &Z_Registration_Info_UClass_UTetaViProceduralMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetaViProceduralMeshComponent), 3679889437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_3740351269(TEXT("/Script/TetaViProceduralMeshComponent"),
		Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
