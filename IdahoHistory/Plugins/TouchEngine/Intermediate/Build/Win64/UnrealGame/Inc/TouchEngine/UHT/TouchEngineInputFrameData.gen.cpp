// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/TouchEngineInputFrameData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTouchEngineInputFrameData() {}

// ********** Begin Cross Module References ********************************************************
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineInputFrameData();
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineOutputFrameData();
UPackage* Z_Construct_UPackage__Script_TouchEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTouchEngineInputFrameData ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTouchEngineInputFrameData;
class UScriptStruct* FTouchEngineInputFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTouchEngineInputFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTouchEngineInputFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchEngineInputFrameData, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("TouchEngineInputFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_FTouchEngineInputFrameData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTouchEngineInputFrameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineInputFrameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameID_MetaData[] = {
		{ "Category", "TouchEngine" },
		{ "Comment", "/** The frame identifier which is unique for this component until it is restarted */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineInputFrameData.h" },
		{ "ToolTip", "The frame identifier which is unique for this component until it is restarted" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTouchEngineInputFrameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTouchEngineInputFrameData_Statics::NewProp_FrameID = { "FrameID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineInputFrameData, FrameID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameID_MetaData), NewProp_FrameID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTouchEngineInputFrameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineInputFrameData_Statics::NewProp_FrameID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineInputFrameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTouchEngineInputFrameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	&NewStructOps,
	"TouchEngineInputFrameData",
	Z_Construct_UScriptStruct_FTouchEngineInputFrameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineInputFrameData_Statics::PropPointers),
	sizeof(FTouchEngineInputFrameData),
	alignof(FTouchEngineInputFrameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineInputFrameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTouchEngineInputFrameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineInputFrameData()
{
	if (!Z_Registration_Info_UScriptStruct_FTouchEngineInputFrameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTouchEngineInputFrameData.InnerSingleton, Z_Construct_UScriptStruct_FTouchEngineInputFrameData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTouchEngineInputFrameData.InnerSingleton;
}
// ********** End ScriptStruct FTouchEngineInputFrameData ******************************************

// ********** Begin ScriptStruct FTouchEngineOutputFrameData ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTouchEngineOutputFrameData;
class UScriptStruct* FTouchEngineOutputFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTouchEngineOutputFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTouchEngineOutputFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchEngineOutputFrameData, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("TouchEngineOutputFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_FTouchEngineOutputFrameData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineInputFrameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameID_MetaData[] = {
		{ "Category", "TouchEngine" },
		{ "Comment", "/** The frame identifier which is unique for this component until it is restarted */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineInputFrameData.h" },
		{ "ToolTip", "The frame identifier which is unique for this component until it is restarted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickLatency_MetaData[] = {
		{ "Category", "TouchEngine" },
		{ "Comment", "/** The number of ticks it took since On Start Frame was called  */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineInputFrameData.h" },
		{ "ToolTip", "The number of ticks it took since On Start Frame was called" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Latency_MetaData[] = {
		{ "Category", "TouchEngine" },
		{ "Comment", "/** The number of seconds it took since On Start Frame was called */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineInputFrameData.h" },
		{ "ToolTip", "The number of seconds it took since On Start Frame was called" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasFrameDropped_MetaData[] = {
		{ "Category", "TouchEngine" },
		{ "Comment", "/**\n\x09 * As TouchEngine can run at a different framerate than UE, it is possible that TouchEngine is not ready to process a new cook when we try to,\n\x09 * in which case the inputs would not be processed and the frame would be dropped, but the cook would still be successful even though the output values would have not changed.\n\x09 * */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineInputFrameData.h" },
		{ "ToolTip", "As TouchEngine can run at a different framerate than UE, it is possible that TouchEngine is not ready to process a new cook when we try to,\nin which case the inputs would not be processed and the frame would be dropped, but the cook would still be successful even though the output values would have not changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameLastUpdated_MetaData[] = {
		{ "Category", "TouchEngine" },
		{ "Comment", "/**\n\x09 * The frame identifier of the last frame we received updated data from TouchEngine.\n\x09 * As TouchEngine can run at a different framerate than UE, it is possible that TouchEngine is not ready to process a new cook when we try to,\n\x09 * in which case the inputs would not be processed and the frame would be dropped, but the cook would still be successful even though the output values would have not changed.\n\x09 * */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineInputFrameData.h" },
		{ "ToolTip", "The frame identifier of the last frame we received updated data from TouchEngine.\nAs TouchEngine can run at a different framerate than UE, it is possible that TouchEngine is not ready to process a new cook when we try to,\nin which case the inputs would not be processed and the frame would be dropped, but the cook would still be successful even though the output values would have not changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookStartTime_MetaData[] = {
		{ "Category", "TouchEngine" },
		{ "Comment", "/** The internal start_time of this Cook returned by TouchEngine. */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineInputFrameData.h" },
		{ "ToolTip", "The internal start_time of this Cook returned by TouchEngine." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookEndTime_MetaData[] = {
		{ "Category", "TouchEngine" },
		{ "Comment", "/** The internal end_time of this Cook returned by TouchEngine. */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineInputFrameData.h" },
		{ "ToolTip", "The internal end_time of this Cook returned by TouchEngine." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TickLatency;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Latency;
	static void NewProp_bWasFrameDropped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasFrameDropped;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CookStartTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CookEndTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTouchEngineOutputFrameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_FrameID = { "FrameID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineOutputFrameData, FrameID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameID_MetaData), NewProp_FrameID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_TickLatency = { "TickLatency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineOutputFrameData, TickLatency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickLatency_MetaData), NewProp_TickLatency_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_Latency = { "Latency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineOutputFrameData, Latency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Latency_MetaData), NewProp_Latency_MetaData) };
void Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_bWasFrameDropped_SetBit(void* Obj)
{
	((FTouchEngineOutputFrameData*)Obj)->bWasFrameDropped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_bWasFrameDropped = { "bWasFrameDropped", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTouchEngineOutputFrameData), &Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_bWasFrameDropped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasFrameDropped_MetaData), NewProp_bWasFrameDropped_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineOutputFrameData, FrameLastUpdated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameLastUpdated_MetaData), NewProp_FrameLastUpdated_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_CookStartTime = { "CookStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineOutputFrameData, CookStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookStartTime_MetaData), NewProp_CookStartTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_CookEndTime = { "CookEndTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineOutputFrameData, CookEndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookEndTime_MetaData), NewProp_CookEndTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_FrameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_TickLatency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_Latency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_bWasFrameDropped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_CookStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewProp_CookEndTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	&NewStructOps,
	"TouchEngineOutputFrameData",
	Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::PropPointers),
	sizeof(FTouchEngineOutputFrameData),
	alignof(FTouchEngineOutputFrameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineOutputFrameData()
{
	if (!Z_Registration_Info_UScriptStruct_FTouchEngineOutputFrameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTouchEngineOutputFrameData.InnerSingleton, Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTouchEngineOutputFrameData.InnerSingleton;
}
// ********** End ScriptStruct FTouchEngineOutputFrameData *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineInputFrameData_h__Script_TouchEngine_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTouchEngineInputFrameData::StaticStruct, Z_Construct_UScriptStruct_FTouchEngineInputFrameData_Statics::NewStructOps, TEXT("TouchEngineInputFrameData"), &Z_Registration_Info_UScriptStruct_FTouchEngineInputFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTouchEngineInputFrameData), 380905180U) },
		{ FTouchEngineOutputFrameData::StaticStruct, Z_Construct_UScriptStruct_FTouchEngineOutputFrameData_Statics::NewStructOps, TEXT("TouchEngineOutputFrameData"), &Z_Registration_Info_UScriptStruct_FTouchEngineOutputFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTouchEngineOutputFrameData), 2736576443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineInputFrameData_h__Script_TouchEngine_3391585826(TEXT("/Script/TouchEngine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineInputFrameData_h__Script_TouchEngine_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineInputFrameData_h__Script_TouchEngine_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
