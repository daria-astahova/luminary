// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchK2NodeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTouchK2NodeBase() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchK2NodeBase();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchK2NodeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_TouchEngineEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTouchK2NodeBase *********************************************************
void UTouchK2NodeBase::StaticRegisterNativesUTouchK2NodeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTouchK2NodeBase;
UClass* UTouchK2NodeBase::GetPrivateStaticClass()
{
	using TClass = UTouchK2NodeBase;
	if (!Z_Registration_Info_UClass_UTouchK2NodeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TouchK2NodeBase"),
			Z_Registration_Info_UClass_UTouchK2NodeBase.InnerSingleton,
			StaticRegisterNativesUTouchK2NodeBase,
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
	return Z_Registration_Info_UClass_UTouchK2NodeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UTouchK2NodeBase_NoRegister()
{
	return UTouchK2NodeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTouchK2NodeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Touch K2 blueprint node\n */" },
		{ "IncludePath", "Nodes/TouchK2NodeBase.h" },
		{ "ModuleRelativePath", "Private/Nodes/TouchK2NodeBase.h" },
		{ "ToolTip", "Base Touch K2 blueprint node" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchK2NodeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTouchK2NodeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchK2NodeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchK2NodeBase_Statics::ClassParams = {
	&UTouchK2NodeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchK2NodeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchK2NodeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchK2NodeBase()
{
	if (!Z_Registration_Info_UClass_UTouchK2NodeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchK2NodeBase.OuterSingleton, Z_Construct_UClass_UTouchK2NodeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchK2NodeBase.OuterSingleton;
}
UTouchK2NodeBase::UTouchK2NodeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchK2NodeBase);
UTouchK2NodeBase::~UTouchK2NodeBase() {}
// ********** End Class UTouchK2NodeBase ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchK2NodeBase_h__Script_TouchEngineEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchK2NodeBase, UTouchK2NodeBase::StaticClass, TEXT("UTouchK2NodeBase"), &Z_Registration_Info_UClass_UTouchK2NodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchK2NodeBase), 3919971170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchK2NodeBase_h__Script_TouchEngineEditor_1102065894(TEXT("/Script/TouchEngineEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchK2NodeBase_h__Script_TouchEngineEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchK2NodeBase_h__Script_TouchEngineEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
