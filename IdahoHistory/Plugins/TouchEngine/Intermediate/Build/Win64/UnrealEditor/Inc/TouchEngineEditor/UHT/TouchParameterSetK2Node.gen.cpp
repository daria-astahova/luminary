// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchParameterSetK2Node.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTouchParameterSetK2Node() {}

// ********** Begin Cross Module References ********************************************************
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchK2NodeBase();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchParameterSetK2Node();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchParameterSetK2Node_NoRegister();
UPackage* Z_Construct_UPackage__Script_TouchEngineEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTouchParameterSetK2Node *************************************************
void UTouchParameterSetK2Node::StaticRegisterNativesUTouchParameterSetK2Node()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTouchParameterSetK2Node;
UClass* UTouchParameterSetK2Node::GetPrivateStaticClass()
{
	using TClass = UTouchParameterSetK2Node;
	if (!Z_Registration_Info_UClass_UTouchParameterSetK2Node.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TouchParameterSetK2Node"),
			Z_Registration_Info_UClass_UTouchParameterSetK2Node.InnerSingleton,
			StaticRegisterNativesUTouchParameterSetK2Node,
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
	return Z_Registration_Info_UClass_UTouchParameterSetK2Node.InnerSingleton;
}
UClass* Z_Construct_UClass_UTouchParameterSetK2Node_NoRegister()
{
	return UTouchParameterSetK2Node::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTouchParameterSetK2Node_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Nodes/TouchParameterSetK2Node.h" },
		{ "ModuleRelativePath", "Private/Nodes/TouchParameterSetK2Node.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchParameterSetK2Node>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTouchParameterSetK2Node_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTouchK2NodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchParameterSetK2Node_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchParameterSetK2Node_Statics::ClassParams = {
	&UTouchParameterSetK2Node::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchParameterSetK2Node_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchParameterSetK2Node_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchParameterSetK2Node()
{
	if (!Z_Registration_Info_UClass_UTouchParameterSetK2Node.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchParameterSetK2Node.OuterSingleton, Z_Construct_UClass_UTouchParameterSetK2Node_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchParameterSetK2Node.OuterSingleton;
}
UTouchParameterSetK2Node::UTouchParameterSetK2Node(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchParameterSetK2Node);
UTouchParameterSetK2Node::~UTouchParameterSetK2Node() {}
// ********** End Class UTouchParameterSetK2Node ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterSetK2Node_h__Script_TouchEngineEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchParameterSetK2Node, UTouchParameterSetK2Node::StaticClass, TEXT("UTouchParameterSetK2Node"), &Z_Registration_Info_UClass_UTouchParameterSetK2Node, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchParameterSetK2Node), 1842052268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterSetK2Node_h__Script_TouchEngineEditor_4096878764(TEXT("/Script/TouchEngineEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterSetK2Node_h__Script_TouchEngineEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterSetK2Node_h__Script_TouchEngineEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
