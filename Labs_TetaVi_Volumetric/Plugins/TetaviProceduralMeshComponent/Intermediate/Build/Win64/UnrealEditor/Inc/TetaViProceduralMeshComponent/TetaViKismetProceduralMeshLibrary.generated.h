// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTetaViProceduralMeshComponent;
enum class ETetaViProcMeshSliceCapOption : uint8;
class UMaterialInterface;
struct FTetaViProcMeshTangent;
class UStaticMeshComponent;
class UStaticMesh;
#ifdef TETAVIPROCEDURALMESHCOMPONENT_TetaViKismetProceduralMeshLibrary_generated_h
#error "TetaViKismetProceduralMeshLibrary.generated.h already included, missing '#pragma once' in TetaViKismetProceduralMeshLibrary.h"
#endif
#define TETAVIPROCEDURALMESHCOMPONENT_TetaViKismetProceduralMeshLibrary_generated_h

#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_SPARSE_DATA
#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSliceProceduralMesh); \
	DECLARE_FUNCTION(execGetSectionFromProceduralMesh); \
	DECLARE_FUNCTION(execCopyProceduralMeshFromStaticMeshComponent); \
	DECLARE_FUNCTION(execGetSectionFromStaticMesh); \
	DECLARE_FUNCTION(execCreateGridMeshSplit); \
	DECLARE_FUNCTION(execCreateGridMeshWelded); \
	DECLARE_FUNCTION(execCreateGridMeshTriangles); \
	DECLARE_FUNCTION(execConvertQuadToTriangles); \
	DECLARE_FUNCTION(execCalculateTangentsForMesh); \
	DECLARE_FUNCTION(execGenerateBoxMesh);


#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSliceProceduralMesh); \
	DECLARE_FUNCTION(execGetSectionFromProceduralMesh); \
	DECLARE_FUNCTION(execCopyProceduralMeshFromStaticMeshComponent); \
	DECLARE_FUNCTION(execGetSectionFromStaticMesh); \
	DECLARE_FUNCTION(execCreateGridMeshSplit); \
	DECLARE_FUNCTION(execCreateGridMeshWelded); \
	DECLARE_FUNCTION(execCreateGridMeshTriangles); \
	DECLARE_FUNCTION(execConvertQuadToTriangles); \
	DECLARE_FUNCTION(execCalculateTangentsForMesh); \
	DECLARE_FUNCTION(execGenerateBoxMesh);


#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTetaViKismetProceduralMeshLibrary(); \
	friend struct Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UTetaViKismetProceduralMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TetaViProceduralMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UTetaViKismetProceduralMeshLibrary)


#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUTetaViKismetProceduralMeshLibrary(); \
	friend struct Z_Construct_UClass_UTetaViKismetProceduralMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UTetaViKismetProceduralMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TetaViProceduralMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UTetaViKismetProceduralMeshLibrary)


#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTetaViKismetProceduralMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTetaViKismetProceduralMeshLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTetaViKismetProceduralMeshLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTetaViKismetProceduralMeshLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTetaViKismetProceduralMeshLibrary(UTetaViKismetProceduralMeshLibrary&&); \
	NO_API UTetaViKismetProceduralMeshLibrary(const UTetaViKismetProceduralMeshLibrary&); \
public:


#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTetaViKismetProceduralMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTetaViKismetProceduralMeshLibrary(UTetaViKismetProceduralMeshLibrary&&); \
	NO_API UTetaViKismetProceduralMeshLibrary(const UTetaViKismetProceduralMeshLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTetaViKismetProceduralMeshLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTetaViKismetProceduralMeshLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTetaViKismetProceduralMeshLibrary)


#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_26_PROLOG
#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_SPARSE_DATA \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_RPC_WRAPPERS \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_INCLASS \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_SPARSE_DATA \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TETAVIPROCEDURALMESHCOMPONENT_API UClass* StaticClass<class UTetaViKismetProceduralMeshLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViKismetProceduralMeshLibrary_h


#define FOREACH_ENUM_ETETAVIPROCMESHSLICECAPOPTION(op) \
	op(ETetaViProcMeshSliceCapOption::NoCap) \
	op(ETetaViProcMeshSliceCapOption::CreateNewSectionForCap) \
	op(ETetaViProcMeshSliceCapOption::UseLastSectionForCap) 

enum class ETetaViProcMeshSliceCapOption : uint8;
template<> TETAVIPROCEDURALMESHCOMPONENT_API UEnum* StaticEnum<ETetaViProcMeshSliceCapOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
