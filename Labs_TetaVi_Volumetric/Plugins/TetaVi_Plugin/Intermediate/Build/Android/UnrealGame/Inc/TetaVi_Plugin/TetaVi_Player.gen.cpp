// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetaVi_Plugin/Public/TetaVi_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetaVi_Player() {}
// Cross Module References
	TETAVI_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_ATetaVi_Player_OnStreamReady__DelegateSignature();
	TETAVI_PLUGIN_API UClass* Z_Construct_UClass_ATetaVi_Player();
	TETAVI_PLUGIN_API UClass* Z_Construct_UClass_ATetaVi_Player_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetaVi_Plugin();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	TETAVIPROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FTetaViProcMeshTangent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ATetaVi_Player_OnStreamReady__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ATetaVi_Player_OnStreamReady__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// called when stream is opened and ready to start\n" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
		{ "ToolTip", "called when stream is opened and ready to start" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ATetaVi_Player_OnStreamReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetaVi_Player, nullptr, "OnStreamReady__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ATetaVi_Player_OnStreamReady__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATetaVi_Player_OnStreamReady__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ATetaVi_Player_OnStreamReady__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ATetaVi_Player_OnStreamReady__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ATetaVi_Player::execStartPlay)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_start_frame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPlay(Z_Param_start_frame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATetaVi_Player::execplay_tet_with_audio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->play_tet_with_audio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATetaVi_Player::execOpenStream)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenStream();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATetaVi_Player::execonAudioPercent)
	{
		P_GET_OBJECT(USoundWave,Z_Param_PlayingSoundWave);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onAudioPercent(Z_Param_PlayingSoundWave,Z_Param_PlaybackPercent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATetaVi_Player::execOnAudioFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAudioFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATetaVi_Player::execFrameChangeAudio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_percent_of_audio);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FrameChangeAudio(Z_Param_percent_of_audio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATetaVi_Player::execFrameChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_frame_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FrameChange(Z_Param_frame_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATetaVi_Player::execFrameChangeCapture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_frame_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FrameChangeCapture(Z_Param_frame_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATetaVi_Player::execgetCurrentFrameIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getCurrentFrameIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATetaVi_Player::execgetFrameCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getFrameCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATetaVi_Player::execSetFrameIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATetaVi_Player::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATetaVi_Player::execPause)
	{
		P_GET_UBOOL(Z_Param_pause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause(Z_Param_pause);
		P_NATIVE_END;
	}
	void ATetaVi_Player::StaticRegisterNativesATetaVi_Player()
	{
		UClass* Class = ATetaVi_Player::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FrameChange", &ATetaVi_Player::execFrameChange },
			{ "FrameChangeAudio", &ATetaVi_Player::execFrameChangeAudio },
			{ "FrameChangeCapture", &ATetaVi_Player::execFrameChangeCapture },
			{ "getCurrentFrameIndex", &ATetaVi_Player::execgetCurrentFrameIndex },
			{ "getFrameCount", &ATetaVi_Player::execgetFrameCount },
			{ "OnAudioFinished", &ATetaVi_Player::execOnAudioFinished },
			{ "onAudioPercent", &ATetaVi_Player::execonAudioPercent },
			{ "OpenStream", &ATetaVi_Player::execOpenStream },
			{ "Pause", &ATetaVi_Player::execPause },
			{ "play_tet_with_audio", &ATetaVi_Player::execplay_tet_with_audio },
			{ "SetFrameIndex", &ATetaVi_Player::execSetFrameIndex },
			{ "StartPlay", &ATetaVi_Player::execStartPlay },
			{ "Stop", &ATetaVi_Player::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics
	{
		struct TetaVi_Player_eventFrameChange_Parms
		{
			int32 frame_index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_frame_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics::NewProp_frame_index = { "frame_index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaVi_Player_eventFrameChange_Parms, frame_index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TetaVi_Player_eventFrameChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TetaVi_Player_eventFrameChange_Parms), &Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics::NewProp_frame_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "onFrameChange" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetaVi_Player, nullptr, "FrameChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics::TetaVi_Player_eventFrameChange_Parms), Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATetaVi_Player_FrameChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATetaVi_Player_FrameChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics
	{
		struct TetaVi_Player_eventFrameChangeAudio_Parms
		{
			float percent_of_audio;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_percent_of_audio;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics::NewProp_percent_of_audio = { "percent_of_audio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaVi_Player_eventFrameChangeAudio_Parms, percent_of_audio), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TetaVi_Player_eventFrameChangeAudio_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TetaVi_Player_eventFrameChangeAudio_Parms), &Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics::NewProp_percent_of_audio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "onFrameChangeAudio" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetaVi_Player, nullptr, "FrameChangeAudio", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics::TetaVi_Player_eventFrameChangeAudio_Parms), Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics
	{
		struct TetaVi_Player_eventFrameChangeCapture_Parms
		{
			int32 frame_index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_frame_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics::NewProp_frame_index = { "frame_index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaVi_Player_eventFrameChangeCapture_Parms, frame_index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TetaVi_Player_eventFrameChangeCapture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TetaVi_Player_eventFrameChangeCapture_Parms), &Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics::NewProp_frame_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "onFrameChangeCapture" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetaVi_Player, nullptr, "FrameChangeCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics::TetaVi_Player_eventFrameChangeCapture_Parms), Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATetaVi_Player_getCurrentFrameIndex_Statics
	{
		struct TetaVi_Player_eventgetCurrentFrameIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATetaVi_Player_getCurrentFrameIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaVi_Player_eventgetCurrentFrameIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATetaVi_Player_getCurrentFrameIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATetaVi_Player_getCurrentFrameIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetaVi_Player_getCurrentFrameIndex_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "getCurrentFrameIndex" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATetaVi_Player_getCurrentFrameIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetaVi_Player, nullptr, "getCurrentFrameIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATetaVi_Player_getCurrentFrameIndex_Statics::TetaVi_Player_eventgetCurrentFrameIndex_Parms), Z_Construct_UFunction_ATetaVi_Player_getCurrentFrameIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_getCurrentFrameIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATetaVi_Player_getCurrentFrameIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_getCurrentFrameIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATetaVi_Player_getCurrentFrameIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATetaVi_Player_getCurrentFrameIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATetaVi_Player_getFrameCount_Statics
	{
		struct TetaVi_Player_eventgetFrameCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATetaVi_Player_getFrameCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaVi_Player_eventgetFrameCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATetaVi_Player_getFrameCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATetaVi_Player_getFrameCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetaVi_Player_getFrameCount_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "getFrameCount" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATetaVi_Player_getFrameCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetaVi_Player, nullptr, "getFrameCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATetaVi_Player_getFrameCount_Statics::TetaVi_Player_eventgetFrameCount_Parms), Z_Construct_UFunction_ATetaVi_Player_getFrameCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_getFrameCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATetaVi_Player_getFrameCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_getFrameCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATetaVi_Player_getFrameCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATetaVi_Player_getFrameCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATetaVi_Player_OnAudioFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetaVi_Player_OnAudioFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATetaVi_Player_OnAudioFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetaVi_Player, nullptr, "OnAudioFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATetaVi_Player_OnAudioFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_OnAudioFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATetaVi_Player_OnAudioFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATetaVi_Player_OnAudioFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics
	{
		struct TetaVi_Player_eventonAudioPercent_Parms
		{
			const USoundWave* PlayingSoundWave;
			float PlaybackPercent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayingSoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayingSoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::NewProp_PlayingSoundWave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::NewProp_PlayingSoundWave = { "PlayingSoundWave", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaVi_Player_eventonAudioPercent_Parms, PlayingSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::NewProp_PlayingSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::NewProp_PlayingSoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::NewProp_PlaybackPercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::NewProp_PlaybackPercent = { "PlaybackPercent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaVi_Player_eventonAudioPercent_Parms, PlaybackPercent), METADATA_PARAMS(Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::NewProp_PlaybackPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::NewProp_PlaybackPercent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::NewProp_PlayingSoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::NewProp_PlaybackPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetaVi_Player, nullptr, "onAudioPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::TetaVi_Player_eventonAudioPercent_Parms), Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATetaVi_Player_onAudioPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATetaVi_Player_onAudioPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATetaVi_Player_OpenStream_Statics
	{
		struct TetaVi_Player_eventOpenStream_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATetaVi_Player_OpenStream_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TetaVi_Player_eventOpenStream_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATetaVi_Player_OpenStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TetaVi_Player_eventOpenStream_Parms), &Z_Construct_UFunction_ATetaVi_Player_OpenStream_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATetaVi_Player_OpenStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATetaVi_Player_OpenStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetaVi_Player_OpenStream_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATetaVi_Player_OpenStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetaVi_Player, nullptr, "OpenStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATetaVi_Player_OpenStream_Statics::TetaVi_Player_eventOpenStream_Parms), Z_Construct_UFunction_ATetaVi_Player_OpenStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_OpenStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATetaVi_Player_OpenStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_OpenStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATetaVi_Player_OpenStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATetaVi_Player_OpenStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATetaVi_Player_Pause_Statics
	{
		struct TetaVi_Player_eventPause_Parms
		{
			bool pause;
		};
		static void NewProp_pause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_pause;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATetaVi_Player_Pause_Statics::NewProp_pause_SetBit(void* Obj)
	{
		((TetaVi_Player_eventPause_Parms*)Obj)->pause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATetaVi_Player_Pause_Statics::NewProp_pause = { "pause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TetaVi_Player_eventPause_Parms), &Z_Construct_UFunction_ATetaVi_Player_Pause_Statics::NewProp_pause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATetaVi_Player_Pause_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATetaVi_Player_Pause_Statics::NewProp_pause,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetaVi_Player_Pause_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Pause" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATetaVi_Player_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetaVi_Player, nullptr, "Pause", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATetaVi_Player_Pause_Statics::TetaVi_Player_eventPause_Parms), Z_Construct_UFunction_ATetaVi_Player_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_Pause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATetaVi_Player_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATetaVi_Player_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATetaVi_Player_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio_Statics
	{
		struct TetaVi_Player_eventplay_tet_with_audio_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TetaVi_Player_eventplay_tet_with_audio_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TetaVi_Player_eventplay_tet_with_audio_Parms), &Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetaVi_Player, nullptr, "play_tet_with_audio", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio_Statics::TetaVi_Player_eventplay_tet_with_audio_Parms), Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATetaVi_Player_SetFrameIndex_Statics
	{
		struct TetaVi_Player_eventSetFrameIndex_Parms
		{
			int32 index;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATetaVi_Player_SetFrameIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaVi_Player_eventSetFrameIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATetaVi_Player_SetFrameIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATetaVi_Player_SetFrameIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetaVi_Player_SetFrameIndex_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "SetFrameIndex" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATetaVi_Player_SetFrameIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetaVi_Player, nullptr, "SetFrameIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATetaVi_Player_SetFrameIndex_Statics::TetaVi_Player_eventSetFrameIndex_Parms), Z_Construct_UFunction_ATetaVi_Player_SetFrameIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_SetFrameIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATetaVi_Player_SetFrameIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_SetFrameIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATetaVi_Player_SetFrameIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATetaVi_Player_SetFrameIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATetaVi_Player_StartPlay_Statics
	{
		struct TetaVi_Player_eventStartPlay_Parms
		{
			int32 start_frame;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_start_frame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATetaVi_Player_StartPlay_Statics::NewProp_start_frame = { "start_frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TetaVi_Player_eventStartPlay_Parms, start_frame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATetaVi_Player_StartPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATetaVi_Player_StartPlay_Statics::NewProp_start_frame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetaVi_Player_StartPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATetaVi_Player_StartPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetaVi_Player, nullptr, "StartPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATetaVi_Player_StartPlay_Statics::TetaVi_Player_eventStartPlay_Parms), Z_Construct_UFunction_ATetaVi_Player_StartPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_StartPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATetaVi_Player_StartPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_StartPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATetaVi_Player_StartPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATetaVi_Player_StartPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATetaVi_Player_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetaVi_Player_Stop_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Stop" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATetaVi_Player_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetaVi_Player, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATetaVi_Player_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetaVi_Player_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATetaVi_Player_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATetaVi_Player_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATetaVi_Player);
	UClass* Z_Construct_UClass_ATetaVi_Player_NoRegister()
	{
		return ATetaVi_Player::StaticClass();
	}
	struct Z_Construct_UClass_ATetaVi_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStreamReady_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStreamReady;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_normals;
		static const UECodeGen_Private::FIntPropertyParams NewProp_triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_uvs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uvs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_uvs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_tangents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tangents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialYUV_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterialYUV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_texY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_texUV_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texUV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_normalMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_normalMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sync_all_actors_utill_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_sync_all_actors_utill;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_starting_frame_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_starting_frame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_starting_frame_in_sec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_starting_frame_in_sec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stream_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_stream_url;
		static const UECodeGen_Private::FBytePropertyParams NewProp_audio_raw_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audio_raw_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_audio_raw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_curr_frame_idx_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_curr_frame_idx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audio_component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_audio_component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sound_wave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sound_wave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_first_frame_loaded_MetaData[];
#endif
		static void NewProp_first_frame_loaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_first_frame_loaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_loop_MetaData[];
#endif
		static void NewProp_loop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_loop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_fps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_play_on_awake_MetaData[];
#endif
		static void NewProp_play_on_awake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_play_on_awake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sequencer_mode_MetaData[];
#endif
		static void NewProp_sequencer_mode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_sequencer_mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sequencer_frame_to_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_sequencer_frame_to;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sequencer_frame_from_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_sequencer_frame_from;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_starting_frame_in_section_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_starting_frame_in_section;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gop_boost_MetaData[];
#endif
		static void NewProp_gop_boost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_gop_boost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_curr_gop_num_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_curr_gop_num;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_start_delay_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_start_delay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATetaVi_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetaVi_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATetaVi_Player_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATetaVi_Player_FrameChange, "FrameChange" }, // 661250076
		{ &Z_Construct_UFunction_ATetaVi_Player_FrameChangeAudio, "FrameChangeAudio" }, // 1037340535
		{ &Z_Construct_UFunction_ATetaVi_Player_FrameChangeCapture, "FrameChangeCapture" }, // 4033493657
		{ &Z_Construct_UFunction_ATetaVi_Player_getCurrentFrameIndex, "getCurrentFrameIndex" }, // 2220739134
		{ &Z_Construct_UFunction_ATetaVi_Player_getFrameCount, "getFrameCount" }, // 2985950236
		{ &Z_Construct_UFunction_ATetaVi_Player_OnAudioFinished, "OnAudioFinished" }, // 1972852608
		{ &Z_Construct_UFunction_ATetaVi_Player_onAudioPercent, "onAudioPercent" }, // 2574152183
		{ &Z_Construct_UDelegateFunction_ATetaVi_Player_OnStreamReady__DelegateSignature, "OnStreamReady__DelegateSignature" }, // 3749101057
		{ &Z_Construct_UFunction_ATetaVi_Player_OpenStream, "OpenStream" }, // 2599574350
		{ &Z_Construct_UFunction_ATetaVi_Player_Pause, "Pause" }, // 1389666000
		{ &Z_Construct_UFunction_ATetaVi_Player_play_tet_with_audio, "play_tet_with_audio" }, // 2220299165
		{ &Z_Construct_UFunction_ATetaVi_Player_SetFrameIndex, "SetFrameIndex" }, // 980223888
		{ &Z_Construct_UFunction_ATetaVi_Player_StartPlay, "StartPlay" }, // 1473218107
		{ &Z_Construct_UFunction_ATetaVi_Player_Stop, "Stop" }, // 211099728
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TetaVi_Player.h" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_OnStreamReady_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_OnStreamReady = { "OnStreamReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, OnStreamReady), Z_Construct_UDelegateFunction_ATetaVi_Player_OnStreamReady__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_OnStreamReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_OnStreamReady_MetaData)) }; // 3749101057
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_vertices_Inner = { "vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_vertices_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_vertices = { "vertices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_vertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_normals_Inner = { "normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_normals_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_normals = { "normals", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_normals_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_triangles_Inner = { "triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_triangles_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_triangles = { "triangles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_triangles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_uvs_Inner = { "uvs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_uvs_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_uvs = { "uvs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, uvs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_uvs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_uvs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_vertexColors_Inner = { "vertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_vertexColors_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_vertexColors = { "vertexColors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, vertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_vertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_vertexColors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_tangents_Inner = { "tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetaViProcMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 3814049566
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_tangents_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_tangents = { "tangents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_tangents_MetaData)) }; // 3814049566
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "TetaVi_Player" },
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, EditAnywhere)\n//\x09UMaterialInstanceConstant* MaterialYUV;\n" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere)\n       UMaterialInstanceConstant* MaterialYUV;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_DynamicMaterialYUV_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_DynamicMaterialYUV = { "DynamicMaterialYUV", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, DynamicMaterialYUV), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_DynamicMaterialYUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_DynamicMaterialYUV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_texY_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_texY = { "texY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, texY), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_texY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_texY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_texUV_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_texUV = { "texUV", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, texUV), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_texUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_texUV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_normalMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_normalMap = { "normalMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, normalMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_normalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_normalMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sync_all_actors_utill_MetaData[] = {
		{ "Category", "TetaVi_Player" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sync_all_actors_utill = { "sync_all_actors_utill", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, sync_all_actors_utill), METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sync_all_actors_utill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sync_all_actors_utill_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_starting_frame_MetaData[] = {
		{ "Category", "TetaVi_Player" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_starting_frame = { "starting_frame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, starting_frame), METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_starting_frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_starting_frame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_starting_frame_in_sec_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_starting_frame_in_sec = { "starting_frame_in_sec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, starting_frame_in_sec), METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_starting_frame_in_sec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_starting_frame_in_sec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_tetPath_MetaData[] = {
		{ "Category", "TetaVi_Player" },
		{ "DisplayPriority", "1" },
		{ "FilePathFilter", "tet" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_tetPath = { "tetPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, tetPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_tetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_tetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_stream_url_MetaData[] = {
		{ "Category", "TetaVi_Player" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_stream_url = { "stream_url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, stream_url), METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_stream_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_stream_url_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_audio_raw_Inner = { "audio_raw", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_audio_raw_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_audio_raw = { "audio_raw", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, audio_raw), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_audio_raw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_audio_raw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_curr_frame_idx_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_curr_frame_idx = { "curr_frame_idx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, curr_frame_idx), METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_curr_frame_idx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_curr_frame_idx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_audio_component_MetaData[] = {
		{ "Category", "TetaVi_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_audio_component = { "audio_component", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, audio_component), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_audio_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_audio_component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sound_wave_MetaData[] = {
		{ "Category", "TetaVi_Player" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sound_wave = { "sound_wave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, sound_wave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sound_wave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sound_wave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_first_frame_loaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	void Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_first_frame_loaded_SetBit(void* Obj)
	{
		((ATetaVi_Player*)Obj)->first_frame_loaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_first_frame_loaded = { "first_frame_loaded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetaVi_Player), &Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_first_frame_loaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_first_frame_loaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_first_frame_loaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_loop_MetaData[] = {
		{ "Category", "TetaVi_Player" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	void Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_loop_SetBit(void* Obj)
	{
		((ATetaVi_Player*)Obj)->loop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_loop = { "loop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetaVi_Player), &Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_loop_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_loop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_loop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_fps_MetaData[] = {
		{ "Category", "TetaVi_Player" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_fps = { "fps", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, fps), METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_fps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_fps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_play_on_awake_MetaData[] = {
		{ "Category", "TetaVi_Player" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	void Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_play_on_awake_SetBit(void* Obj)
	{
		((ATetaVi_Player*)Obj)->play_on_awake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_play_on_awake = { "play_on_awake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetaVi_Player), &Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_play_on_awake_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_play_on_awake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_play_on_awake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_mode_MetaData[] = {
		{ "Category", "TetaVi_Player" },
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	void Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_mode_SetBit(void* Obj)
	{
		((ATetaVi_Player*)Obj)->sequencer_mode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_mode = { "sequencer_mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetaVi_Player), &Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_mode_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_mode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_frame_to_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_frame_to = { "sequencer_frame_to", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, sequencer_frame_to), METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_frame_to_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_frame_to_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_frame_from_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_frame_from = { "sequencer_frame_from", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, sequencer_frame_from), METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_frame_from_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_frame_from_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_starting_frame_in_section_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_starting_frame_in_section = { "starting_frame_in_section", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, starting_frame_in_section), METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_starting_frame_in_section_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_starting_frame_in_section_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_gop_boost_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	void Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_gop_boost_SetBit(void* Obj)
	{
		((ATetaVi_Player*)Obj)->gop_boost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_gop_boost = { "gop_boost", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetaVi_Player), &Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_gop_boost_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_gop_boost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_gop_boost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_curr_gop_num_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_curr_gop_num = { "curr_gop_num", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, curr_gop_num), METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_curr_gop_num_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_curr_gop_num_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_start_delay_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetaVi_Player.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_start_delay = { "start_delay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetaVi_Player, start_delay), METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_start_delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_start_delay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATetaVi_Player_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_OnStreamReady,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_uvs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_uvs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_vertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_vertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_tangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_DynamicMaterialYUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_texY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_texUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_normalMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sync_all_actors_utill,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_starting_frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_starting_frame_in_sec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_tetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_stream_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_audio_raw_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_audio_raw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_curr_frame_idx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_audio_component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sound_wave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_first_frame_loaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_loop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_fps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_play_on_awake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_frame_to,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_sequencer_frame_from,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_starting_frame_in_section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_gop_boost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_curr_gop_num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetaVi_Player_Statics::NewProp_start_delay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATetaVi_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATetaVi_Player>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATetaVi_Player_Statics::ClassParams = {
		&ATetaVi_Player::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATetaVi_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATetaVi_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATetaVi_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATetaVi_Player()
	{
		if (!Z_Registration_Info_UClass_ATetaVi_Player.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATetaVi_Player.OuterSingleton, Z_Construct_UClass_ATetaVi_Player_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATetaVi_Player.OuterSingleton;
	}
	template<> TETAVI_PLUGIN_API UClass* StaticClass<ATetaVi_Player>()
	{
		return ATetaVi_Player::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATetaVi_Player);
	struct Z_CompiledInDeferFile_FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATetaVi_Player, ATetaVi_Player::StaticClass, TEXT("ATetaVi_Player"), &Z_Registration_Info_UClass_ATetaVi_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATetaVi_Player), 3366926549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_1679177082(TEXT("/Script/TetaVi_Plugin"),
		Z_CompiledInDeferFile_FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject3_Plugins_TetaVi_Plugin_Source_TetaVi_Plugin_Public_TetaVi_Player_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
