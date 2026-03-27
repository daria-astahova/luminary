// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToxAssetFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeToxAssetFactory() {}

// ********** Begin Cross Module References ********************************************************
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UToxAssetFactory();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UToxAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_TouchEngineEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UToxAssetFactory *********************************************************
void UToxAssetFactory::StaticRegisterNativesUToxAssetFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UToxAssetFactory;
UClass* UToxAssetFactory::GetPrivateStaticClass()
{
	using TClass = UToxAssetFactory;
	if (!Z_Registration_Info_UClass_UToxAssetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ToxAssetFactory"),
			Z_Registration_Info_UClass_UToxAssetFactory.InnerSingleton,
			StaticRegisterNativesUToxAssetFactory,
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
	return Z_Registration_Info_UClass_UToxAssetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UToxAssetFactory_NoRegister()
{
	return UToxAssetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UToxAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factory/ToxAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factory/ToxAssetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToxAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToxAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToxAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToxAssetFactory_Statics::ClassParams = {
	&UToxAssetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToxAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UToxAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToxAssetFactory()
{
	if (!Z_Registration_Info_UClass_UToxAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToxAssetFactory.OuterSingleton, Z_Construct_UClass_UToxAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToxAssetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToxAssetFactory);
UToxAssetFactory::~UToxAssetFactory() {}
// ********** End Class UToxAssetFactory ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactory_h__Script_TouchEngineEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToxAssetFactory, UToxAssetFactory::StaticClass, TEXT("UToxAssetFactory"), &Z_Registration_Info_UClass_UToxAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToxAssetFactory), 320576948U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactory_h__Script_TouchEngineEditor_2000994831(TEXT("/Script/TouchEngineEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactory_h__Script_TouchEngineEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactory_h__Script_TouchEngineEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
