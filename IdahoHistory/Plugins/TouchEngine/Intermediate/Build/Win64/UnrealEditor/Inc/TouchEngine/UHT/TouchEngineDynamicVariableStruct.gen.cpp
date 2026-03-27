// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchEngineDynamicVariableStruct.h"
#include "Engine/TouchVariables.h"
#include "TouchEngineIntVector4.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTouchEngineDynamicVariableStruct() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
TOUCHENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal();
TOUCHENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_NoRegister();
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchEngineDAT();
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchEngineDAT_NoRegister();
TOUCHENGINE_API UEnum* Z_Construct_UEnum_TouchEngine_EVarIntent();
TOUCHENGINE_API UEnum* Z_Construct_UEnum_TouchEngine_EVarScope();
TOUCHENGINE_API UEnum* Z_Construct_UEnum_TouchEngine_EVarType();
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExportedValue();
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineCHOP();
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer();
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct();
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineIntVector4();
UPackage* Z_Construct_UPackage__Script_TouchEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVarScope *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVarScope;
static UEnum* EVarScope_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVarScope.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVarScope.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TouchEngine_EVarScope, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("EVarScope"));
	}
	return Z_Registration_Info_UEnum_EVarScope.OuterSingleton;
}
template<> TOUCHENGINE_API UEnum* StaticEnum<EVarScope>()
{
	return EVarScope_StaticEnum();
}
struct Z_Construct_UEnum_TouchEngine_EVarScope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/*\n* possible intents of dynamic variables based on TEScope\n*/" },
		{ "Input.Name", "EVarScope::Input" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EVarScope::Max" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
		{ "NotSet.Name", "EVarScope::NotSet" },
		{ "Output.Name", "EVarScope::Output" },
		{ "Parameter.Name", "EVarScope::Parameter" },
		{ "ToolTip", "* possible intents of dynamic variables based on TEScope" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVarScope::NotSet", (int64)EVarScope::NotSet },
		{ "EVarScope::Input", (int64)EVarScope::Input },
		{ "EVarScope::Output", (int64)EVarScope::Output },
		{ "EVarScope::Parameter", (int64)EVarScope::Parameter },
		{ "EVarScope::Max", (int64)EVarScope::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TouchEngine_EVarScope_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	"EVarScope",
	"EVarScope",
	Z_Construct_UEnum_TouchEngine_EVarScope_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TouchEngine_EVarScope_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TouchEngine_EVarScope_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TouchEngine_EVarScope_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TouchEngine_EVarScope()
{
	if (!Z_Registration_Info_UEnum_EVarScope.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVarScope.InnerSingleton, Z_Construct_UEnum_TouchEngine_EVarScope_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVarScope.InnerSingleton;
}
// ********** End Enum EVarScope *******************************************************************

// ********** Begin Enum EVarType ******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVarType;
static UEnum* EVarType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVarType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVarType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TouchEngine_EVarType, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("EVarType"));
	}
	return Z_Registration_Info_UEnum_EVarType.OuterSingleton;
}
template<> TOUCHENGINE_API UEnum* StaticEnum<EVarType>()
{
	return EVarType_StaticEnum();
}
struct Z_Construct_UEnum_TouchEngine_EVarType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bool.Name", "EVarType::Bool" },
		{ "CHOP.Name", "EVarType::CHOP" },
		{ "Comment", "/*\n* possible variable types of dynamic variables based on TEParameterType\n*/" },
		{ "Double.Name", "EVarType::Double" },
		{ "Float.Name", "EVarType::Float" },
		{ "Group.Name", "EVarType::Group" },
		{ "Int.Name", "EVarType::Int" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EVarType::Max" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
		{ "NotSet.Name", "EVarType::NotSet" },
		{ "Sequence.Name", "EVarType::Sequence" },
		{ "String.Name", "EVarType::String" },
		{ "Texture.Name", "EVarType::Texture" },
		{ "ToolTip", "* possible variable types of dynamic variables based on TEParameterType" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVarType::NotSet", (int64)EVarType::NotSet },
		{ "EVarType::Bool", (int64)EVarType::Bool },
		{ "EVarType::Int", (int64)EVarType::Int },
		{ "EVarType::Double", (int64)EVarType::Double },
		{ "EVarType::Float", (int64)EVarType::Float },
		{ "EVarType::CHOP", (int64)EVarType::CHOP },
		{ "EVarType::String", (int64)EVarType::String },
		{ "EVarType::Texture", (int64)EVarType::Texture },
		{ "EVarType::Group", (int64)EVarType::Group },
		{ "EVarType::Sequence", (int64)EVarType::Sequence },
		{ "EVarType::Max", (int64)EVarType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TouchEngine_EVarType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	"EVarType",
	"EVarType",
	Z_Construct_UEnum_TouchEngine_EVarType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TouchEngine_EVarType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TouchEngine_EVarType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TouchEngine_EVarType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TouchEngine_EVarType()
{
	if (!Z_Registration_Info_UEnum_EVarType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVarType.InnerSingleton, Z_Construct_UEnum_TouchEngine_EVarType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVarType.InnerSingleton;
}
// ********** End Enum EVarType ********************************************************************

// ********** Begin Enum EVarIntent ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVarIntent;
static UEnum* EVarIntent_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVarIntent.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVarIntent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TouchEngine_EVarIntent, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("EVarIntent"));
	}
	return Z_Registration_Info_UEnum_EVarIntent.OuterSingleton;
}
template<> TOUCHENGINE_API UEnum* StaticEnum<EVarIntent>()
{
	return EVarIntent_StaticEnum();
}
struct Z_Construct_UEnum_TouchEngine_EVarIntent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Color.Name", "EVarIntent::Color" },
		{ "Comment", "/*\n* possible intents of dynamic variables based on TEParameterIntent\n*/" },
		{ "DirectoryPath.Name", "EVarIntent::DirectoryPath" },
		{ "DropDown.Name", "EVarIntent::DropDown" },
		{ "FilePath.Name", "EVarIntent::FilePath" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EVarIntent::Max" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "Momentary.Name", "EVarIntent::Momentary" },
		{ "NoResetToDefault", "" },
		{ "NotSet.Name", "EVarIntent::NotSet" },
		{ "Position.Name", "EVarIntent::Position" },
		{ "Pulse.Name", "EVarIntent::Pulse" },
		{ "Size.Name", "EVarIntent::Size" },
		{ "ToolTip", "* possible intents of dynamic variables based on TEParameterIntent" },
		{ "UVW.Name", "EVarIntent::UVW" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVarIntent::NotSet", (int64)EVarIntent::NotSet },
		{ "EVarIntent::DropDown", (int64)EVarIntent::DropDown },
		{ "EVarIntent::Color", (int64)EVarIntent::Color },
		{ "EVarIntent::Position", (int64)EVarIntent::Position },
		{ "EVarIntent::Size", (int64)EVarIntent::Size },
		{ "EVarIntent::UVW", (int64)EVarIntent::UVW },
		{ "EVarIntent::FilePath", (int64)EVarIntent::FilePath },
		{ "EVarIntent::DirectoryPath", (int64)EVarIntent::DirectoryPath },
		{ "EVarIntent::Momentary", (int64)EVarIntent::Momentary },
		{ "EVarIntent::Pulse", (int64)EVarIntent::Pulse },
		{ "EVarIntent::Max", (int64)EVarIntent::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TouchEngine_EVarIntent_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	"EVarIntent",
	"EVarIntent",
	Z_Construct_UEnum_TouchEngine_EVarIntent_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TouchEngine_EVarIntent_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TouchEngine_EVarIntent_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TouchEngine_EVarIntent_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TouchEngine_EVarIntent()
{
	if (!Z_Registration_Info_UEnum_EVarIntent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVarIntent.InnerSingleton, Z_Construct_UEnum_TouchEngine_EVarIntent_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVarIntent.InnerSingleton;
}
// ********** End Enum EVarIntent ******************************************************************

// ********** Begin Class UDEPRECATED_TouchEngineCHOPMinimal ***************************************
void UDEPRECATED_TouchEngineCHOPMinimal::StaticRegisterNativesUDEPRECATED_TouchEngineCHOPMinimal()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDEPRECATED_TouchEngineCHOPMinimal;
UClass* UDEPRECATED_TouchEngineCHOPMinimal::GetPrivateStaticClass()
{
	using TClass = UDEPRECATED_TouchEngineCHOPMinimal;
	if (!Z_Registration_Info_UClass_UDEPRECATED_TouchEngineCHOPMinimal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TouchEngineCHOPMinimal"),
			Z_Registration_Info_UClass_UDEPRECATED_TouchEngineCHOPMinimal.InnerSingleton,
			StaticRegisterNativesUDEPRECATED_TouchEngineCHOPMinimal,
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
	return Z_Registration_Info_UClass_UDEPRECATED_TouchEngineCHOPMinimal.InnerSingleton;
}
UClass* Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_NoRegister()
{
	return UDEPRECATED_TouchEngineCHOPMinimal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Used to be UTouchEngineCHOP which was replaced by FTouchEngineCHOP and renamed for name clash reasons. It is kept due to Serialization\n" },
		{ "IncludePath", "TouchEngineDynamicVariableStruct.h" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "ToolTip", "Used to be UTouchEngineCHOP which was replaced by FTouchEngineCHOP and renamed for name clash reasons. It is kept due to Serialization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSamples_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamples;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_TouchEngineCHOPMinimal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_TouchEngineCHOPMinimal, NumChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumChannels_MetaData), NewProp_NumChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::NewProp_NumSamples = { "NumSamples", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_TouchEngineCHOPMinimal, NumSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSamples_MetaData), NewProp_NumSamples_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::NewProp_ChannelNames_Inner = { "ChannelNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::NewProp_ChannelNames = { "ChannelNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_TouchEngineCHOPMinimal, ChannelNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelNames_MetaData), NewProp_ChannelNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::NewProp_NumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::NewProp_NumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::NewProp_ChannelNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::NewProp_ChannelNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::ClassParams = {
	&UDEPRECATED_TouchEngineCHOPMinimal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::PropPointers),
	0,
	0x021002A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_TouchEngineCHOPMinimal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_TouchEngineCHOPMinimal.OuterSingleton, Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_TouchEngineCHOPMinimal.OuterSingleton;
}
UDEPRECATED_TouchEngineCHOPMinimal::UDEPRECATED_TouchEngineCHOPMinimal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_TouchEngineCHOPMinimal);
UDEPRECATED_TouchEngineCHOPMinimal::~UDEPRECATED_TouchEngineCHOPMinimal() {}
// ********** End Class UDEPRECATED_TouchEngineCHOPMinimal *****************************************

// ********** Begin Class UTouchEngineDAT Function GetCell *****************************************
struct Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics
{
	struct TouchEngineDAT_eventGetCell_Parms
	{
		int32 Column;
		int32 Row;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|DAT" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Column;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Row;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineDAT_eventGetCell_Parms, Column), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineDAT_eventGetCell_Parms, Row), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineDAT_eventGetCell_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::NewProp_Column,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchEngineDAT, nullptr, "GetCell", Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::TouchEngineDAT_eventGetCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::TouchEngineDAT_eventGetCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchEngineDAT_GetCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchEngineDAT_GetCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchEngineDAT::execGetCell)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Column);
	P_GET_PROPERTY(FIntProperty,Z_Param_Row);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCell(Z_Param_Column,Z_Param_Row);
	P_NATIVE_END;
}
// ********** End Class UTouchEngineDAT Function GetCell *******************************************

// ********** Begin Class UTouchEngineDAT Function GetCellByName ***********************************
struct Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics
{
	struct TouchEngineDAT_eventGetCellByName_Parms
	{
		FString ColumnName;
		FString RowName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|DAT" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ColumnName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RowName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineDAT_eventGetCellByName_Parms, ColumnName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnName_MetaData), NewProp_ColumnName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineDAT_eventGetCellByName_Parms, RowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowName_MetaData), NewProp_RowName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineDAT_eventGetCellByName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::NewProp_ColumnName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchEngineDAT, nullptr, "GetCellByName", Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::TouchEngineDAT_eventGetCellByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::TouchEngineDAT_eventGetCellByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchEngineDAT_GetCellByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchEngineDAT_GetCellByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchEngineDAT::execGetCellByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ColumnName);
	P_GET_PROPERTY(FStrProperty,Z_Param_RowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCellByName(Z_Param_ColumnName,Z_Param_RowName);
	P_NATIVE_END;
}
// ********** End Class UTouchEngineDAT Function GetCellByName *************************************

// ********** Begin Class UTouchEngineDAT Function GetColumn ***************************************
struct Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics
{
	struct TouchEngineDAT_eventGetColumn_Parms
	{
		int32 Column;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|DAT" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Column;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineDAT_eventGetColumn_Parms, Column), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineDAT_eventGetColumn_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::NewProp_Column,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchEngineDAT, nullptr, "GetColumn", Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::TouchEngineDAT_eventGetColumn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::TouchEngineDAT_eventGetColumn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchEngineDAT_GetColumn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchEngineDAT_GetColumn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchEngineDAT::execGetColumn)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Column);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetColumn(Z_Param_Column);
	P_NATIVE_END;
}
// ********** End Class UTouchEngineDAT Function GetColumn *****************************************

// ********** Begin Class UTouchEngineDAT Function GetColumnByName *********************************
struct Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics
{
	struct TouchEngineDAT_eventGetColumnByName_Parms
	{
		FString ColumnName;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|DAT" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ColumnName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineDAT_eventGetColumnByName_Parms, ColumnName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnName_MetaData), NewProp_ColumnName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineDAT_eventGetColumnByName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::NewProp_ColumnName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchEngineDAT, nullptr, "GetColumnByName", Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::TouchEngineDAT_eventGetColumnByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::TouchEngineDAT_eventGetColumnByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchEngineDAT::execGetColumnByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ColumnName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetColumnByName(Z_Param_ColumnName);
	P_NATIVE_END;
}
// ********** End Class UTouchEngineDAT Function GetColumnByName ***********************************

// ********** Begin Class UTouchEngineDAT Function GetRow ******************************************
struct Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics
{
	struct TouchEngineDAT_eventGetRow_Parms
	{
		int32 Row;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|DAT" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Row;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineDAT_eventGetRow_Parms, Row), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineDAT_eventGetRow_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchEngineDAT, nullptr, "GetRow", Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::TouchEngineDAT_eventGetRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::TouchEngineDAT_eventGetRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchEngineDAT_GetRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchEngineDAT_GetRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchEngineDAT::execGetRow)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Row);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetRow(Z_Param_Row);
	P_NATIVE_END;
}
// ********** End Class UTouchEngineDAT Function GetRow ********************************************

// ********** Begin Class UTouchEngineDAT Function GetRowByName ************************************
struct Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics
{
	struct TouchEngineDAT_eventGetRowByName_Parms
	{
		FString RowName;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|DAT" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RowName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineDAT_eventGetRowByName_Parms, RowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowName_MetaData), NewProp_RowName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineDAT_eventGetRowByName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchEngineDAT, nullptr, "GetRowByName", Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::TouchEngineDAT_eventGetRowByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::TouchEngineDAT_eventGetRowByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchEngineDAT_GetRowByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchEngineDAT_GetRowByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchEngineDAT::execGetRowByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetRowByName(Z_Param_RowName);
	P_NATIVE_END;
}
// ********** End Class UTouchEngineDAT Function GetRowByName **************************************

// ********** Begin Class UTouchEngineDAT **********************************************************
void UTouchEngineDAT::StaticRegisterNativesUTouchEngineDAT()
{
	UClass* Class = UTouchEngineDAT::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCell", &UTouchEngineDAT::execGetCell },
		{ "GetCellByName", &UTouchEngineDAT::execGetCellByName },
		{ "GetColumn", &UTouchEngineDAT::execGetColumn },
		{ "GetColumnByName", &UTouchEngineDAT::execGetColumnByName },
		{ "GetRow", &UTouchEngineDAT::execGetRow },
		{ "GetRowByName", &UTouchEngineDAT::execGetRowByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTouchEngineDAT;
UClass* UTouchEngineDAT::GetPrivateStaticClass()
{
	using TClass = UTouchEngineDAT;
	if (!Z_Registration_Info_UClass_UTouchEngineDAT.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TouchEngineDAT"),
			Z_Registration_Info_UClass_UTouchEngineDAT.InnerSingleton,
			StaticRegisterNativesUTouchEngineDAT,
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
	return Z_Registration_Info_UClass_UTouchEngineDAT.InnerSingleton;
}
UClass* Z_Construct_UClass_UTouchEngineDAT_NoRegister()
{
	return UTouchEngineDAT::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTouchEngineDAT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "TouchEngine DAT" },
		{ "IncludePath", "TouchEngineDynamicVariableStruct.h" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumColumns_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumRows_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumColumns;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumRows;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTouchEngineDAT_GetCell, "GetCell" }, // 3298508797
		{ &Z_Construct_UFunction_UTouchEngineDAT_GetCellByName, "GetCellByName" }, // 1397498551
		{ &Z_Construct_UFunction_UTouchEngineDAT_GetColumn, "GetColumn" }, // 2089422947
		{ &Z_Construct_UFunction_UTouchEngineDAT_GetColumnByName, "GetColumnByName" }, // 3143593880
		{ &Z_Construct_UFunction_UTouchEngineDAT_GetRow, "GetRow" }, // 1787785793
		{ &Z_Construct_UFunction_UTouchEngineDAT_GetRowByName, "GetRowByName" }, // 2882634816
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchEngineDAT>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTouchEngineDAT_Statics::NewProp_NumColumns = { "NumColumns", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineDAT, NumColumns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumColumns_MetaData), NewProp_NumColumns_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTouchEngineDAT_Statics::NewProp_NumRows = { "NumRows", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchEngineDAT, NumRows), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumRows_MetaData), NewProp_NumRows_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTouchEngineDAT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineDAT_Statics::NewProp_NumColumns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchEngineDAT_Statics::NewProp_NumRows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchEngineDAT_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTouchEngineDAT_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchEngineDAT_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchEngineDAT_Statics::ClassParams = {
	&UTouchEngineDAT::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTouchEngineDAT_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTouchEngineDAT_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchEngineDAT_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchEngineDAT_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchEngineDAT()
{
	if (!Z_Registration_Info_UClass_UTouchEngineDAT.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchEngineDAT.OuterSingleton, Z_Construct_UClass_UTouchEngineDAT_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchEngineDAT.OuterSingleton;
}
UTouchEngineDAT::UTouchEngineDAT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchEngineDAT);
UTouchEngineDAT::~UTouchEngineDAT() {}
// ********** End Class UTouchEngineDAT ************************************************************

// ********** Begin ScriptStruct FTouchEngineDynamicVariableStruct *********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableStruct;
class UScriptStruct* FTouchEngineDynamicVariableStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("TouchEngineDynamicVariableStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableStruct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Dynamic variable - holds a void pointer and functions to cast it correctly\n*/" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "* Dynamic variable - holds a void pointer and functions to cast it correctly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VarLabel_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Display name of variable\n" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "ToolTip", "Display name of variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Name used to get / set variable by user\n" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "ToolTip", "Name used to get / set variable by user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VarIdentifier_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// random characters used to identify the variable in TouchEngine\n" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "ToolTip", "random characters used to identify the variable in TouchEngine" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentIdentifier_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The parent of this struct, usually a Group. Used for the UI. */" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "ToolTip", "The parent of this struct, usually a Group. Used for the UI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VarScope_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VarType_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Variable data type\n" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "ToolTip", "Variable data type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VarIntent_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Variable intent\n" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "ToolTip", "Variable intent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Number of variables (if array)\n" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "ToolTip", "Number of variables (if array)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelNames_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Name of the Channels set by this instance\n" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "ToolTip", "Name of the Channels set by this instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReuseExistingTexture_MetaData[] = {
		{ "Comment", "/** Indicates if we should reuse the last texture we sent (if any) for better performance. This would imply that the content of the Texture (e.g. the pixels) has not changed. */" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "ToolTip", "Indicates if we should reuse the last texture we sent (if any) for better performance. This would imply that the content of the Texture (e.g. the pixels) has not changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[] = {
		{ "Comment", "//we need to save if this is an array or not\n" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "ToolTip", "we need to save if this is an array or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedBoolReset_MetaData[] = {
		{ "Comment", "/** Used for Pulse type of inputs, will be set to true if the current variable need to be reset to false after cooking it. */" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "ToolTip", "Used for Pulse type of inputs, will be set to true if the current variable need to be reset to false after cooking it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameLastUpdated_MetaData[] = {
		{ "Comment", "/** Used to keep track when the variable was last updated. The value should be -1 if it was never updated, and is only updated in GetOutput / SetFrameLastUpdatedFromNextCookFrame */" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "ToolTip", "Used to keep track when the variable was last updated. The value should be -1 if it was never updated, and is only updated in GetOutput / SetFrameLastUpdatedFromNextCookFrame" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CHOPProperty_MetaData[] = {
		{ "Category", "Handle Creators" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatBufferProperty_MetaData[] = {
		{ "Category", "Handle Creators" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringArrayProperty_MetaData[] = {
		{ "Category", "Handle Creators" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureProperty_MetaData[] = {
		{ "Category", "Handle Creators" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector2DProperty_MetaData[] = {
		{ "Category", "Handle Creators" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorProperty_MetaData[] = {
		{ "Category", "Handle Creators" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector4Property_MetaData[] = {
		{ "Category", "Handle Creators" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
		{ "NoSpinbox", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorProperty_MetaData[] = {
		{ "Category", "Handle Creators" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntPointProperty_MetaData[] = {
		{ "Category", "Handle Creators" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntVectorProperty_MetaData[] = {
		{ "Category", "Handle Creators" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntVector4Property_MetaData[] = {
		{ "Category", "Handle Creators" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropDownData_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarLabel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarIdentifier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentIdentifier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VarScope_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VarScope;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VarType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VarType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VarIntent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VarIntent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelNames;
	static void NewProp_bReuseExistingTexture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReuseExistingTexture;
	static void NewProp_bIsArray_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArray;
	static void NewProp_bNeedBoolReset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedBoolReset;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CHOPProperty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatBufferProperty_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatBufferProperty;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringArrayProperty_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArrayProperty;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureProperty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2DProperty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorProperty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector4Property;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorProperty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntPointProperty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntVectorProperty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntVector4Property;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DropDownData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DropDownData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DropDownData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTouchEngineDynamicVariableStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarLabel = { "VarLabel", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, VarLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VarLabel_MetaData), NewProp_VarLabel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, VarName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VarName_MetaData), NewProp_VarName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarIdentifier = { "VarIdentifier", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, VarIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VarIdentifier_MetaData), NewProp_VarIdentifier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_ParentIdentifier = { "ParentIdentifier", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, ParentIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentIdentifier_MetaData), NewProp_ParentIdentifier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarScope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarScope = { "VarScope", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, VarScope), Z_Construct_UEnum_TouchEngine_EVarScope, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VarScope_MetaData), NewProp_VarScope_MetaData) }; // 3465691991
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarType = { "VarType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, VarType), Z_Construct_UEnum_TouchEngine_EVarType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VarType_MetaData), NewProp_VarType_MetaData) }; // 3380315260
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarIntent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarIntent = { "VarIntent", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, VarIntent), Z_Construct_UEnum_TouchEngine_EVarIntent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VarIntent_MetaData), NewProp_VarIntent_MetaData) }; // 3836273089
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_ChannelNames_Inner = { "ChannelNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_ChannelNames = { "ChannelNames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, ChannelNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelNames_MetaData), NewProp_ChannelNames_MetaData) };
void Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_bReuseExistingTexture_SetBit(void* Obj)
{
	((FTouchEngineDynamicVariableStruct*)Obj)->bReuseExistingTexture_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_bReuseExistingTexture = { "bReuseExistingTexture", nullptr, (EPropertyFlags)0x0010000020002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTouchEngineDynamicVariableStruct), &Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_bReuseExistingTexture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReuseExistingTexture_MetaData), NewProp_bReuseExistingTexture_MetaData) };
void Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_bIsArray_SetBit(void* Obj)
{
	((FTouchEngineDynamicVariableStruct*)Obj)->bIsArray = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_bIsArray = { "bIsArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTouchEngineDynamicVariableStruct), &Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_bIsArray_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsArray_MetaData), NewProp_bIsArray_MetaData) };
void Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_bNeedBoolReset_SetBit(void* Obj)
{
	((FTouchEngineDynamicVariableStruct*)Obj)->bNeedBoolReset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_bNeedBoolReset = { "bNeedBoolReset", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTouchEngineDynamicVariableStruct), &Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_bNeedBoolReset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedBoolReset_MetaData), NewProp_bNeedBoolReset_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, FrameLastUpdated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameLastUpdated_MetaData), NewProp_FrameLastUpdated_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_CHOPProperty = { "CHOPProperty", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, CHOPProperty), Z_Construct_UScriptStruct_FTouchEngineCHOP, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CHOPProperty_MetaData), NewProp_CHOPProperty_MetaData) }; // 4095773833
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_FloatBufferProperty_Inner = { "FloatBufferProperty", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_FloatBufferProperty = { "FloatBufferProperty", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, FloatBufferProperty), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatBufferProperty_MetaData), NewProp_FloatBufferProperty_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_StringArrayProperty_Inner = { "StringArrayProperty", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_StringArrayProperty = { "StringArrayProperty", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, StringArrayProperty), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringArrayProperty_MetaData), NewProp_StringArrayProperty_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_TextureProperty = { "TextureProperty", nullptr, (EPropertyFlags)0x0144000800002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, TextureProperty), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureProperty_MetaData), NewProp_TextureProperty_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_Vector2DProperty = { "Vector2DProperty", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, Vector2DProperty), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector2DProperty_MetaData), NewProp_Vector2DProperty_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VectorProperty = { "VectorProperty", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, VectorProperty), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorProperty_MetaData), NewProp_VectorProperty_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_Vector4Property = { "Vector4Property", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, Vector4Property), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector4Property_MetaData), NewProp_Vector4Property_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_ColorProperty = { "ColorProperty", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, ColorProperty), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorProperty_MetaData), NewProp_ColorProperty_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_IntPointProperty = { "IntPointProperty", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, IntPointProperty), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntPointProperty_MetaData), NewProp_IntPointProperty_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_IntVectorProperty = { "IntVectorProperty", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, IntVectorProperty), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntVectorProperty_MetaData), NewProp_IntVectorProperty_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_IntVector4Property = { "IntVector4Property", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, IntVector4Property), Z_Construct_UScriptStruct_FTouchEngineIntVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntVector4Property_MetaData), NewProp_IntVector4Property_MetaData) }; // 2873446183
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_DropDownData_ValueProp = { "DropDownData", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_DropDownData_Key_KeyProp = { "DropDownData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_DropDownData = { "DropDownData", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableStruct, DropDownData_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropDownData_MetaData), NewProp_DropDownData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_ParentIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarScope_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarScope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarIntent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VarIntent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_ChannelNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_ChannelNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_bReuseExistingTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_bIsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_bNeedBoolReset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_FrameLastUpdated,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_CHOPProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_FloatBufferProperty_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_FloatBufferProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_StringArrayProperty_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_StringArrayProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_TextureProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_Vector2DProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_VectorProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_Vector4Property,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_ColorProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_IntPointProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_IntVectorProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_IntVector4Property,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_DropDownData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_DropDownData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewProp_DropDownData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	&NewStructOps,
	"TouchEngineDynamicVariableStruct",
	Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::PropPointers),
	sizeof(FTouchEngineDynamicVariableStruct),
	alignof(FTouchEngineDynamicVariableStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableStruct.InnerSingleton, Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableStruct.InnerSingleton;
}
// ********** End ScriptStruct FTouchEngineDynamicVariableStruct ***********************************

// ********** Begin ScriptStruct FTouchEngineDynamicVariableContainer ******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableContainer;
class UScriptStruct* FTouchEngineDynamicVariableContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("TouchEngineDynamicVariableContainer"));
	}
	return Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableContainer.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Holds all input and output variables for an instance of the \"UTouchEngineComponentBase\" component class.\n * Also holds callbacks from the TouchEngine to get info about when parameters are loaded\n */" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Holds all input and output variables for an instance of the \"UTouchEngineComponentBase\" component class.\nAlso holds callbacks from the TouchEngine to get info about when parameters are loaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynVars_Input_MetaData[] = {
		{ "Category", "Properties" },
		{ "DisplayName", "Input" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynVars_Output_MetaData[] = {
		{ "Category", "Properties" },
		{ "DisplayName", "Output" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynVars_Input_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DynVars_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynVars_Output_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DynVars_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTouchEngineDynamicVariableContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::NewProp_DynVars_Input_Inner = { "DynVars_Input", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct, METADATA_PARAMS(0, nullptr) }; // 2534660391
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::NewProp_DynVars_Input = { "DynVars_Input", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableContainer, DynVars_Input), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynVars_Input_MetaData), NewProp_DynVars_Input_MetaData) }; // 2534660391
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::NewProp_DynVars_Output_Inner = { "DynVars_Output", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct, METADATA_PARAMS(0, nullptr) }; // 2534660391
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::NewProp_DynVars_Output = { "DynVars_Output", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDynamicVariableContainer, DynVars_Output), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynVars_Output_MetaData), NewProp_DynVars_Output_MetaData) }; // 2534660391
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::NewProp_DynVars_Input_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::NewProp_DynVars_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::NewProp_DynVars_Output_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::NewProp_DynVars_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	&NewStructOps,
	"TouchEngineDynamicVariableContainer",
	Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::PropPointers),
	sizeof(FTouchEngineDynamicVariableContainer),
	alignof(FTouchEngineDynamicVariableContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer()
{
	if (!Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableContainer.InnerSingleton, Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableContainer.InnerSingleton;
}
// ********** End ScriptStruct FTouchEngineDynamicVariableContainer ********************************

// ********** Begin ScriptStruct FExportedValue ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FExportedValue;
class UScriptStruct* FExportedValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FExportedValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FExportedValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExportedValue, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("ExportedValue"));
	}
	return Z_Registration_Info_UScriptStruct_FExportedValue.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FExportedValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Temporary structure used to import and export the Minimum, Maximum, Default Value and Value of a Dynamic Variable *///todo\n" },
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
		{ "ToolTip", "Temporary structure used to import and export the Minimum, Maximum, Default Value and Value of a Dynamic Variable //todo" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampMinHasValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampMinValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampMaxHasValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampMaxValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIMinHasValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIMinValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIMaxHasValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIMaxValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropDownIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropDownValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropDownLabels_MetaData[] = {
		{ "ModuleRelativePath", "Public/TouchEngineDynamicVariableStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClampMinHasValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClampMinValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClampMaxHasValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClampMaxValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UIMinHasValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UIMinValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UIMaxHasValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UIMaxValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DropDownIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DropDownIndices;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DropDownValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DropDownValues;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DropDownLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DropDownLabels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExportedValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportedValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportedValue, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_ClampMinHasValue = { "ClampMinHasValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportedValue, ClampMinHasValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampMinHasValue_MetaData), NewProp_ClampMinHasValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_ClampMinValue = { "ClampMinValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportedValue, ClampMinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampMinValue_MetaData), NewProp_ClampMinValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_ClampMaxHasValue = { "ClampMaxHasValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportedValue, ClampMaxHasValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampMaxHasValue_MetaData), NewProp_ClampMaxHasValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_ClampMaxValue = { "ClampMaxValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportedValue, ClampMaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampMaxValue_MetaData), NewProp_ClampMaxValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_UIMinHasValue = { "UIMinHasValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportedValue, UIMinHasValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIMinHasValue_MetaData), NewProp_UIMinHasValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_UIMinValue = { "UIMinValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportedValue, UIMinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIMinValue_MetaData), NewProp_UIMinValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_UIMaxHasValue = { "UIMaxHasValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportedValue, UIMaxHasValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIMaxHasValue_MetaData), NewProp_UIMaxHasValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_UIMaxValue = { "UIMaxValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportedValue, UIMaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIMaxValue_MetaData), NewProp_UIMaxValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_DropDownIndices_Inner = { "DropDownIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_DropDownIndices = { "DropDownIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportedValue, DropDownIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropDownIndices_MetaData), NewProp_DropDownIndices_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_DropDownValues_Inner = { "DropDownValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_DropDownValues = { "DropDownValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportedValue, DropDownValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropDownValues_MetaData), NewProp_DropDownValues_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_DropDownLabels_Inner = { "DropDownLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_DropDownLabels = { "DropDownLabels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportedValue, DropDownLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropDownLabels_MetaData), NewProp_DropDownLabels_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExportedValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_ClampMinHasValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_ClampMinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_ClampMaxHasValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_ClampMaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_UIMinHasValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_UIMinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_UIMaxHasValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_UIMaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_DropDownIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_DropDownIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_DropDownValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_DropDownValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_DropDownLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportedValue_Statics::NewProp_DropDownLabels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExportedValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExportedValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	&NewStructOps,
	"ExportedValue",
	Z_Construct_UScriptStruct_FExportedValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExportedValue_Statics::PropPointers),
	sizeof(FExportedValue),
	alignof(FExportedValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExportedValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExportedValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExportedValue()
{
	if (!Z_Registration_Info_UScriptStruct_FExportedValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FExportedValue.InnerSingleton, Z_Construct_UScriptStruct_FExportedValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FExportedValue.InnerSingleton;
}
// ********** End ScriptStruct FExportedValue ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_TouchEngineDynamicVariableStruct_h__Script_TouchEngine_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVarScope_StaticEnum, TEXT("EVarScope"), &Z_Registration_Info_UEnum_EVarScope, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3465691991U) },
		{ EVarType_StaticEnum, TEXT("EVarType"), &Z_Registration_Info_UEnum_EVarType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3380315260U) },
		{ EVarIntent_StaticEnum, TEXT("EVarIntent"), &Z_Registration_Info_UEnum_EVarIntent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3836273089U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTouchEngineDynamicVariableStruct::StaticStruct, Z_Construct_UScriptStruct_FTouchEngineDynamicVariableStruct_Statics::NewStructOps, TEXT("TouchEngineDynamicVariableStruct"), &Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTouchEngineDynamicVariableStruct), 2534660391U) },
		{ FTouchEngineDynamicVariableContainer::StaticStruct, Z_Construct_UScriptStruct_FTouchEngineDynamicVariableContainer_Statics::NewStructOps, TEXT("TouchEngineDynamicVariableContainer"), &Z_Registration_Info_UScriptStruct_FTouchEngineDynamicVariableContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTouchEngineDynamicVariableContainer), 2794840798U) },
		{ FExportedValue::StaticStruct, Z_Construct_UScriptStruct_FExportedValue_Statics::NewStructOps, TEXT("ExportedValue"), &Z_Registration_Info_UScriptStruct_FExportedValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExportedValue), 3661365457U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_TouchEngineCHOPMinimal, UDEPRECATED_TouchEngineCHOPMinimal::StaticClass, TEXT("UDEPRECATED_TouchEngineCHOPMinimal"), &Z_Registration_Info_UClass_UDEPRECATED_TouchEngineCHOPMinimal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_TouchEngineCHOPMinimal), 1452622177U) },
		{ Z_Construct_UClass_UTouchEngineDAT, UTouchEngineDAT::StaticClass, TEXT("UTouchEngineDAT"), &Z_Registration_Info_UClass_UTouchEngineDAT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchEngineDAT), 536011253U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_TouchEngineDynamicVariableStruct_h__Script_TouchEngine_2147403435(TEXT("/Script/TouchEngine"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_TouchEngineDynamicVariableStruct_h__Script_TouchEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_TouchEngineDynamicVariableStruct_h__Script_TouchEngine_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_TouchEngineDynamicVariableStruct_h__Script_TouchEngine_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_TouchEngineDynamicVariableStruct_h__Script_TouchEngine_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_TouchEngineDynamicVariableStruct_h__Script_TouchEngine_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_TouchEngineDynamicVariableStruct_h__Script_TouchEngine_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
