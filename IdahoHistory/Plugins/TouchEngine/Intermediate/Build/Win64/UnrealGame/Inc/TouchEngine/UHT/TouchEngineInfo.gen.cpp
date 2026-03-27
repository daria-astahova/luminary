// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/TouchEngineInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTouchEngineInfo() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchEngineInfo();
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchEngineInfo_NoRegister();
UPackage* Z_Construct_UPackage__Script_TouchEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTouchEngineInfo *********************************************************
void UTouchEngineInfo::StaticRegisterNativesUTouchEngineInfo()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTouchEngineInfo;
UClass* UTouchEngineInfo::GetPrivateStaticClass()
{
	using TClass = UTouchEngineInfo;
	if (!Z_Registration_Info_UClass_UTouchEngineInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TouchEngineInfo"),
			Z_Registration_Info_UClass_UTouchEngineInfo.InnerSingleton,
			StaticRegisterNativesUTouchEngineInfo,
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
	return Z_Registration_Info_UClass_UTouchEngineInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UTouchEngineInfo_NoRegister()
{
	return UTouchEngineInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTouchEngineInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "TouchEngine" },
		{ "Comment", "/*\n * Interface to handle the TouchEngine instance\n */" },
		{ "DisplayName", "TouchEngineInfo Instance" },
		{ "IncludePath", "Engine/TouchEngineInfo.h" },
		{ "ModuleRelativePath", "Public/Engine/TouchEngineInfo.h" },
		{ "ToolTip", "* Interface to handle the TouchEngine instance" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchEngineInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTouchEngineInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchEngineInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchEngineInfo_Statics::ClassParams = {
	&UTouchEngineInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchEngineInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchEngineInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchEngineInfo()
{
	if (!Z_Registration_Info_UClass_UTouchEngineInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchEngineInfo.OuterSingleton, Z_Construct_UClass_UTouchEngineInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchEngineInfo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchEngineInfo);
UTouchEngineInfo::~UTouchEngineInfo() {}
// ********** End Class UTouchEngineInfo ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineInfo_h__Script_TouchEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchEngineInfo, UTouchEngineInfo::StaticClass, TEXT("UTouchEngineInfo"), &Z_Registration_Info_UClass_UTouchEngineInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchEngineInfo), 3033659457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineInfo_h__Script_TouchEngine_1734883098(TEXT("/Script/TouchEngine"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineInfo_h__Script_TouchEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineInfo_h__Script_TouchEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
