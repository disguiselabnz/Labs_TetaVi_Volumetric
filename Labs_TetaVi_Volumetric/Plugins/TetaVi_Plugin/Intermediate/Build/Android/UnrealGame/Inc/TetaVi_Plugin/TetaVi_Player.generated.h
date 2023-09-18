// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
#ifdef TETAVI_PLUGIN_TetaVi_Player_generated_h
#error "TetaVi_Player.generated.h already included, missing '#pragma once' in TetaVi_Player.h"
#endif
#define TETAVI_PLUGIN_TetaVi_Player_generated_h

#define FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_33_DELEGATE \
static inline void FOnStreamReady_DelegateWrapper(const FMulticastScriptDelegate& OnStreamReady) \
{ \
	OnStreamReady.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_SPARSE_DATA
#define FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartPlay); \
	DECLARE_FUNCTION(execplay_tet_with_audio); \
	DECLARE_FUNCTION(execOpenStream); \
	DECLARE_FUNCTION(execonAudioPercent); \
	DECLARE_FUNCTION(execOnAudioFinished); \
	DECLARE_FUNCTION(execFrameChangeAudio); \
	DECLARE_FUNCTION(execFrameChange); \
	DECLARE_FUNCTION(execFrameChangeCapture); \
	DECLARE_FUNCTION(execgetCurrentFrameIndex); \
	DECLARE_FUNCTION(execgetFrameCount); \
	DECLARE_FUNCTION(execSetFrameIndex); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause);


#define FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartPlay); \
	DECLARE_FUNCTION(execplay_tet_with_audio); \
	DECLARE_FUNCTION(execOpenStream); \
	DECLARE_FUNCTION(execonAudioPercent); \
	DECLARE_FUNCTION(execOnAudioFinished); \
	DECLARE_FUNCTION(execFrameChangeAudio); \
	DECLARE_FUNCTION(execFrameChange); \
	DECLARE_FUNCTION(execFrameChangeCapture); \
	DECLARE_FUNCTION(execgetCurrentFrameIndex); \
	DECLARE_FUNCTION(execgetFrameCount); \
	DECLARE_FUNCTION(execSetFrameIndex); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause);


#define FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATetaVi_Player(); \
	friend struct Z_Construct_UClass_ATetaVi_Player_Statics; \
public: \
	DECLARE_CLASS(ATetaVi_Player, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetaVi_Plugin"), NO_API) \
	DECLARE_SERIALIZER(ATetaVi_Player)


#define FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_INCLASS \
private: \
	static void StaticRegisterNativesATetaVi_Player(); \
	friend struct Z_Construct_UClass_ATetaVi_Player_Statics; \
public: \
	DECLARE_CLASS(ATetaVi_Player, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetaVi_Plugin"), NO_API) \
	DECLARE_SERIALIZER(ATetaVi_Player)


#define FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATetaVi_Player(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATetaVi_Player) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATetaVi_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATetaVi_Player); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATetaVi_Player(ATetaVi_Player&&); \
	NO_API ATetaVi_Player(const ATetaVi_Player&); \
public:


#define FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATetaVi_Player(ATetaVi_Player&&); \
	NO_API ATetaVi_Player(const ATetaVi_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATetaVi_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATetaVi_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATetaVi_Player)


#define FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_24_PROLOG
#define FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_SPARSE_DATA \
	FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_RPC_WRAPPERS \
	FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_INCLASS \
	FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_SPARSE_DATA \
	FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_INCLASS_NO_PURE_DECLS \
	FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TETAVI_PLUGIN_API UClass* StaticClass<class ATetaVi_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
