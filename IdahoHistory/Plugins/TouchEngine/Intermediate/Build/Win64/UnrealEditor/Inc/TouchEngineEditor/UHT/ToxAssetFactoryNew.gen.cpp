// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToxAssetFactoryNew.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeToxAssetFactoryNew() {}

// ********** Begin Cross Module References ********************************************************
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UToxAssetFactoryNew();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UToxAssetFactoryNew_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_TouchEngineEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UToxAssetFactoryNew ******************************************************
void UToxAssetFactoryNew::StaticRegisterNativesUToxAssetFactoryNew()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UToxAssetFactoryNew;
UClass* UToxAssetFactoryNew::GetPrivateStaticClass()
{
	using TClass = UToxAssetFactoryNew;
	if (!Z_Registration_Info_UClass_UToxAssetFactoryNew.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ToxAssetFactoryNew"),
			Z_Registration_Info_UClass_UToxAssetFactoryNew.InnerSingleton,
			StaticRegisterNativesUToxAssetFactoryNew,
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
	return Z_Registration_Info_UClass_UToxAssetFactoryNew.InnerSingleton;
}
UClass* Z_Construct_UClass_UToxAssetFactoryNew_NoRegister()
{
	return UToxAssetFactoryNew::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UToxAssetFactoryNew_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factory/ToxAssetFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factory/ToxAssetFactoryNew.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToxAssetFactoryNew>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToxAssetFactoryNew_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToxAssetFactoryNew_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToxAssetFactoryNew_Statics::ClassParams = {
	&UToxAssetFactoryNew::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToxAssetFactoryNew_Statics::Class_MetaDataParams), Z_Construct_UClass_UToxAssetFactoryNew_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToxAssetFactoryNew()
{
	if (!Z_Registration_Info_UClass_UToxAssetFactoryNew.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToxAssetFactoryNew.OuterSingleton, Z_Construct_UClass_UToxAssetFactoryNew_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToxAssetFactoryNew.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToxAssetFactoryNew);
UToxAssetFactoryNew::~UToxAssetFactoryNew() {}
// ********** End Class UToxAssetFactoryNew ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactoryNew_h__Script_TouchEngineEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToxAssetFactoryNew, UToxAssetFactoryNew::StaticClass, TEXT("UToxAssetFactoryNew"), &Z_Registration_Info_UClass_UToxAssetFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToxAssetFactoryNew), 2696565056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactoryNew_h__Script_TouchEngineEditor_3154989396(TEXT("/Script/TouchEngineEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactoryNew_h__Script_TouchEngineEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactoryNew_h__Script_TouchEngineEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
