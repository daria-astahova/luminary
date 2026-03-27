// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchParameterGetK2Node.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTouchParameterGetK2Node() {}

// ********** Begin Cross Module References ********************************************************
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchK2NodeBase();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchParameterGetK2Node();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchParameterGetK2Node_NoRegister();
UPackage* Z_Construct_UPackage__Script_TouchEngineEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTouchParameterGetK2Node *************************************************
void UTouchParameterGetK2Node::StaticRegisterNativesUTouchParameterGetK2Node()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTouchParameterGetK2Node;
UClass* UTouchParameterGetK2Node::GetPrivateStaticClass()
{
	using TClass = UTouchParameterGetK2Node;
	if (!Z_Registration_Info_UClass_UTouchParameterGetK2Node.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TouchParameterGetK2Node"),
			Z_Registration_Info_UClass_UTouchParameterGetK2Node.InnerSingleton,
			StaticRegisterNativesUTouchParameterGetK2Node,
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
	return Z_Registration_Info_UClass_UTouchParameterGetK2Node.InnerSingleton;
}
UClass* Z_Construct_UClass_UTouchParameterGetK2Node_NoRegister()
{
	return UTouchParameterGetK2Node::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTouchParameterGetK2Node_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Nodes/TouchParameterGetK2Node.h" },
		{ "ModuleRelativePath", "Private/Nodes/TouchParameterGetK2Node.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchParameterGetK2Node>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTouchParameterGetK2Node_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTouchK2NodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchParameterGetK2Node_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchParameterGetK2Node_Statics::ClassParams = {
	&UTouchParameterGetK2Node::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchParameterGetK2Node_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchParameterGetK2Node_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchParameterGetK2Node()
{
	if (!Z_Registration_Info_UClass_UTouchParameterGetK2Node.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchParameterGetK2Node.OuterSingleton, Z_Construct_UClass_UTouchParameterGetK2Node_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchParameterGetK2Node.OuterSingleton;
}
UTouchParameterGetK2Node::UTouchParameterGetK2Node(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchParameterGetK2Node);
UTouchParameterGetK2Node::~UTouchParameterGetK2Node() {}
// ********** End Class UTouchParameterGetK2Node ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterGetK2Node_h__Script_TouchEngineEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchParameterGetK2Node, UTouchParameterGetK2Node::StaticClass, TEXT("UTouchParameterGetK2Node"), &Z_Registration_Info_UClass_UTouchParameterGetK2Node, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchParameterGetK2Node), 702776080U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterGetK2Node_h__Script_TouchEngineEditor_2093164337(TEXT("/Script/TouchEngineEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterGetK2Node_h__Script_TouchEngineEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterGetK2Node_h__Script_TouchEngineEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
