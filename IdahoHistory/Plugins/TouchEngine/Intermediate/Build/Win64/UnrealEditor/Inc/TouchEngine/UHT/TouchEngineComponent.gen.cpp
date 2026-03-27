// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/TouchEngineComponent.h"
#include "Blueprint/TouchEngineInputFrameData.h"
#include "Engine/Texture2D.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "TouchEngineDynamicVariableStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTouchEngineComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchEngineComponentBase();
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchEngineComponentBase_NoRegister();
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchEngineInfo_NoRegister();
TOUCHENGINE_API UClass* Z_Construct_UClass_UToxAsset_NoRegister();
TOUCHENGINE_API UEnum* Z_Construct_UEnum_TouchEngine_ECookFrameResult();
TOUCHENGINE_API UEnum* Z_Construct_UEnum_TouchEngine_ETouchEngineCookMode();
TOUCHENGINE_API UEnum* Z_Construct_UEnum_TouchEngine_ETouchEngineSendMode();
TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_BeginPlay__DelegateSignature();
TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_EndPlay__DelegateSignature();
TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature();
TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature();
TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature();
TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnToxLoaded__DelegateSignature();
TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnToxReset__DelegateSignature();
TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnToxStartedLoading__DelegateSignature();
TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnToxUnloaded__DelegateSignature();
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer();
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineInputFrameData();
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineOutputFrameData();
UPackage* Z_Construct_UPackage__Script_TouchEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnToxStartedLoading **************************************************
struct Z_Construct_UDelegateFunction_TouchEngine_OnToxStartedLoading__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TouchEngine_OnToxStartedLoading__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TouchEngine, nullptr, "OnToxStartedLoading__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TouchEngine_OnToxStartedLoading__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TouchEngine_OnToxStartedLoading__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnToxStartedLoading__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TouchEngine_OnToxStartedLoading__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnToxStartedLoading_DelegateWrapper(const FMulticastScriptDelegate& OnToxStartedLoading)
{
	OnToxStartedLoading.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnToxStartedLoading ****************************************************

// ********** Begin Delegate FOnToxLoaded **********************************************************
struct Z_Construct_UDelegateFunction_TouchEngine_OnToxLoaded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TouchEngine_OnToxLoaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TouchEngine, nullptr, "OnToxLoaded__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TouchEngine_OnToxLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TouchEngine_OnToxLoaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnToxLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TouchEngine_OnToxLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnToxLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnToxLoaded)
{
	OnToxLoaded.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnToxLoaded ************************************************************

// ********** Begin Delegate FOnToxReset ***********************************************************
struct Z_Construct_UDelegateFunction_TouchEngine_OnToxReset__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TouchEngine_OnToxReset__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TouchEngine, nullptr, "OnToxReset__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TouchEngine_OnToxReset__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TouchEngine_OnToxReset__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnToxReset__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TouchEngine_OnToxReset__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnToxReset_DelegateWrapper(const FMulticastScriptDelegate& OnToxReset)
{
	OnToxReset.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnToxReset *************************************************************

// ********** Begin Delegate FOnToxFailedLoad ******************************************************
struct Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature_Statics
{
	struct _Script_TouchEngine_eventOnToxFailedLoad_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TouchEngine_eventOnToxFailedLoad_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TouchEngine, nullptr, "OnToxFailedLoad__DelegateSignature", Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature_Statics::_Script_TouchEngine_eventOnToxFailedLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature_Statics::_Script_TouchEngine_eventOnToxFailedLoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnToxFailedLoad_DelegateWrapper(const FMulticastScriptDelegate& OnToxFailedLoad, const FString& ErrorMessage)
{
	struct _Script_TouchEngine_eventOnToxFailedLoad_Parms
	{
		FString ErrorMessage;
	};
	_Script_TouchEngine_eventOnToxFailedLoad_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	OnToxFailedLoad.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnToxFailedLoad ********************************************************

// ********** Begin Delegate FOnToxUnloaded ********************************************************
struct Z_Construct_UDelegateFunction_TouchEngine_OnToxUnloaded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TouchEngine_OnToxUnloaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TouchEngine, nullptr, "OnToxUnloaded__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TouchEngine_OnToxUnloaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TouchEngine_OnToxUnloaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnToxUnloaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TouchEngine_OnToxUnloaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnToxUnloaded_DelegateWrapper(const FMulticastScriptDelegate& OnToxUnloaded)
{
	OnToxUnloaded.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnToxUnloaded **********************************************************

// ********** Begin Delegate FOnStartFrame *********************************************************
struct Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature_Statics
{
	struct _Script_TouchEngine_eventOnStartFrame_Parms
	{
		FTouchEngineInputFrameData FrameData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TouchEngine_eventOnStartFrame_Parms, FrameData), Z_Construct_UScriptStruct_FTouchEngineInputFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameData_MetaData), NewProp_FrameData_MetaData) }; // 380905180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature_Statics::NewProp_FrameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TouchEngine, nullptr, "OnStartFrame__DelegateSignature", Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature_Statics::_Script_TouchEngine_eventOnStartFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature_Statics::_Script_TouchEngine_eventOnStartFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStartFrame_DelegateWrapper(const FMulticastScriptDelegate& OnStartFrame, FTouchEngineInputFrameData const& FrameData)
{
	struct _Script_TouchEngine_eventOnStartFrame_Parms
	{
		FTouchEngineInputFrameData FrameData;
	};
	_Script_TouchEngine_eventOnStartFrame_Parms Parms;
	Parms.FrameData=FrameData;
	OnStartFrame.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStartFrame ***********************************************************

// ********** Begin Delegate FOnEndFrame ***********************************************************
struct Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics
{
	struct _Script_TouchEngine_eventOnEndFrame_Parms
	{
		bool IsSuccessful;
		ECookFrameResult Result;
		FTouchEngineOutputFrameData FrameData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/* @param IsSuccessful Returns true if Result == Success and if FrameData.WasFrameDropped == false */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "@param IsSuccessful Returns true if Result == Success and if FrameData.WasFrameDropped == false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_IsSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccessful;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::NewProp_IsSuccessful_SetBit(void* Obj)
{
	((_Script_TouchEngine_eventOnEndFrame_Parms*)Obj)->IsSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::NewProp_IsSuccessful = { "IsSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TouchEngine_eventOnEndFrame_Parms), &Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::NewProp_IsSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TouchEngine_eventOnEndFrame_Parms, Result), Z_Construct_UEnum_TouchEngine_ECookFrameResult, METADATA_PARAMS(0, nullptr) }; // 1948482895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TouchEngine_eventOnEndFrame_Parms, FrameData), Z_Construct_UScriptStruct_FTouchEngineOutputFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameData_MetaData), NewProp_FrameData_MetaData) }; // 2736576443
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::NewProp_IsSuccessful,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::NewProp_FrameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TouchEngine, nullptr, "OnEndFrame__DelegateSignature", Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::_Script_TouchEngine_eventOnEndFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::_Script_TouchEngine_eventOnEndFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEndFrame_DelegateWrapper(const FMulticastScriptDelegate& OnEndFrame, bool IsSuccessful, ECookFrameResult Result, FTouchEngineOutputFrameData const& FrameData)
{
	struct _Script_TouchEngine_eventOnEndFrame_Parms
	{
		bool IsSuccessful;
		ECookFrameResult Result;
		FTouchEngineOutputFrameData FrameData;
	};
	_Script_TouchEngine_eventOnEndFrame_Parms Parms;
	Parms.IsSuccessful=IsSuccessful ? true : false;
	Parms.Result=Result;
	Parms.FrameData=FrameData;
	OnEndFrame.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnEndFrame *************************************************************

// ********** Begin Delegate FBeginPlay ************************************************************
struct Z_Construct_UDelegateFunction_TouchEngine_BeginPlay__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TouchEngine_BeginPlay__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TouchEngine, nullptr, "BeginPlay__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TouchEngine_BeginPlay__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TouchEngine_BeginPlay__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_TouchEngine_BeginPlay__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TouchEngine_BeginPlay__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBeginPlay_DelegateWrapper(const FMulticastScriptDelegate& BeginPlay)
{
	BeginPlay.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FBeginPlay **************************************************************

// ********** Begin Delegate FEndPlay **************************************************************
struct Z_Construct_UDelegateFunction_TouchEngine_EndPlay__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TouchEngine_EndPlay__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TouchEngine, nullptr, "EndPlay__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TouchEngine_EndPlay__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TouchEngine_EndPlay__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_TouchEngine_EndPlay__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TouchEngine_EndPlay__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEndPlay_DelegateWrapper(const FMulticastScriptDelegate& EndPlay)
{
	EndPlay.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FEndPlay ****************************************************************

// ********** Begin Enum ETouchEngineCookMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETouchEngineCookMode;
static UEnum* ETouchEngineCookMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETouchEngineCookMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETouchEngineCookMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TouchEngine_ETouchEngineCookMode, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("ETouchEngineCookMode"));
	}
	return Z_Registration_Info_UEnum_ETouchEngineCookMode.OuterSingleton;
}
template<> TOUCHENGINE_API UEnum* StaticEnum<ETouchEngineCookMode>()
{
	return ETouchEngineCookMode_StaticEnum();
}
struct Z_Construct_UEnum_TouchEngine_ETouchEngineCookMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The different cook modes the TouchEngine component can run in\n*/" },
		{ "DelayedSynchronized.DisplayName", "Delayed Synchronized" },
		{ "DelayedSynchronized.Name", "ETouchEngineCookMode::DelayedSynchronized" },
		{ "Independent.DisplayName", "Independent" },
		{ "Independent.Name", "ETouchEngineCookMode::Independent" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ETouchEngineCookMode::Max" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "Synchronized.DisplayName", "Synchronized" },
		{ "Synchronized.Name", "ETouchEngineCookMode::Synchronized" },
		{ "ToolTip", "* The different cook modes the TouchEngine component can run in" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETouchEngineCookMode::Synchronized", (int64)ETouchEngineCookMode::Synchronized },
		{ "ETouchEngineCookMode::DelayedSynchronized", (int64)ETouchEngineCookMode::DelayedSynchronized },
		{ "ETouchEngineCookMode::Independent", (int64)ETouchEngineCookMode::Independent },
		{ "ETouchEngineCookMode::Max", (int64)ETouchEngineCookMode::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TouchEngine_ETouchEngineCookMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	"ETouchEngineCookMode",
	"ETouchEngineCookMode",
	Z_Construct_UEnum_TouchEngine_ETouchEngineCookMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TouchEngine_ETouchEngineCookMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TouchEngine_ETouchEngineCookMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TouchEngine_ETouchEngineCookMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TouchEngine_ETouchEngineCookMode()
{
	if (!Z_Registration_Info_UEnum_ETouchEngineCookMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETouchEngineCookMode.InnerSingleton, Z_Construct_UEnum_TouchEngine_ETouchEngineCookMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETouchEngineCookMode.InnerSingleton;
}
// ********** End Enum ETouchEngineCookMode ********************************************************

// ********** Begin Enum ETouchEngineSendMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETouchEngineSendMode;
static UEnum* ETouchEngineSendMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETouchEngineSendMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETouchEngineSendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TouchEngine_ETouchEngineSendMode, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("ETouchEngineSendMode"));
	}
	return Z_Registration_Info_UEnum_ETouchEngineSendMode.OuterSingleton;
}
template<> TOUCHENGINE_API UEnum* StaticEnum<ETouchEngineSendMode>()
{
	return ETouchEngineSendMode_StaticEnum();
}
struct Z_Construct_UEnum_TouchEngine_ETouchEngineSendMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The different times the TouchEngine component will set / get variables from the TouchEngine instance. todo: to deprecate\n*/" },
		{ "EveryFrame.DisplayName", "Every Frame" },
		{ "EveryFrame.Name", "ETouchEngineSendMode::EveryFrame" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ETouchEngineSendMode::Max" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "OnAccess.DisplayName", "On Access" },
		{ "OnAccess.Name", "ETouchEngineSendMode::OnAccess" },
		{ "ToolTip", "* The different times the TouchEngine component will set / get variables from the TouchEngine instance. todo: to deprecate" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETouchEngineSendMode::EveryFrame", (int64)ETouchEngineSendMode::EveryFrame },
		{ "ETouchEngineSendMode::OnAccess", (int64)ETouchEngineSendMode::OnAccess },
		{ "ETouchEngineSendMode::Max", (int64)ETouchEngineSendMode::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TouchEngine_ETouchEngineSendMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	"ETouchEngineSendMode",
	"ETouchEngineSendMode",
	Z_Construct_UEnum_TouchEngine_ETouchEngineSendMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TouchEngine_ETouchEngineSendMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TouchEngine_ETouchEngineSendMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TouchEngine_ETouchEngineSendMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TouchEngine_ETouchEngineSendMode()
{
	if (!Z_Registration_Info_UEnum_ETouchEngineSendMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETouchEngineSendMode.InnerSingleton, Z_Construct_UEnum_TouchEngine_ETouchEngineSendMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETouchEngineSendMode.InnerSingleton;
}
// ********** End Enum ETouchEngineSendMode ********************************************************

// ********** Begin Class UTouchEngineComponentBase Function CanStart ******************************
struct Z_Construct_UFunction_UTouchEngineComponentBase_CanStart_Statics
{
	struct TouchEngineComponentBase_eventCanStart_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|States" },
		{ "Comment", "/** Should UI, player, or other means be allowed to start the TouchEngine */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Should UI, player, or other means be allowed to start the TouchEngine" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTouchEngineComponentBase_CanStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchEngineComponentBase_eventCanStart_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchEngineComponentBase_CanStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchEngineComponentBase_eventCanStart_Parms), &Z_Construct_UFunction_UTouchEngineComponentBase_CanStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchEngineComponentBase_CanStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineComponentBase_CanStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineComponentBase_CanStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchEngineComponentBase_CanStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchEngineComponentBase, nullptr, "CanStart", Z_Construct_UFunction_UTouchEngineComponentBase_CanStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineComponentBase_CanStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchEngineComponentBase_CanStart_Statics::TouchEngineComponentBase_eventCanStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineComponentBase_CanStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchEngineComponentBase_CanStart_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchEngineComponentBase_CanStart_Statics::TouchEngineComponentBase_eventCanStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchEngineComponentBase_CanStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchEngineComponentBase_CanStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchEngineComponentBase::execCanStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanStart();
	P_NATIVE_END;
}
// ********** End Class UTouchEngineComponentBase Function CanStart ********************************

// ********** Begin Class UTouchEngineComponentBase Function IsRunning *****************************
struct Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning_Statics
{
	struct TouchEngineComponentBase_eventIsRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|States" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchEngineComponentBase_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchEngineComponentBase_eventIsRunning_Parms), &Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchEngineComponentBase, nullptr, "IsRunning", Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning_Statics::TouchEngineComponentBase_eventIsRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning_Statics::TouchEngineComponentBase_eventIsRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchEngineComponentBase::execIsRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRunning();
	P_NATIVE_END;
}
// ********** End Class UTouchEngineComponentBase Function IsRunning *******************************

// ********** Begin Class UTouchEngineComponentBase Function KeepFrameTexture **********************
struct Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics
{
	struct TouchEngineComponentBase_eventKeepFrameTexture_Parms
	{
		UTexture2D* FrameTexture;
		UTexture2D* Texture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|TOP" },
		{ "Comment", "/**\n\x09 * Keeps the frame texture retrieved from Get TouchEngine Output.\n\x09 * When retrieving a TOP, Get TouchEngine Output returns a temporary texture that will go back into a texture pool after another value has been retrieved from TouchEngine, for performance.\n\x09 * If the texture needs to be kept alive for longer, this function needs to be called to ensure the frame texture is removed from the pool and will not be overriden.\n\x09 * @param FrameTexture The Texture retrieved by Get TouchEngine Output\n\x09 * @param Texture if successful, returns the texture made permanent (will be the same pointer as the Frame Texture, this is for ease of use in Blueprint), otherwise returns nullptr\n\x09 * @return true if successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Keeps the frame texture retrieved from Get TouchEngine Output.\nWhen retrieving a TOP, Get TouchEngine Output returns a temporary texture that will go back into a texture pool after another value has been retrieved from TouchEngine, for performance.\nIf the texture needs to be kept alive for longer, this function needs to be called to ensure the frame texture is removed from the pool and will not be overriden.\n@param FrameTexture The Texture retrieved by Get TouchEngine Output\n@param Texture if successful, returns the texture made permanent (will be the same pointer as the Frame Texture, this is for ease of use in Blueprint), otherwise returns nullptr\n@return true if successful" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrameTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::NewProp_FrameTexture = { "FrameTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineComponentBase_eventKeepFrameTexture_Parms, FrameTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineComponentBase_eventKeepFrameTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchEngineComponentBase_eventKeepFrameTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchEngineComponentBase_eventKeepFrameTexture_Parms), &Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::NewProp_FrameTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchEngineComponentBase, nullptr, "KeepFrameTexture", Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::TouchEngineComponentBase_eventKeepFrameTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::TouchEngineComponentBase_eventKeepFrameTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchEngineComponentBase::execKeepFrameTexture)
{
	P_GET_OBJECT(UTexture2D,Z_Param_FrameTexture);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->KeepFrameTexture(Z_Param_FrameTexture,P_ARG_GC_BARRIER(Z_Param_Out_Texture));
	P_NATIVE_END;
}
// ********** End Class UTouchEngineComponentBase Function KeepFrameTexture ************************

// ********** Begin Class UTouchEngineComponentBase Function LoadTox *******************************
struct Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox_Statics
{
	struct TouchEngineComponentBase_eventLoadTox_Parms
	{
		bool bForceReloadTox;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|States" },
		{ "Comment", "/** Reloads the currently loaded tox file */" },
		{ "CPP_Default_bForceReloadTox", "false" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Reloads the currently loaded tox file" },
	};
#endif // WITH_METADATA
	static void NewProp_bForceReloadTox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReloadTox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox_Statics::NewProp_bForceReloadTox_SetBit(void* Obj)
{
	((TouchEngineComponentBase_eventLoadTox_Parms*)Obj)->bForceReloadTox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox_Statics::NewProp_bForceReloadTox = { "bForceReloadTox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchEngineComponentBase_eventLoadTox_Parms), &Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox_Statics::NewProp_bForceReloadTox_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox_Statics::NewProp_bForceReloadTox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchEngineComponentBase, nullptr, "LoadTox", Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox_Statics::TouchEngineComponentBase_eventLoadTox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox_Statics::TouchEngineComponentBase_eventLoadTox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchEngineComponentBase::execLoadTox)
{
	P_GET_UBOOL(Z_Param_bForceReloadTox);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadTox(Z_Param_bForceReloadTox);
	P_NATIVE_END;
}
// ********** End Class UTouchEngineComponentBase Function LoadTox *********************************

// ********** Begin Class UTouchEngineComponentBase Function StartTouchEngine **********************
struct Z_Construct_UFunction_UTouchEngineComponentBase_StartTouchEngine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|States" },
		{ "Comment", "/** Starts and creates the TouchEngine instance */" },
		{ "DisplayName", "Start TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Starts and creates the TouchEngine instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchEngineComponentBase_StartTouchEngine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchEngineComponentBase, nullptr, "StartTouchEngine", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineComponentBase_StartTouchEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchEngineComponentBase_StartTouchEngine_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTouchEngineComponentBase_StartTouchEngine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchEngineComponentBase_StartTouchEngine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchEngineComponentBase::execStartTouchEngine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTouchEngine();
	P_NATIVE_END;
}
// ********** End Class UTouchEngineComponentBase Function StartTouchEngine ************************

// ********** Begin Class UTouchEngineComponentBase Function StopTouchEngine ***********************
struct Z_Construct_UFunction_UTouchEngineComponentBase_StopTouchEngine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|States" },
		{ "Comment", "/** Stops and deletes the TouchEngine instance */" },
		{ "DisplayName", "Stop TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Stops and deletes the TouchEngine instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchEngineComponentBase_StopTouchEngine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchEngineComponentBase, nullptr, "StopTouchEngine", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineComponentBase_StopTouchEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchEngineComponentBase_StopTouchEngine_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTouchEngineComponentBase_StopTouchEngine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchEngineComponentBase_StopTouchEngine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchEngineComponentBase::execStopTouchEngine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopTouchEngine();
	P_NATIVE_END;
}
// ********** End Class UTouchEngineComponentBase Function StopTouchEngine *************************

// ********** Begin Class UTouchEngineComponentBase ************************************************
void UTouchEngineComponentBase::StaticRegisterNativesUTouchEngineComponentBase()
{
	UClass* Class = UTouchEngineComponentBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanStart", &UTouchEngineComponentBase::execCanStart },
		{ "IsRunning", &UTouchEngineComponentBase::execIsRunning },
		{ "KeepFrameTexture", &UTouchEngineComponentBase::execKeepFrameTexture },
		{ "LoadTox", &UTouchEngineComponentBase::execLoadTox },
		{ "StartTouchEngine", &UTouchEngineComponentBase::execStartTouchEngine },
		{ "StopTouchEngine", &UTouchEngineComponentBase::execStopTouchEngine },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTouchEngineComponentBase;
UClass* UTouchEngineComponentBase::GetPrivateStaticClass()
{
	using TClass = UTouchEngineComponentBase;
	if (!Z_Registration_Info_UClass_UTouchEngineComponentBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TouchEngineComponentBase"),
			Z_Registration_Info_UClass_UTouchEngineComponentBase.InnerSingleton,
			StaticRegisterNativesUTouchEngineComponentBase,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UTouchEngineComponentBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UTouchEngineComponentBase_NoRegister()
{
	return UTouchEngineComponentBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTouchEngineComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Adds a TouchEngine instance to an object.\n*/" },
		{ "DisplayName", "TouchEngine Component" },
		{ "IncludePath", "Blueprint/TouchEngineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "* Adds a TouchEngine instance to an object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineInfo_MetaData[] = {
		{ "Comment", "/** Our TouchEngine Info */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Our TouchEngine Info" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToxFilePath_MetaData[] = {
		{ "Comment", "/** Path to the Tox File to load. It is relative to the content directory */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Path to the Tox File to load. It is relative to the content directory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToxAsset_MetaData[] = {
		{ "Category", "Tox File" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookMode_MetaData[] = {
		{ "Category", "Tox File" },
		{ "Comment", "/** Mode for component to run in */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Mode for component to run in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendMode_MetaData[] = {
		{ "Comment", "/** Mode for the component to set and get variables. Deprecated as a there shouldn't be a send mode and we should just  */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "There shouldn't be the need for a SendMode available to the user, the backend of the component will deal with this." },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Mode for the component to set and get variables. Deprecated as a there shouldn't be a send mode and we should just" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TEFrameRate_MetaData[] = {
		{ "Category", "Tox File" },
		{ "Comment", "/** TouchEngine framerate */" },
		{ "DisplayName", "TE Frame Rate" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "TouchEngine framerate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[] = {
		{ "Comment", "/** Multiplier applied to delta time before sending to TouchEngine. Deprecated as it shouldn't be set by the user */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "There shouldn't be the need for the TimeScale to be adjustable by the user, it is automatically computed by the backend." },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Multiplier applied to delta time before sending to TouchEngine. Deprecated as it shouldn't be set by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadOnBeginPlay_MetaData[] = {
		{ "Category", "Tox File" },
		{ "Comment", "/** Whether or not to start the TouchEngine immediately on begin play */" },
		{ "DisplayAfter", "bAllowRunningInEditor" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Whether or not to start the TouchEngine immediately on begin play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputBufferLimit_MetaData[] = {
		{ "Category", "Tox File" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * Sets the maximum number of cooks we will enqueue while another cook is processing by TouchEngine. This happens in DelayedSynchronized and Independent modes.\n\x09 * When the limit is reached, older cooks will be discarded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Sets the maximum number of cooks we will enqueue while another cook is processing by TouchEngine. This happens in DelayedSynchronized and Independent modes.\nWhen the limit is reached, older cooks will be discarded." },
		{ "UIMax", "30" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicVariables_MetaData[] = {
		{ "Category", "Tox File" },
		{ "Comment", "/** Container for all dynamic variables */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Container for all dynamic variables" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRunningInEditor_MetaData[] = {
		{ "Category", "Tox File" },
		{ "Comment", "/** When set to true, this TouchEngine Component will load and start running in the Unreal Editor. Does not work on packaged games. */" },
		{ "DisplayAfter", "ToxAsset" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "When set to true, this TouchEngine Component will load and start running in the Unreal Editor. Does not work on packaged games." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPauseOnEndFrame_MetaData[] = {
		{ "Category", "Tox File" },
		{ "Comment", "/** If set to true, the component will pause Unreal Editor every time every time a frame was done processing. Useful for debugging. Only has an effect in Editor */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "If set to true, the component will pause Unreal Editor every time every time a frame was done processing. Useful for debugging. Only has an effect in Editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExportedTexturePoolSize_MetaData[] = {
		{ "Category", "Tox File" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * To export textures to TouchEngine, we need to create temporary textures to copy into and share with TouchEngine.\n\x09 * For better performances, these temporary textures are returned to a texture pool once done to be reused.\n\x09 * This parameters sets how many textures can be kept in the pool.\n\x09 * This will only have an effect if changed before loading a tox file.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "To export textures to TouchEngine, we need to create temporary textures to copy into and share with TouchEngine.\nFor better performances, these temporary textures are returned to a texture pool once done to be reused.\nThis parameters sets how many textures can be kept in the pool.\nThis will only have an effect if changed before loading a tox file." },
		{ "UIMax", "30" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportedTexturePoolSize_MetaData[] = {
		{ "Category", "Tox File" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * To import textures from TouchEngine, we need to create Frame UTextures into which we will copy the textures returned by TouchEngine.\n\x09 * For better performances, these Frame UTextures are returned to a texture pool once done to be reused.\n\x09 * This parameters sets how many Frame UTextures can be kept in the pool.\n\x09 * This will only have an effect if changed before loading a tox file.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "To import textures from TouchEngine, we need to create Frame UTextures into which we will copy the textures returned by TouchEngine.\nFor better performances, these Frame UTextures are returned to a texture pool once done to be reused.\nThis parameters sets how many Frame UTextures can be kept in the pool.\nThis will only have an effect if changed before loading a tox file." },
		{ "UIMax", "30" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToxLoadTimeout_MetaData[] = {
		{ "Category", "Tox File" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/**\n\x09 * The number of second to wait for the tox file to load before cancelling.\n\x09 */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "The number of second to wait for the tox file to load before cancelling." },
		{ "UIMax", "60" },
		{ "UIMin", "5" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookTimeout_MetaData[] = {
		{ "Category", "Tox File" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/**\n\x09 * The number of second to wait for a cook before cancelling it.\n\x09 * If the cook is not done by that time, the component will raise a TouchEngineCookTimeout error and will continue running.\n\x09 * Be careful of not using too high values in Synchronized mode as we are stalling the GameThread, the application could become unusable\n\x09 */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "The number of second to wait for a cook before cancelling it.\nIf the cook is not done by that time, the component will raise a TouchEngineCookTimeout error and will continue running.\nBe careful of not using too high values in Synchronized mode as we are stalling the GameThread, the application could become unusable" },
		{ "UIMax", "0.500000" },
		{ "UIMin", "0.010000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnToxStartedLoading_MetaData[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/** Called when the TouchEngine instance starts to load the tox file */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Called when the TouchEngine instance starts to load the tox file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnToxLoaded_MetaData[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/** Called when the TouchEngine instance finished loading the tox file */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Called when the TouchEngine instance finished loading the tox file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnToxReset_MetaData[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/** Called when the TouchEngine instance is reset, and data is cleared */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Called when the TouchEngine instance is reset, and data is cleared" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnToxFailedLoad_MetaData[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/** Called when the TouchEngine instance fails to load the tox file */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Called when the TouchEngine instance fails to load the tox file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnToxUnloaded_MetaData[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/** Called when the TouchEngine instance unloads the tox file, it might be called multiple times and it is also called after OnToxFailedLoad */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Called when the TouchEngine instance unloads the tox file, it might be called multiple times and it is also called after OnToxFailedLoad" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartFrame_MetaData[] = {
		{ "Category", "Components|Parameters" },
		{ "Comment", "/** Called before sending the inputs to the TouchEngine */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Called before sending the inputs to the TouchEngine" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndFrame_MetaData[] = {
		{ "Category", "Components|Parameters" },
		{ "Comment", "/** Called after receiving the outputs from the TouchEngine */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Called after receiving the outputs from the TouchEngine" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomBeginPlay_MetaData[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/** Begins Play for the component that also fires in the Editor. */" },
		{ "DisplayName", "Begin Play" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "Begins Play for the component that also fires in the Editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomEndPlay_MetaData[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/** End Play for the component that also fires in the Editor. */" },
		{ "DisplayName", "End Play" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineComponent.h" },
		{ "ToolTip", "End Play for the component that also fires in the Editor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EngineInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToxFilePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToxAsset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CookMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CookMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SendMode;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TEFrameRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeScale;
	static void NewProp_LoadOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadOnBeginPlay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputBufferLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicVariables;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_EDITORONLY_DATA
	static void NewProp_bAllowRunningInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRunningInEditor;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bPauseOnEndFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseOnEndFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExportedTexturePoolSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ImportedTexturePoolSize;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ToxLoadTimeout;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CookTimeout;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnToxStartedLoading;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnToxLoaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnToxReset;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnToxFailedLoad;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnToxUnloaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartFrame;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndFrame;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CustomBeginPlay;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CustomEndPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTouchEngineComponentBase_CanStart, "CanStart" }, // 1208325451
		{ &Z_Construct_UFunction_UTouchEngineComponentBase_IsRunning, "IsRunning" }, // 259415511
		{ &Z_Construct_UFunction_UTouchEngineComponentBase_KeepFrameTexture, "KeepFrameTexture" }, // 2804462869
		{ &Z_Construct_UFunction_UTouchEngineComponentBase_LoadTox, "LoadTox" }, // 7995150
		{ &Z_Construct_UFunction_UTouchEngineComponentBase_StartTouchEngine, "StartTouchEngine" }, // 919057279
		{ &Z_Construct_UFunction_UTouchEngineComponentBase_StopTouchEngine, "StopTouchEngine" }, // 2904813518
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchEngineComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_EngineInfo = { "EngineInfo", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, EngineInfo), Z_Construct_UClass_UTouchEngineInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineInfo_MetaData), NewProp_EngineInfo_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_ToxFilePath = { "ToxFilePath", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, ToxFilePath_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToxFilePath_MetaData), NewProp_ToxFilePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_ToxAsset = { "ToxAsset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, ToxAsset), Z_Construct_UClass_UToxAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToxAsset_MetaData), NewProp_ToxAsset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_CookMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_CookMode = { "CookMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, CookMode), Z_Construct_UEnum_TouchEngine_ETouchEngineCookMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookMode_MetaData), NewProp_CookMode_MetaData) }; // 2575640884
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_SendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_SendMode = { "SendMode", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, SendMode_DEPRECATED), Z_Construct_UEnum_TouchEngine_ETouchEngineSendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendMode_MetaData), NewProp_SendMode_MetaData) }; // 2671646868
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_TEFrameRate = { "TEFrameRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, TEFrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TEFrameRate_MetaData), NewProp_TEFrameRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, TimeScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeScale_MetaData), NewProp_TimeScale_MetaData) };
void Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_LoadOnBeginPlay_SetBit(void* Obj)
{
	((UTouchEngineComponentBase*)Obj)->LoadOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_LoadOnBeginPlay = { "LoadOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTouchEngineComponentBase), &Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_LoadOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadOnBeginPlay_MetaData), NewProp_LoadOnBeginPlay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_InputBufferLimit = { "InputBufferLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, InputBufferLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputBufferLimit_MetaData), NewProp_InputBufferLimit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_DynamicVariables = { "DynamicVariables", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, DynamicVariables), Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicVariables_MetaData), NewProp_DynamicVariables_MetaData) }; // 2794840798
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_bAllowRunningInEditor_SetBit(void* Obj)
{
	((UTouchEngineComponentBase*)Obj)->bAllowRunningInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_bAllowRunningInEditor = { "bAllowRunningInEditor", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTouchEngineComponentBase), &Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_bAllowRunningInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowRunningInEditor_MetaData), NewProp_bAllowRunningInEditor_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_bPauseOnEndFrame_SetBit(void* Obj)
{
	((UTouchEngineComponentBase*)Obj)->bPauseOnEndFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_bPauseOnEndFrame = { "bPauseOnEndFrame", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTouchEngineComponentBase), &Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_bPauseOnEndFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPauseOnEndFrame_MetaData), NewProp_bPauseOnEndFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_ExportedTexturePoolSize = { "ExportedTexturePoolSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, ExportedTexturePoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExportedTexturePoolSize_MetaData), NewProp_ExportedTexturePoolSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_ImportedTexturePoolSize = { "ImportedTexturePoolSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, ImportedTexturePoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportedTexturePoolSize_MetaData), NewProp_ImportedTexturePoolSize_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_ToxLoadTimeout = { "ToxLoadTimeout", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, ToxLoadTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToxLoadTimeout_MetaData), NewProp_ToxLoadTimeout_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_CookTimeout = { "CookTimeout", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, CookTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookTimeout_MetaData), NewProp_CookTimeout_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_OnToxStartedLoading = { "OnToxStartedLoading", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, OnToxStartedLoading), Z_Construct_UDelegateFunction_TouchEngine_OnToxStartedLoading__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnToxStartedLoading_MetaData), NewProp_OnToxStartedLoading_MetaData) }; // 3055274530
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_OnToxLoaded = { "OnToxLoaded", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, OnToxLoaded), Z_Construct_UDelegateFunction_TouchEngine_OnToxLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnToxLoaded_MetaData), NewProp_OnToxLoaded_MetaData) }; // 2932788762
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_OnToxReset = { "OnToxReset", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, OnToxReset), Z_Construct_UDelegateFunction_TouchEngine_OnToxReset__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnToxReset_MetaData), NewProp_OnToxReset_MetaData) }; // 3838640426
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_OnToxFailedLoad = { "OnToxFailedLoad", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, OnToxFailedLoad), Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnToxFailedLoad_MetaData), NewProp_OnToxFailedLoad_MetaData) }; // 4274963260
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_OnToxUnloaded = { "OnToxUnloaded", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, OnToxUnloaded), Z_Construct_UDelegateFunction_TouchEngine_OnToxUnloaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnToxUnloaded_MetaData), NewProp_OnToxUnloaded_MetaData) }; // 3066179121
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_OnStartFrame = { "OnStartFrame", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, OnStartFrame), Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartFrame_MetaData), NewProp_OnStartFrame_MetaData) }; // 765114645
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_OnEndFrame = { "OnEndFrame", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, OnEndFrame), Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndFrame_MetaData), NewProp_OnEndFrame_MetaData) }; // 3054826776
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_CustomBeginPlay = { "CustomBeginPlay", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, CustomBeginPlay), Z_Construct_UDelegateFunction_TouchEngine_BeginPlay__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomBeginPlay_MetaData), NewProp_CustomBeginPlay_MetaData) }; // 2796340636
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_CustomEndPlay = { "CustomEndPlay", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineComponentBase, CustomEndPlay), Z_Construct_UDelegateFunction_TouchEngine_EndPlay__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomEndPlay_MetaData), NewProp_CustomEndPlay_MetaData) }; // 356886309
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTouchEngineComponentBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_EngineInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_ToxFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_ToxAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_CookMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_CookMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_SendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_SendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_TEFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_TimeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_LoadOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_InputBufferLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_DynamicVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_ErrorMessage,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_bAllowRunningInEditor,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_bPauseOnEndFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_ExportedTexturePoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_ImportedTexturePoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_ToxLoadTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_CookTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_OnToxStartedLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_OnToxLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_OnToxReset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_OnToxFailedLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_OnToxUnloaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_OnStartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_OnEndFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_CustomBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineComponentBase_Statics::NewProp_CustomEndPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchEngineComponentBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTouchEngineComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchEngineComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchEngineComponentBase_Statics::ClassParams = {
	&UTouchEngineComponentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTouchEngineComponentBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTouchEngineComponentBase_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchEngineComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchEngineComponentBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchEngineComponentBase()
{
	if (!Z_Registration_Info_UClass_UTouchEngineComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchEngineComponentBase.OuterSingleton, Z_Construct_UClass_UTouchEngineComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchEngineComponentBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchEngineComponentBase);
UTouchEngineComponentBase::~UTouchEngineComponentBase() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTouchEngineComponentBase)
// ********** End Class UTouchEngineComponentBase **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h__Script_TouchEngine_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETouchEngineCookMode_StaticEnum, TEXT("ETouchEngineCookMode"), &Z_Registration_Info_UEnum_ETouchEngineCookMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2575640884U) },
		{ ETouchEngineSendMode_StaticEnum, TEXT("ETouchEngineSendMode"), &Z_Registration_Info_UEnum_ETouchEngineSendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2671646868U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchEngineComponentBase, UTouchEngineComponentBase::StaticClass, TEXT("UTouchEngineComponentBase"), &Z_Registration_Info_UClass_UTouchEngineComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchEngineComponentBase), 2154533921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h__Script_TouchEngine_3093840737(TEXT("/Script/TouchEngine"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h__Script_TouchEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h__Script_TouchEngine_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h__Script_TouchEngine_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h__Script_TouchEngine_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
