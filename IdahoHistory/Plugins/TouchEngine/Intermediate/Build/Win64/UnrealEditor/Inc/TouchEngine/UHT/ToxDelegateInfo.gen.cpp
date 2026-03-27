// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/ToxDelegateInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeToxDelegateInfo() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FToxDelegateInfo();
UPackage* Z_Construct_UPackage__Script_TouchEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FToxDelegateInfo **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FToxDelegateInfo;
class UScriptStruct* FToxDelegateInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FToxDelegateInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FToxDelegateInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToxDelegateInfo, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("ToxDelegateInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FToxDelegateInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FToxDelegateInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Engine/ToxDelegateInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Engine/ToxDelegateInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToxDelegateInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FToxDelegateInfo_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToxDelegateInfo, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToxDelegateInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToxDelegateInfo_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToxDelegateInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToxDelegateInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	&NewStructOps,
	"ToxDelegateInfo",
	Z_Construct_UScriptStruct_FToxDelegateInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToxDelegateInfo_Statics::PropPointers),
	sizeof(FToxDelegateInfo),
	alignof(FToxDelegateInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToxDelegateInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FToxDelegateInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FToxDelegateInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FToxDelegateInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FToxDelegateInfo.InnerSingleton, Z_Construct_UScriptStruct_FToxDelegateInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FToxDelegateInfo.InnerSingleton;
}
// ********** End ScriptStruct FToxDelegateInfo ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_ToxDelegateInfo_h__Script_TouchEngine_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FToxDelegateInfo::StaticStruct, Z_Construct_UScriptStruct_FToxDelegateInfo_Statics::NewStructOps, TEXT("ToxDelegateInfo"), &Z_Registration_Info_UScriptStruct_FToxDelegateInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToxDelegateInfo), 2724841508U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_ToxDelegateInfo_h__Script_TouchEngine_1203590791(TEXT("/Script/TouchEngine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_ToxDelegateInfo_h__Script_TouchEngine_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_ToxDelegateInfo_h__Script_TouchEngine_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
