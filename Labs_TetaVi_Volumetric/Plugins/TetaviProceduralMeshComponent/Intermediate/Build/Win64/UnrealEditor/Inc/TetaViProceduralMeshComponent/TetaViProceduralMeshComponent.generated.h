// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FTetaViProcMeshTangent;
struct FColor;
#ifdef TETAVIPROCEDURALMESHCOMPONENT_TetaViProceduralMeshComponent_generated_h
#error "TetaViProceduralMeshComponent.generated.h already included, missing '#pragma once' in TetaViProceduralMeshComponent.h"
#endif
#define TETAVIPROCEDURALMESHCOMPONENT_TetaViProceduralMeshComponent_generated_h

#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTetaViProcMeshTangent_Statics; \
	TETAVIPROCEDURALMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


template<> TETAVIPROCEDURALMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FTetaViProcMeshTangent>();

#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTetaViProcMeshVertex_Statics; \
	TETAVIPROCEDURALMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


template<> TETAVIPROCEDURALMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FTetaViProcMeshVertex>();

#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTetaViProcMeshSection_Statics; \
	TETAVIPROCEDURALMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


template<> TETAVIPROCEDURALMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FTetaViProcMeshSection>();

#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_SPARSE_DATA
#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes); \
	DECLARE_FUNCTION(execAddCollisionConvexMesh); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execIsMeshSectionVisible); \
	DECLARE_FUNCTION(execSetMeshSectionVisible); \
	DECLARE_FUNCTION(execClearAllMeshSections); \
	DECLARE_FUNCTION(execClearMeshSection); \
	DECLARE_FUNCTION(execUpdateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execUpdateMeshSection); \
	DECLARE_FUNCTION(execCreateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execCreateMeshSection);


#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes); \
	DECLARE_FUNCTION(execAddCollisionConvexMesh); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execIsMeshSectionVisible); \
	DECLARE_FUNCTION(execSetMeshSectionVisible); \
	DECLARE_FUNCTION(execClearAllMeshSections); \
	DECLARE_FUNCTION(execClearMeshSection); \
	DECLARE_FUNCTION(execUpdateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execUpdateMeshSection); \
	DECLARE_FUNCTION(execCreateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execCreateMeshSection);


#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTetaViProceduralMeshComponent(); \
	friend struct Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UTetaViProceduralMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetaViProceduralMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UTetaViProceduralMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UTetaViProceduralMeshComponent*>(this); }


#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_INCLASS \
private: \
	static void StaticRegisterNativesUTetaViProceduralMeshComponent(); \
	friend struct Z_Construct_UClass_UTetaViProceduralMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UTetaViProceduralMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetaViProceduralMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UTetaViProceduralMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UTetaViProceduralMeshComponent*>(this); }


#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTetaViProceduralMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTetaViProceduralMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTetaViProceduralMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTetaViProceduralMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTetaViProceduralMeshComponent(UTetaViProceduralMeshComponent&&); \
	NO_API UTetaViProceduralMeshComponent(const UTetaViProceduralMeshComponent&); \
public:


#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTetaViProceduralMeshComponent(UTetaViProceduralMeshComponent&&); \
	NO_API UTetaViProceduralMeshComponent(const UTetaViProceduralMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTetaViProceduralMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTetaViProceduralMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTetaViProceduralMeshComponent)


#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_147_PROLOG
#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_SPARSE_DATA \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_RPC_WRAPPERS \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_INCLASS \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_SPARSE_DATA \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TETAVIPROCEDURALMESHCOMPONENT_API UClass* StaticClass<class UTetaViProceduralMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Plugins_TetaviProceduralMeshComponent_Source_TetaViProceduralMeshComponent_Public_TetaViProceduralMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
