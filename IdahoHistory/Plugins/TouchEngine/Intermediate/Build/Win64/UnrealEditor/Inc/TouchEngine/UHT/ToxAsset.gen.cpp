// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToxAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeToxAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TOUCHENGINE_API UClass* Z_Construct_UClass_UToxAsset();
TOUCHENGINE_API UClass* Z_Construct_UClass_UToxAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_TouchEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UToxAsset Function GetAbsoluteFilePath ***********************************
struct Z_Construct_UFunction_UToxAsset_GetAbsoluteFilePath_Statics
{
	struct ToxAsset_eventGetAbsoluteFilePath_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Public/ToxAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UToxAsset_GetAbsoluteFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToxAsset_eventGetAbsoluteFilePath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToxAsset_GetAbsoluteFilePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToxAsset_GetAbsoluteFilePath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToxAsset_GetAbsoluteFilePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToxAsset_GetAbsoluteFilePath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UToxAsset, nullptr, "GetAbsoluteFilePath", Z_Construct_UFunction_UToxAsset_GetAbsoluteFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToxAsset_GetAbsoluteFilePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToxAsset_GetAbsoluteFilePath_Statics::ToxAsset_eventGetAbsoluteFilePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToxAsset_GetAbsoluteFilePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToxAsset_GetAbsoluteFilePath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UToxAsset_GetAbsoluteFilePath_Statics::ToxAsset_eventGetAbsoluteFilePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToxAsset_GetAbsoluteFilePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToxAsset_GetAbsoluteFilePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToxAsset::execGetAbsoluteFilePath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAbsoluteFilePath();
	P_NATIVE_END;
}
// ********** End Class UToxAsset Function GetAbsoluteFilePath *************************************

// ********** Begin Class UToxAsset Function GetRelativeFilePath ***********************************
struct Z_Construct_UFunction_UToxAsset_GetRelativeFilePath_Statics
{
	struct ToxAsset_eventGetRelativeFilePath_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Public/ToxAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UToxAsset_GetRelativeFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToxAsset_eventGetRelativeFilePath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToxAsset_GetRelativeFilePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToxAsset_GetRelativeFilePath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToxAsset_GetRelativeFilePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToxAsset_GetRelativeFilePath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UToxAsset, nullptr, "GetRelativeFilePath", Z_Construct_UFunction_UToxAsset_GetRelativeFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToxAsset_GetRelativeFilePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToxAsset_GetRelativeFilePath_Statics::ToxAsset_eventGetRelativeFilePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToxAsset_GetRelativeFilePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToxAsset_GetRelativeFilePath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UToxAsset_GetRelativeFilePath_Statics::ToxAsset_eventGetRelativeFilePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToxAsset_GetRelativeFilePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToxAsset_GetRelativeFilePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToxAsset::execGetRelativeFilePath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetRelativeFilePath();
	P_NATIVE_END;
}
// ********** End Class UToxAsset Function GetRelativeFilePath *************************************

// ********** Begin Class UToxAsset Function SetFilePath *******************************************
struct Z_Construct_UFunction_UToxAsset_SetFilePath_Statics
{
	struct ToxAsset_eventSetFilePath_Parms
	{
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Public/ToxAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UToxAsset_SetFilePath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToxAsset_eventSetFilePath_Parms, InPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToxAsset_SetFilePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToxAsset_SetFilePath_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToxAsset_SetFilePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToxAsset_SetFilePath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UToxAsset, nullptr, "SetFilePath", Z_Construct_UFunction_UToxAsset_SetFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToxAsset_SetFilePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToxAsset_SetFilePath_Statics::ToxAsset_eventSetFilePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToxAsset_SetFilePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToxAsset_SetFilePath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UToxAsset_SetFilePath_Statics::ToxAsset_eventSetFilePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToxAsset_SetFilePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToxAsset_SetFilePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToxAsset::execSetFilePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilePath(Z_Param_InPath);
	P_NATIVE_END;
}
// ********** End Class UToxAsset Function SetFilePath *********************************************

// ********** Begin Class UToxAsset ****************************************************************
void UToxAsset::StaticRegisterNativesUToxAsset()
{
	UClass* Class = UToxAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAbsoluteFilePath", &UToxAsset::execGetAbsoluteFilePath },
		{ "GetRelativeFilePath", &UToxAsset::execGetRelativeFilePath },
		{ "SetFilePath", &UToxAsset::execSetFilePath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UToxAsset;
UClass* UToxAsset::GetPrivateStaticClass()
{
	using TClass = UToxAsset;
	if (!Z_Registration_Info_UClass_UToxAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ToxAsset"),
			Z_Registration_Info_UClass_UToxAsset.InnerSingleton,
			StaticRegisterNativesUToxAsset,
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
	return Z_Registration_Info_UClass_UToxAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UToxAsset_NoRegister()
{
	return UToxAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UToxAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ToxAsset.h" },
		{ "ModuleRelativePath", "Public/ToxAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "BlueprintGetter", "GetRelativeFilePath" },
		{ "BlueprintSetter", "SetFilePath" },
		{ "Category", "ImportSettings" },
		{ "Comment", "/*\n\x09 * File path to the tox file.\n\x09* This is relative to the project directory for Tox files located within the project's Content folder\n\x09* For external Tox files (located outside the Content folder) this is an absolute path.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ToxAsset.h" },
		{ "ToolTip", "* File path to the tox file.\n* This is relative to the project directory for Tox files located within the project's Content folder\n* For external Tox files (located outside the Content folder) this is an absolute path." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToxAsset_GetAbsoluteFilePath, "GetAbsoluteFilePath" }, // 3271175514
		{ &Z_Construct_UFunction_UToxAsset_GetRelativeFilePath, "GetRelativeFilePath" }, // 2350482296
		{ &Z_Construct_UFunction_UToxAsset_SetFilePath, "SetFilePath" }, // 893276681
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToxAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UToxAsset_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToxAsset, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToxAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToxAsset_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToxAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UToxAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToxAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToxAsset_Statics::ClassParams = {
	&UToxAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UToxAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UToxAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToxAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UToxAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToxAsset()
{
	if (!Z_Registration_Info_UClass_UToxAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToxAsset.OuterSingleton, Z_Construct_UClass_UToxAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToxAsset.OuterSingleton;
}
UToxAsset::UToxAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToxAsset);
UToxAsset::~UToxAsset() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UToxAsset)
// ********** End Class UToxAsset ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_ToxAsset_h__Script_TouchEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToxAsset, UToxAsset::StaticClass, TEXT("UToxAsset"), &Z_Registration_Info_UClass_UToxAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToxAsset), 3774795677U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_ToxAsset_h__Script_TouchEngine_3426553074(TEXT("/Script/TouchEngine"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_ToxAsset_h__Script_TouchEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_ToxAsset_h__Script_TouchEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
