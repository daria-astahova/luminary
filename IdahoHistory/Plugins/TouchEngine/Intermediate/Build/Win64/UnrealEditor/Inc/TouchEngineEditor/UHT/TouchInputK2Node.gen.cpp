// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchInputK2Node.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTouchInputK2Node() {}

// ********** Begin Cross Module References ********************************************************
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchInputK2Node();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchInputK2Node_NoRegister();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchK2NodeBase();
UPackage* Z_Construct_UPackage__Script_TouchEngineEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTouchInputK2Node ********************************************************
void UTouchInputK2Node::StaticRegisterNativesUTouchInputK2Node()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTouchInputK2Node;
UClass* UTouchInputK2Node::GetPrivateStaticClass()
{
	using TClass = UTouchInputK2Node;
	if (!Z_Registration_Info_UClass_UTouchInputK2Node.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TouchInputK2Node"),
			Z_Registration_Info_UClass_UTouchInputK2Node.InnerSingleton,
			StaticRegisterNativesUTouchInputK2Node,
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
	return Z_Registration_Info_UClass_UTouchInputK2Node.InnerSingleton;
}
UClass* Z_Construct_UClass_UTouchInputK2Node_NoRegister()
{
	return UTouchInputK2Node::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTouchInputK2Node_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Nodes/TouchInputK2Node.h" },
		{ "ModuleRelativePath", "Private/Nodes/TouchInputK2Node.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPins_MetaData[] = {
		{ "Comment", "/**\n\x09 * When linking to a function with more arguments, the additional argument names are placed here and are generated as pins during construction.\n\x09 * The Key of the TMap is the Additional Pin Name, and the Value is the Additional Pin Type from UEdGraphSchema_K2::PC_*\n\x09 * Inspired by UK2Node_FormatText.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Nodes/TouchInputK2Node.h" },
		{ "ToolTip", "When linking to a function with more arguments, the additional argument names are placed here and are generated as pins during construction.\nThe Key of the TMap is the Additional Pin Name, and the Value is the Additional Pin Type from UEdGraphSchema_K2::PC_*\nInspired by UK2Node_FormatText." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AdditionalPins_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AdditionalPins_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AdditionalPins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchInputK2Node>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTouchInputK2Node_Statics::NewProp_AdditionalPins_ValueProp = { "AdditionalPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTouchInputK2Node_Statics::NewProp_AdditionalPins_Key_KeyProp = { "AdditionalPins_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTouchInputK2Node_Statics::NewProp_AdditionalPins = { "AdditionalPins", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchInputK2Node, AdditionalPins), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalPins_MetaData), NewProp_AdditionalPins_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTouchInputK2Node_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInputK2Node_Statics::NewProp_AdditionalPins_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInputK2Node_Statics::NewProp_AdditionalPins_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInputK2Node_Statics::NewProp_AdditionalPins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInputK2Node_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTouchInputK2Node_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTouchK2NodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInputK2Node_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchInputK2Node_Statics::ClassParams = {
	&UTouchInputK2Node::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTouchInputK2Node_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInputK2Node_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInputK2Node_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchInputK2Node_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchInputK2Node()
{
	if (!Z_Registration_Info_UClass_UTouchInputK2Node.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchInputK2Node.OuterSingleton, Z_Construct_UClass_UTouchInputK2Node_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchInputK2Node.OuterSingleton;
}
UTouchInputK2Node::UTouchInputK2Node(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchInputK2Node);
UTouchInputK2Node::~UTouchInputK2Node() {}
// ********** End Class UTouchInputK2Node **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchInputK2Node_h__Script_TouchEngineEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchInputK2Node, UTouchInputK2Node::StaticClass, TEXT("UTouchInputK2Node"), &Z_Registration_Info_UClass_UTouchInputK2Node, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchInputK2Node), 3240926011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchInputK2Node_h__Script_TouchEngineEditor_2487051091(TEXT("/Script/TouchEngineEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchInputK2Node_h__Script_TouchEngineEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchInputK2Node_h__Script_TouchEngineEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
