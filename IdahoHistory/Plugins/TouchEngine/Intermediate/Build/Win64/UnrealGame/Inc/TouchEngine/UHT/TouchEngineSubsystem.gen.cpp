// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/TouchEngineSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTouchEngineSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchEngineInfo_NoRegister();
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchEngineSubsystem();
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchEngineSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_TouchEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTouchEngineSubsystem ****************************************************
void UTouchEngineSubsystem::StaticRegisterNativesUTouchEngineSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTouchEngineSubsystem;
UClass* UTouchEngineSubsystem::GetPrivateStaticClass()
{
	using TClass = UTouchEngineSubsystem;
	if (!Z_Registration_Info_UClass_UTouchEngineSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TouchEngineSubsystem"),
			Z_Registration_Info_UClass_UTouchEngineSubsystem.InnerSingleton,
			StaticRegisterNativesUTouchEngineSubsystem,
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
	return Z_Registration_Info_UClass_UTouchEngineSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UTouchEngineSubsystem_NoRegister()
{
	return UTouchEngineSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTouchEngineSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Keeps a global list of loaded tox files. */" },
		{ "IncludePath", "Engine/TouchEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/Engine/TouchEngineSubsystem.h" },
		{ "ToolTip", "Keeps a global list of loaded tox files." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSupportedPixelFormats_MetaData[] = {
		{ "Comment", "/** List of Supported EPixelFormat */" },
		{ "ModuleRelativePath", "Public/Engine/TouchEngineSubsystem.h" },
		{ "ToolTip", "List of Supported EPixelFormat" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineForLoading_MetaData[] = {
		{ "Comment", "/** TouchEngine instance used to load items into the details panel */" },
		{ "ModuleRelativePath", "Public/Engine/TouchEngineSubsystem.h" },
		{ "ToolTip", "TouchEngine instance used to load items into the details panel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CachedSupportedPixelFormats_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CachedSupportedPixelFormats;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EngineForLoading;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchEngineSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTouchEngineSubsystem_Statics::NewProp_CachedSupportedPixelFormats_ElementProp = { "CachedSupportedPixelFormats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(0, nullptr) }; // 2051073252
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UTouchEngineSubsystem_Statics::NewProp_CachedSupportedPixelFormats = { "CachedSupportedPixelFormats", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineSubsystem, CachedSupportedPixelFormats), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSupportedPixelFormats_MetaData), NewProp_CachedSupportedPixelFormats_MetaData) }; // 2051073252
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTouchEngineSubsystem_Statics::NewProp_EngineForLoading = { "EngineForLoading", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineSubsystem, EngineForLoading), Z_Construct_UClass_UTouchEngineInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineForLoading_MetaData), NewProp_EngineForLoading_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTouchEngineSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineSubsystem_Statics::NewProp_CachedSupportedPixelFormats_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineSubsystem_Statics::NewProp_CachedSupportedPixelFormats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineSubsystem_Statics::NewProp_EngineForLoading,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchEngineSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTouchEngineSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchEngineSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchEngineSubsystem_Statics::ClassParams = {
	&UTouchEngineSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTouchEngineSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTouchEngineSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchEngineSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchEngineSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchEngineSubsystem()
{
	if (!Z_Registration_Info_UClass_UTouchEngineSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchEngineSubsystem.OuterSingleton, Z_Construct_UClass_UTouchEngineSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchEngineSubsystem.OuterSingleton;
}
UTouchEngineSubsystem::UTouchEngineSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchEngineSubsystem);
UTouchEngineSubsystem::~UTouchEngineSubsystem() {}
// ********** End Class UTouchEngineSubsystem ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineSubsystem_h__Script_TouchEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchEngineSubsystem, UTouchEngineSubsystem::StaticClass, TEXT("UTouchEngineSubsystem"), &Z_Registration_Info_UClass_UTouchEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchEngineSubsystem), 1833557596U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineSubsystem_h__Script_TouchEngine_1020903752(TEXT("/Script/TouchEngine"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineSubsystem_h__Script_TouchEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineSubsystem_h__Script_TouchEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
