// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/TouchBlueprintFunctionLibrary.h"
#include "Engine/Texture.h"
#include "Engine/Texture2D.h"
#include "Engine/TouchVariables.h"
#include "TouchEngineDynamicVariableStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTouchBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchBlueprintFunctionLibrary();
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchBlueprintFunctionLibrary_NoRegister();
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchEngineComponentBase_NoRegister();
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchEngineDAT_NoRegister();
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineCHOP();
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineCHOPChannel();
UPackage* Z_Construct_UPackage__Script_TouchEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function ClearCHOP ************************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_ClearCHOP_Statics
{
	struct TouchBlueprintFunctionLibrary_eventClearCHOP_Parms
	{
		FTouchEngineCHOP InChop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|CHOP" },
		{ "Comment", "/**\n\x09 * Remove all the Channels and Samples from the `FTouchEngineCHOP`\n\x09 */" },
		{ "CompactNodeTitle", "CHOP Clear" },
		{ "DisplayName", "CHOP Clear" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Remove all the Channels and Samples from the `FTouchEngineCHOP`" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_ClearCHOP_Statics::NewProp_InChop = { "InChop", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventClearCHOP_Parms, InChop), Z_Construct_UScriptStruct_FTouchEngineCHOP, METADATA_PARAMS(0, nullptr) }; // 4095773833
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_ClearCHOP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_ClearCHOP_Statics::NewProp_InChop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_ClearCHOP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_ClearCHOP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "ClearCHOP", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_ClearCHOP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_ClearCHOP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_ClearCHOP_Statics::TouchBlueprintFunctionLibrary_eventClearCHOP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_ClearCHOP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_ClearCHOP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_ClearCHOP_Statics::TouchBlueprintFunctionLibrary_eventClearCHOP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_ClearCHOP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_ClearCHOP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execClearCHOP)
{
	P_GET_STRUCT_REF(FTouchEngineCHOP,Z_Param_Out_InChop);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTouchBlueprintFunctionLibrary::ClearCHOP(Z_Param_Out_InChop);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function ClearCHOP **************************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function Conv_TouchEngineCHOPChannelToString 
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString_Statics
{
	struct TouchBlueprintFunctionLibrary_eventConv_TouchEngineCHOPChannelToString_Parms
	{
		FTouchEngineCHOPChannel InChopChannel;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "TouchEngine|Debug" },
		{ "Comment", "/**\n\x09* Helper function that converts a CHOP Channel to a debug string.\n\x09 * Useful for debugging but can be performance heavy for CHOPs with a lot of Channels and/or Samples.\n\x09 * Shouldn't be used outside of the debugging context.\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "CHOP Channel To Debug String" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Helper function that converts a CHOP Channel to a debug string.\nUseful for debugging but can be performance heavy for CHOPs with a lot of Channels and/or Samples.\nShouldn't be used outside of the debugging context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChopChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChopChannel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString_Statics::NewProp_InChopChannel = { "InChopChannel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventConv_TouchEngineCHOPChannelToString_Parms, InChopChannel), Z_Construct_UScriptStruct_FTouchEngineCHOPChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChopChannel_MetaData), NewProp_InChopChannel_MetaData) }; // 1490142556
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventConv_TouchEngineCHOPChannelToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString_Statics::NewProp_InChopChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "Conv_TouchEngineCHOPChannelToString", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString_Statics::TouchBlueprintFunctionLibrary_eventConv_TouchEngineCHOPChannelToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString_Statics::TouchBlueprintFunctionLibrary_eventConv_TouchEngineCHOPChannelToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execConv_TouchEngineCHOPChannelToString)
{
	P_GET_STRUCT_REF(FTouchEngineCHOPChannel,Z_Param_Out_InChopChannel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UTouchBlueprintFunctionLibrary::Conv_TouchEngineCHOPChannelToString(Z_Param_Out_InChopChannel);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function Conv_TouchEngineCHOPChannelToString 

// ********** Begin Class UTouchBlueprintFunctionLibrary Function Conv_TouchEngineCHOPToString *****
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString_Statics
{
	struct TouchBlueprintFunctionLibrary_eventConv_TouchEngineCHOPToString_Parms
	{
		FTouchEngineCHOP InChop;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "TouchEngine|Debug" },
		{ "Comment", "/**\n\x09 * Helper function that converts a CHOP to a debug string.\n\x09 * Useful for debugging but can be performance heavy for CHOPs with a lot of Channels and/or Samples.\n\x09 * Shouldn't be used outside of the debugging context.\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "CHOP To Debug String" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Helper function that converts a CHOP to a debug string.\nUseful for debugging but can be performance heavy for CHOPs with a lot of Channels and/or Samples.\nShouldn't be used outside of the debugging context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChop_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChop;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString_Statics::NewProp_InChop = { "InChop", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventConv_TouchEngineCHOPToString_Parms, InChop), Z_Construct_UScriptStruct_FTouchEngineCHOP, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChop_MetaData), NewProp_InChop_MetaData) }; // 4095773833
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventConv_TouchEngineCHOPToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString_Statics::NewProp_InChop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "Conv_TouchEngineCHOPToString", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString_Statics::TouchBlueprintFunctionLibrary_eventConv_TouchEngineCHOPToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString_Statics::TouchBlueprintFunctionLibrary_eventConv_TouchEngineCHOPToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execConv_TouchEngineCHOPToString)
{
	P_GET_STRUCT_REF(FTouchEngineCHOP,Z_Param_Out_InChop);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UTouchBlueprintFunctionLibrary::Conv_TouchEngineCHOPToString(Z_Param_Out_InChop);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function Conv_TouchEngineCHOPToString *******

// ********** Begin Class UTouchBlueprintFunctionLibrary Function FindGetterByType *****************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics
{
	struct TouchBlueprintFunctionLibrary_eventFindGetterByType_Parms
	{
		FName InType;
		bool IsArray;
		FName StructName;
		UFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "Comment", "// Returns a pointer to the appropriate getter UFunction based on type name, struct name, and if the value is an array\n" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Returns a pointer to the appropriate getter UFunction based on type name, struct name, and if the value is an array" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InType;
	static void NewProp_IsArray_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsArray;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StructName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventFindGetterByType_Parms, InType), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::NewProp_IsArray_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventFindGetterByType_Parms*)Obj)->IsArray = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::NewProp_IsArray = { "IsArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventFindGetterByType_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::NewProp_IsArray_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::NewProp_StructName = { "StructName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventFindGetterByType_Parms, StructName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventFindGetterByType_Parms, ReturnValue), Z_Construct_UClass_UFunction, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::NewProp_InType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::NewProp_IsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::NewProp_StructName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "FindGetterByType", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::TouchBlueprintFunctionLibrary_eventFindGetterByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::TouchBlueprintFunctionLibrary_eventFindGetterByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execFindGetterByType)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InType);
	P_GET_UBOOL(Z_Param_IsArray);
	P_GET_PROPERTY(FNameProperty,Z_Param_StructName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFunction**)Z_Param__Result=UTouchBlueprintFunctionLibrary::FindGetterByType(Z_Param_InType,Z_Param_IsArray,Z_Param_StructName);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function FindGetterByType *******************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function FindInputGetterByType ************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics
{
	struct TouchBlueprintFunctionLibrary_eventFindInputGetterByType_Parms
	{
		FName InType;
		bool IsArray;
		FName StructName;
		UFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "Comment", "// Returns a pointer to the appropriate input getter UFunction based on type name, struct name, and if the value is an array\n" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Returns a pointer to the appropriate input getter UFunction based on type name, struct name, and if the value is an array" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InType;
	static void NewProp_IsArray_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsArray;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StructName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventFindInputGetterByType_Parms, InType), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::NewProp_IsArray_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventFindInputGetterByType_Parms*)Obj)->IsArray = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::NewProp_IsArray = { "IsArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventFindInputGetterByType_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::NewProp_IsArray_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::NewProp_StructName = { "StructName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventFindInputGetterByType_Parms, StructName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventFindInputGetterByType_Parms, ReturnValue), Z_Construct_UClass_UFunction, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::NewProp_InType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::NewProp_IsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::NewProp_StructName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "FindInputGetterByType", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::TouchBlueprintFunctionLibrary_eventFindInputGetterByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::TouchBlueprintFunctionLibrary_eventFindInputGetterByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execFindInputGetterByType)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InType);
	P_GET_UBOOL(Z_Param_IsArray);
	P_GET_PROPERTY(FNameProperty,Z_Param_StructName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFunction**)Z_Param__Result=UTouchBlueprintFunctionLibrary::FindInputGetterByType(Z_Param_InType,Z_Param_IsArray,Z_Param_StructName);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function FindInputGetterByType **************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function FindSetterByType *****************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics
{
	struct TouchBlueprintFunctionLibrary_eventFindSetterByType_Parms
	{
		FName InType;
		bool IsArray;
		FName StructName;
		UFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "Comment", "// Returns a pointer to the appropriate setter UFunction based on type name, struct name, and if the value is an array\n" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Returns a pointer to the appropriate setter UFunction based on type name, struct name, and if the value is an array" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InType;
	static void NewProp_IsArray_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsArray;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StructName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventFindSetterByType_Parms, InType), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::NewProp_IsArray_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventFindSetterByType_Parms*)Obj)->IsArray = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::NewProp_IsArray = { "IsArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventFindSetterByType_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::NewProp_IsArray_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::NewProp_StructName = { "StructName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventFindSetterByType_Parms, StructName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventFindSetterByType_Parms, ReturnValue), Z_Construct_UClass_UFunction, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::NewProp_InType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::NewProp_IsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::NewProp_StructName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "FindSetterByType", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::TouchBlueprintFunctionLibrary_eventFindSetterByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::TouchBlueprintFunctionLibrary_eventFindSetterByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execFindSetterByType)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InType);
	P_GET_UBOOL(Z_Param_IsArray);
	P_GET_PROPERTY(FNameProperty,Z_Param_StructName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFunction**)Z_Param__Result=UTouchBlueprintFunctionLibrary::FindSetterByType(Z_Param_InType,Z_Param_IsArray,Z_Param_StructName);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function FindSetterByType *******************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetBoolInputLatestByName *********
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetBoolInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		bool Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetBoolInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetBoolInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_Value_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetBoolInputLatestByName_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetBoolInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetBoolInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetBoolInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetBoolInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetBoolInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetBoolInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetBoolInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetBoolInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetBoolInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_UBOOL_REF(Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetBoolInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetBoolInputLatestByName ***********

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetByteInputLatestByName *********
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetByteInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		uint8 Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetByteInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetByteInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetByteInputLatestByName_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetByteInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetByteInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetByteInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetByteInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetByteInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetByteInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetByteInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetByteInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetByteInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetByteInputLatestByName ***********

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetChannel ***********************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetChannel_Parms
	{
		FTouchEngineCHOP InChop;
		int32 InIndex;
		FTouchEngineCHOPChannel OutChannel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|CHOP" },
		{ "Comment", "/**\n\x09 * Returns the Channel at the given index, equivalent of breaking the FTouchEngineCHOP structure and getting the Channel at the given Index from the Channels array.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Returns the Channel at the given index, equivalent of breaking the FTouchEngineCHOP structure and getting the Channel at the given Index from the Channels array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChop;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::NewProp_InChop = { "InChop", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetChannel_Parms, InChop), Z_Construct_UScriptStruct_FTouchEngineCHOP, METADATA_PARAMS(0, nullptr) }; // 4095773833
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetChannel_Parms, InIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIndex_MetaData), NewProp_InIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::NewProp_OutChannel = { "OutChannel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetChannel_Parms, OutChannel), Z_Construct_UScriptStruct_FTouchEngineCHOPChannel, METADATA_PARAMS(0, nullptr) }; // 1490142556
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::NewProp_InChop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::NewProp_OutChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetChannel", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::TouchBlueprintFunctionLibrary_eventGetChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::TouchBlueprintFunctionLibrary_eventGetChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetChannel)
{
	P_GET_STRUCT_REF(FTouchEngineCHOP,Z_Param_Out_InChop);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_GET_STRUCT_REF(FTouchEngineCHOPChannel,Z_Param_Out_OutChannel);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTouchBlueprintFunctionLibrary::GetChannel(Z_Param_Out_InChop,Z_Param_InIndex,Z_Param_Out_OutChannel);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetChannel *************************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetChannelByName *****************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetChannelByName_Parms
	{
		FTouchEngineCHOP InChop;
		FString InChannelName;
		FTouchEngineCHOPChannel OutChannel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|CHOP" },
		{ "Comment", "/**\n\x09 * Returns the first Channel with the given name if found, equivalent of breaking the FTouchEngineCHOP structure, looping through the Channels array and returning the first one with the matching name.\n\x09 * @return Returns True if an `FTouchEngineCHOPChannel` with the given Channel Name was found, otherwise false\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Returns the first Channel with the given name if found, equivalent of breaking the FTouchEngineCHOP structure, looping through the Channels array and returning the first one with the matching name.\n@return Returns True if an `FTouchEngineCHOPChannel` with the given Channel Name was found, otherwise false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChannelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChop;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InChannelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutChannel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::NewProp_InChop = { "InChop", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetChannelByName_Parms, InChop), Z_Construct_UScriptStruct_FTouchEngineCHOP, METADATA_PARAMS(0, nullptr) }; // 4095773833
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::NewProp_InChannelName = { "InChannelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetChannelByName_Parms, InChannelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChannelName_MetaData), NewProp_InChannelName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::NewProp_OutChannel = { "OutChannel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetChannelByName_Parms, OutChannel), Z_Construct_UScriptStruct_FTouchEngineCHOPChannel, METADATA_PARAMS(0, nullptr) }; // 1490142556
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetChannelByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetChannelByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::NewProp_InChop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::NewProp_InChannelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::NewProp_OutChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetChannelByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::TouchBlueprintFunctionLibrary_eventGetChannelByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::TouchBlueprintFunctionLibrary_eventGetChannelByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetChannelByName)
{
	P_GET_STRUCT_REF(FTouchEngineCHOP,Z_Param_Out_InChop);
	P_GET_PROPERTY(FStrProperty,Z_Param_InChannelName);
	P_GET_STRUCT_REF(FTouchEngineCHOPChannel,Z_Param_Out_OutChannel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetChannelByName(Z_Param_Out_InChop,Z_Param_InChannelName,Z_Param_Out_OutChannel);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetChannelByName *******************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetCHOPByName ********************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetCHOPByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FTouchEngineCHOP Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetCHOPByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetCHOPByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetCHOPByName_Parms, Value), Z_Construct_UScriptStruct_FTouchEngineCHOP, METADATA_PARAMS(0, nullptr) }; // 4095773833
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetCHOPByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetCHOPByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetCHOPByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetCHOPByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetCHOPByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::TouchBlueprintFunctionLibrary_eventGetCHOPByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::TouchBlueprintFunctionLibrary_eventGetCHOPByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetCHOPByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_STRUCT_REF(FTouchEngineCHOP,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetCHOPByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetCHOPByName **********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetClassInputLatestByName ********
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetClassInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		UClass* Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetClassInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetClassInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetClassInputLatestByName_Parms, Value), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetClassInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetClassInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetClassInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetClassInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetClassInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetClassInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetClassInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetClassInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_OBJECT_REF(UClass,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetClassInputLatestByName(Z_Param_Target,Z_Param_VarName,P_ARG_GC_BARRIER(Z_Param_Out_Value),Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetClassInputLatestByName **********

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetColorInputLatestByName ********
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetColorInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FColor Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetColorInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetColorInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetColorInputLatestByName_Parms, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetColorInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetColorInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetColorInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetColorInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetColorInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetColorInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetColorInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetColorInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_STRUCT_REF(FColor,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetColorInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetColorInputLatestByName **********

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetDoubleArrayInputLatestByName **
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetDoubleArrayInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		TArray<double> Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetDoubleArrayInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetDoubleArrayInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetDoubleArrayInputLatestByName_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetDoubleArrayInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetDoubleArrayInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetDoubleArrayInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetDoubleArrayInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetDoubleArrayInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetDoubleArrayInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetDoubleArrayInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetDoubleArrayInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_TARRAY_REF(double,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetDoubleArrayInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetDoubleArrayInputLatestByName ****

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetEnumInputLatestByName *********
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetEnumInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		uint8 Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetEnumInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetEnumInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetEnumInputLatestByName_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetEnumInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetEnumInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetEnumInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetEnumInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetEnumInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetEnumInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetEnumInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetEnumInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetEnumInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetEnumInputLatestByName ***********

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetFloatArrayByName **************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetFloatArrayByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		TArray<float> Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatArrayByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatArrayByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatArrayByName_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatArrayByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatArrayByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetFloatArrayByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetFloatArrayByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetFloatArrayByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::TouchBlueprintFunctionLibrary_eventGetFloatArrayByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::TouchBlueprintFunctionLibrary_eventGetFloatArrayByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetFloatArrayByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_TARRAY_REF(float,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetFloatArrayByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetFloatArrayByName ****************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetFloatArrayInputLatestByName ***
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetFloatArrayInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		TArray<float> Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatArrayInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatArrayInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatArrayInputLatestByName_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatArrayInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatArrayInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetFloatArrayInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetFloatArrayInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetFloatArrayInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetFloatArrayInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetFloatArrayInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetFloatArrayInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_TARRAY_REF(float,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetFloatArrayInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetFloatArrayInputLatestByName *****

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetFloatByName *******************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetFloatByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		float Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetFloatByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetFloatByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetFloatByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::TouchBlueprintFunctionLibrary_eventGetFloatByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::TouchBlueprintFunctionLibrary_eventGetFloatByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetFloatByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetFloatByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetFloatByName *********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetFloatInputLatestByName ********
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetFloatInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		float Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "Comment", "// Get latest value given to an input\n" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Get latest value given to an input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatInputLatestByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetFloatInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetFloatInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetFloatInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetFloatInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetFloatInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetFloatInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetFloatInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetFloatInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetFloatInputLatestByName **********

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetInt64InputLatestByName ********
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetInt64InputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		int64 Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetInt64InputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetInt64InputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetInt64InputLatestByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetInt64InputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetInt64InputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetInt64InputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetInt64InputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetInt64InputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetInt64InputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetInt64InputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetInt64InputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetInt64InputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetInt64InputLatestByName **********

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetIntArrayInputLatestByName *****
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetIntArrayInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		TArray<int32> Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetIntArrayInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetIntArrayInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetIntArrayInputLatestByName_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetIntArrayInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetIntArrayInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetIntArrayInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetIntArrayInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetIntArrayInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetIntArrayInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetIntArrayInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetIntArrayInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetIntArrayInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetIntArrayInputLatestByName *******

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetIntInputLatestByName **********
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetIntInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		int32 Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetIntInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetIntInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetIntInputLatestByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetIntInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetIntInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetIntInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetIntInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetIntInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetIntInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetIntInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetIntInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetIntInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetIntInputLatestByName ************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetLinearColorInputLatestByName **
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetLinearColorInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FLinearColor Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetLinearColorInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetLinearColorInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetLinearColorInputLatestByName_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetLinearColorInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetLinearColorInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetLinearColorInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetLinearColorInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetLinearColorInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetLinearColorInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetLinearColorInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetLinearColorInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetLinearColorInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetLinearColorInputLatestByName ****

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetNameInputLatestByName *********
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetNameInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FName Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetNameInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetNameInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetNameInputLatestByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetNameInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetNameInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetNameInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetNameInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetNameInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetNameInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetNameInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetNameInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetNameInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetNameInputLatestByName ***********

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetNumChannels *******************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetNumChannels_Parms
	{
		FTouchEngineCHOP InChop;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|CHOP" },
		{ "Comment", "/**\n\x09 * Returns the number of Channels in the FTouchEngineCHOP, equivalent of breaking the FTouchEngineCHOP structure and getting the length of the Channels array.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Returns the number of Channels in the FTouchEngineCHOP, equivalent of breaking the FTouchEngineCHOP structure and getting the length of the Channels array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChop_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChop;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels_Statics::NewProp_InChop = { "InChop", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetNumChannels_Parms, InChop), Z_Construct_UScriptStruct_FTouchEngineCHOP, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChop_MetaData), NewProp_InChop_MetaData) }; // 4095773833
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetNumChannels_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels_Statics::NewProp_InChop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetNumChannels", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels_Statics::TouchBlueprintFunctionLibrary_eventGetNumChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels_Statics::TouchBlueprintFunctionLibrary_eventGetNumChannels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetNumChannels)
{
	P_GET_STRUCT_REF(FTouchEngineCHOP,Z_Param_Out_InChop);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetNumChannels(Z_Param_Out_InChop);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetNumChannels *********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetNumSamples ********************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetNumSamples_Parms
	{
		FTouchEngineCHOP InChop;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|CHOP" },
		{ "Comment", "/**\n\x09 * Returns the number of Samples in the FTouchEngineCHOP, equivalent of breaking the FTouchEngineCHOP structure, getting the first Channel and getting the length of the Values array.\n\x09 * It is only guaranteed to be the same for each Channel if the FTouchEngineCHOP is valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Returns the number of Samples in the FTouchEngineCHOP, equivalent of breaking the FTouchEngineCHOP structure, getting the first Channel and getting the length of the Values array.\nIt is only guaranteed to be the same for each Channel if the FTouchEngineCHOP is valid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChop_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChop;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples_Statics::NewProp_InChop = { "InChop", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetNumSamples_Parms, InChop), Z_Construct_UScriptStruct_FTouchEngineCHOP, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChop_MetaData), NewProp_InChop_MetaData) }; // 4095773833
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetNumSamples_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples_Statics::NewProp_InChop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetNumSamples", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples_Statics::TouchBlueprintFunctionLibrary_eventGetNumSamples_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples_Statics::TouchBlueprintFunctionLibrary_eventGetNumSamples_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetNumSamples)
{
	P_GET_STRUCT_REF(FTouchEngineCHOP,Z_Param_Out_InChop);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetNumSamples(Z_Param_Out_InChop);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetNumSamples **********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetStringArrayByName *************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetStringArrayByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		UTouchEngineDAT* Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringArrayByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringArrayByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringArrayByName_Parms, Value), Z_Construct_UClass_UTouchEngineDAT_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringArrayByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringArrayByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetStringArrayByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetStringArrayByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetStringArrayByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::TouchBlueprintFunctionLibrary_eventGetStringArrayByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::TouchBlueprintFunctionLibrary_eventGetStringArrayByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetStringArrayByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_OBJECT_REF(UTouchEngineDAT,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetStringArrayByName(Z_Param_Target,Z_Param_VarName,P_ARG_GC_BARRIER(Z_Param_Out_Value),Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetStringArrayByName ***************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetStringArrayInputLatestByName **
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetStringArrayInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		TArray<FString> Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringArrayInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringArrayInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringArrayInputLatestByName_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringArrayInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringArrayInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetStringArrayInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetStringArrayInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetStringArrayInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetStringArrayInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetStringArrayInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetStringArrayInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetStringArrayInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetStringArrayInputLatestByName ****

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetStringByName ******************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetStringByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FString Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetStringByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetStringByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetStringByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::TouchBlueprintFunctionLibrary_eventGetStringByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::TouchBlueprintFunctionLibrary_eventGetStringByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetStringByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetStringByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetStringByName ********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetStringInputLatestByName *******
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetStringInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FString Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringInputLatestByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetStringInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetStringInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetStringInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetStringInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetStringInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetStringInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetStringInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetStringInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetStringInputLatestByName *********

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetTextInputLatestByName *********
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetTextInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FText Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTextInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTextInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTextInputLatestByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTextInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTextInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetTextInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetTextInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetTextInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetTextInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetTextInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetTextInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetTextInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetTextInputLatestByName ***********

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetTexture2DByName ***************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetTexture2DByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		UTexture2D* Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "Comment", "/**\n\x09 * @param Value A texture valid for this frame and only until it is updated in a future cook. If you want to keep the texture for longer, see `Keep Frame Texture` \n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "@param Value A texture valid for this frame and only until it is updated in a future cook. If you want to keep the texture for longer, see `Keep Frame Texture`" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "DisplayName", "Frame Texture" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTexture2DByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTexture2DByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTexture2DByName_Parms, Value), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTexture2DByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTexture2DByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetTexture2DByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetTexture2DByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetTexture2DByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::TouchBlueprintFunctionLibrary_eventGetTexture2DByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::TouchBlueprintFunctionLibrary_eventGetTexture2DByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetTexture2DByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetTexture2DByName(Z_Param_Target,Z_Param_VarName,P_ARG_GC_BARRIER(Z_Param_Out_Value),Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetTexture2DByName *****************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetTexture2DInputLatestByName ****
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetTexture2DInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		UTexture2D* Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTexture2DInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTexture2DInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTexture2DInputLatestByName_Parms, Value), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTexture2DInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTexture2DInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetTexture2DInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetTexture2DInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetTexture2DInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetTexture2DInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetTexture2DInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetTexture2DInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetTexture2DInputLatestByName(Z_Param_Target,Z_Param_VarName,P_ARG_GC_BARRIER(Z_Param_Out_Value),Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetTexture2DInputLatestByName ******

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetTextureByName *****************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetTextureByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		UTexture* Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "Comment", "/**\n\x09 * @param Value A texture valid for this frame and only until it is updated in a future cook. If you want to keep the texture for longer, see `Keep Frame Texture` \n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "@param Value A texture valid for this frame and only until it is updated in a future cook. If you want to keep the texture for longer, see `Keep Frame Texture`" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "DisplayName", "Frame Texture" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTextureByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTextureByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTextureByName_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTextureByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTextureByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetTextureByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetTextureByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetTextureByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::TouchBlueprintFunctionLibrary_eventGetTextureByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::TouchBlueprintFunctionLibrary_eventGetTextureByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetTextureByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_OBJECT_REF(UTexture,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetTextureByName(Z_Param_Target,Z_Param_VarName,P_ARG_GC_BARRIER(Z_Param_Out_Value),Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetTextureByName *******************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetTextureInputLatestByName ******
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetTextureInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		UTexture* Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTextureInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTextureInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTextureInputLatestByName_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTextureInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetTextureInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetTextureInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetTextureInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetTextureInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetTextureInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetTextureInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetTextureInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_OBJECT_REF(UTexture,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetTextureInputLatestByName(Z_Param_Target,Z_Param_VarName,P_ARG_GC_BARRIER(Z_Param_Out_Value),Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetTextureInputLatestByName ********

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetVector2DInputLatestByName *****
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetVector2DInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FVector2D Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetVector2DInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetVector2DInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetVector2DInputLatestByName_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetVector2DInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetVector2DInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetVector2DInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetVector2DInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetVector2DInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetVector2DInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetVector2DInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetVector2DInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetVector2DInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetVector2DInputLatestByName *******

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetVector4InputLatestByName ******
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetVector4InputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FVector4 Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetVector4InputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetVector4InputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetVector4InputLatestByName_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetVector4InputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetVector4InputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetVector4InputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetVector4InputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetVector4InputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetVector4InputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetVector4InputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetVector4InputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetVector4InputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetVector4InputLatestByName ********

// ********** Begin Class UTouchBlueprintFunctionLibrary Function GetVectorInputLatestByName *******
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventGetVectorInputLatestByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FVector Value;
		int64 FrameLastUpdated;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetVectorInputLatestByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetVectorInputLatestByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetVectorInputLatestByName_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::NewProp_FrameLastUpdated = { "FrameLastUpdated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetVectorInputLatestByName_Parms, FrameLastUpdated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventGetVectorInputLatestByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventGetVectorInputLatestByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventGetVectorInputLatestByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::NewProp_FrameLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "GetVectorInputLatestByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetVectorInputLatestByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::TouchBlueprintFunctionLibrary_eventGetVectorInputLatestByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execGetVectorInputLatestByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_FrameLastUpdated);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::GetVectorInputLatestByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Out_FrameLastUpdated,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function GetVectorInputLatestByName *********

// ********** Begin Class UTouchBlueprintFunctionLibrary Function IsValidCHOP **********************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics
{
	struct TouchBlueprintFunctionLibrary_eventIsValidCHOP_Parms
	{
		FTouchEngineCHOP InChop;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|CHOP" },
		{ "Comment", "/**\n\x09 * Check if the FTouchEngineCHOP is valid. An FTouchEngineCHOP is valid when all channels have the same number of samples.\n\x09 * An FTouchEngineCHOP with no channels or with only empty channels is valid, such as CHOP Outputs from Get TouchEngine Output.\n\x09 */" },
		{ "CompactNodeTitle", "Is CHOP Input Valid?" },
		{ "DisplayName", "Is CHOP Input Valid" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Check if the FTouchEngineCHOP is valid. An FTouchEngineCHOP is valid when all channels have the same number of samples.\nAn FTouchEngineCHOP with no channels or with only empty channels is valid, such as CHOP Outputs from Get TouchEngine Output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChop_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChop;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::NewProp_InChop = { "InChop", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventIsValidCHOP_Parms, InChop), Z_Construct_UScriptStruct_FTouchEngineCHOP, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChop_MetaData), NewProp_InChop_MetaData) }; // 4095773833
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventIsValidCHOP_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventIsValidCHOP_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::NewProp_InChop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "IsValidCHOP", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::TouchBlueprintFunctionLibrary_eventIsValidCHOP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::TouchBlueprintFunctionLibrary_eventIsValidCHOP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execIsValidCHOP)
{
	P_GET_STRUCT_REF(FTouchEngineCHOP,Z_Param_Out_InChop);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::IsValidCHOP(Z_Param_Out_InChop);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function IsValidCHOP ************************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function RefreshTextureSampler ************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics
{
	struct TouchBlueprintFunctionLibrary_eventRefreshTextureSampler_Parms
	{
		UTexture* Texture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|TOP" },
		{ "Comment", "/**\n\x09 * Force the recreation of the internal Texture Samplers based on the current value of the Texture Filter, AddressX, AddressY, AddressZ, and MipBias.\n\x09 * This can be called on any type of textures (even the ones not created by TouchEngine), but it might not work on all types if they have specific implementations.\n\x09 * Returns true if the operation was successful (the Texture and its resource were valid)\n\x09 */" },
		{ "Keywords", "Sampler Filter" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Force the recreation of the internal Texture Samplers based on the current value of the Texture Filter, AddressX, AddressY, AddressZ, and MipBias.\nThis can be called on any type of textures (even the ones not created by TouchEngine), but it might not work on all types if they have specific implementations.\nReturns true if the operation was successful (the Texture and its resource were valid)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventRefreshTextureSampler_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventRefreshTextureSampler_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventRefreshTextureSampler_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "RefreshTextureSampler", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::TouchBlueprintFunctionLibrary_eventRefreshTextureSampler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::TouchBlueprintFunctionLibrary_eventRefreshTextureSampler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execRefreshTextureSampler)
{
	P_GET_OBJECT(UTexture,Z_Param_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::RefreshTextureSampler(Z_Param_Texture);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function RefreshTextureSampler **************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetBoolByName ********************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetBoolByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		bool Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetBoolByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetBoolByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::NewProp_Value_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetBoolByName_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetBoolByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetBoolByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetBoolByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetBoolByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetBoolByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::TouchBlueprintFunctionLibrary_eventSetBoolByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::TouchBlueprintFunctionLibrary_eventSetBoolByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetBoolByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_UBOOL(Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetBoolByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetBoolByName **********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetByteByName ********************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetByteByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		uint8 Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetByteByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetByteByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetByteByName_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetByteByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetByteByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetByteByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetByteByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::TouchBlueprintFunctionLibrary_eventSetByteByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::TouchBlueprintFunctionLibrary_eventSetByteByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetByteByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY(FByteProperty,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetByteByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetByteByName **********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetChopByName ********************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetChopByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FTouchEngineCHOP Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetChopByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetChopByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetChopByName_Parms, Value), Z_Construct_UScriptStruct_FTouchEngineCHOP, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 4095773833
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetChopByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetChopByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetChopByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetChopByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::TouchBlueprintFunctionLibrary_eventSetChopByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::TouchBlueprintFunctionLibrary_eventSetChopByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetChopByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_STRUCT_REF(FTouchEngineCHOP,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetChopByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetChopByName **********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetChopChannelByName *************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetChopChannelByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FTouchEngineCHOPChannel Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetChopChannelByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetChopChannelByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetChopChannelByName_Parms, Value), Z_Construct_UScriptStruct_FTouchEngineCHOPChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1490142556
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetChopChannelByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetChopChannelByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetChopChannelByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetChopChannelByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::TouchBlueprintFunctionLibrary_eventSetChopChannelByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::TouchBlueprintFunctionLibrary_eventSetChopChannelByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetChopChannelByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_STRUCT_REF(FTouchEngineCHOPChannel,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetChopChannelByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetChopChannelByName ***************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetClassByName *******************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetClassByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		UClass* Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetClassByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetClassByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetClassByName_Parms, Value), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetClassByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetClassByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetClassByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetClassByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::TouchBlueprintFunctionLibrary_eventSetClassByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::TouchBlueprintFunctionLibrary_eventSetClassByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetClassByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_OBJECT(UClass,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetClassByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetClassByName *********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetColorByName *******************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetColorByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FColor Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetColorByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetColorByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetColorByName_Parms, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetColorByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetColorByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetColorByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetColorByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::TouchBlueprintFunctionLibrary_eventSetColorByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::TouchBlueprintFunctionLibrary_eventSetColorByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetColorByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_STRUCT(FColor,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetColorByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetColorByName *********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetEnumByName ********************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetEnumByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		uint8 Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetEnumByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetEnumByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetEnumByName_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetEnumByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetEnumByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetEnumByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetEnumByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::TouchBlueprintFunctionLibrary_eventSetEnumByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::TouchBlueprintFunctionLibrary_eventSetEnumByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetEnumByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY(FByteProperty,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetEnumByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetEnumByName **********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetFloatArrayByName **************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetFloatArrayByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		TArray<float> Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetFloatArrayByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetFloatArrayByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetFloatArrayByName_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetFloatArrayByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetFloatArrayByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetFloatArrayByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetFloatArrayByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::TouchBlueprintFunctionLibrary_eventSetFloatArrayByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::TouchBlueprintFunctionLibrary_eventSetFloatArrayByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetFloatArrayByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_TARRAY(float,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetFloatArrayByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetFloatArrayByName ****************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetFloatByName *******************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetFloatByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		float Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "Comment", "// Setters for TouchEngine dynamic variables accessed through the TouchEngine Input K2 Node\n" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Setters for TouchEngine dynamic variables accessed through the TouchEngine Input K2 Node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetFloatByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetFloatByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetFloatByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetFloatByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetFloatByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetFloatByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetFloatByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::TouchBlueprintFunctionLibrary_eventSetFloatByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::TouchBlueprintFunctionLibrary_eventSetFloatByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetFloatByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetFloatByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetFloatByName *********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetInt64ByName *******************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetInt64ByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		int64 Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetInt64ByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetInt64ByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetInt64ByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetInt64ByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetInt64ByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetInt64ByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetInt64ByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::TouchBlueprintFunctionLibrary_eventSetInt64ByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::TouchBlueprintFunctionLibrary_eventSetInt64ByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetInt64ByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY(FInt64Property,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetInt64ByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetInt64ByName *********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetIntArrayByName ****************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetIntArrayByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		TArray<int32> Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetIntArrayByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetIntArrayByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetIntArrayByName_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetIntArrayByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetIntArrayByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetIntArrayByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetIntArrayByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::TouchBlueprintFunctionLibrary_eventSetIntArrayByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::TouchBlueprintFunctionLibrary_eventSetIntArrayByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetIntArrayByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_TARRAY(int32,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetIntArrayByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetIntArrayByName ******************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetIntByName *********************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetIntByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		int32 Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetIntByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetIntByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetIntByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetIntByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetIntByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetIntByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetIntByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::TouchBlueprintFunctionLibrary_eventSetIntByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::TouchBlueprintFunctionLibrary_eventSetIntByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetIntByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetIntByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetIntByName ***********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetLinearColorByName *************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetLinearColorByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FLinearColor Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetLinearColorByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetLinearColorByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetLinearColorByName_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetLinearColorByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetLinearColorByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetLinearColorByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetLinearColorByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::TouchBlueprintFunctionLibrary_eventSetLinearColorByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::TouchBlueprintFunctionLibrary_eventSetLinearColorByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetLinearColorByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_STRUCT(FLinearColor,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetLinearColorByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetLinearColorByName ***************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetNameByName ********************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetNameByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FName Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetNameByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetNameByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetNameByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetNameByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetNameByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetNameByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetNameByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::TouchBlueprintFunctionLibrary_eventSetNameByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::TouchBlueprintFunctionLibrary_eventSetNameByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetNameByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY(FNameProperty,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetNameByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetNameByName **********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetStringArrayByName *************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetStringArrayByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		TArray<FString> Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetStringArrayByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetStringArrayByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetStringArrayByName_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetStringArrayByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetStringArrayByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetStringArrayByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetStringArrayByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::TouchBlueprintFunctionLibrary_eventSetStringArrayByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::TouchBlueprintFunctionLibrary_eventSetStringArrayByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetStringArrayByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_TARRAY(FString,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetStringArrayByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetStringArrayByName ***************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetStringByName ******************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetStringByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FString Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetStringByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetStringByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetStringByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetStringByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetStringByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetStringByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetStringByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::TouchBlueprintFunctionLibrary_eventSetStringByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::TouchBlueprintFunctionLibrary_eventSetStringByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetStringByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetStringByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetStringByName ********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetTextByName ********************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetTextByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FText Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetTextByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetTextByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetTextByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetTextByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetTextByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetTextByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetTextByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::TouchBlueprintFunctionLibrary_eventSetTextByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::TouchBlueprintFunctionLibrary_eventSetTextByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetTextByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_PROPERTY(FTextProperty,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetTextByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetTextByName **********************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetTextureByName *****************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetTextureByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		UTexture* Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "Comment", "/**\n\x09 * Set a texture by Name \n\x09 * @param Target The Component holding the input\n\x09 * @param VarName The name of the Texture input\n\x09 * @param Value The Value of the texture input\n\x09 * @param Prefix \n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Set a texture by Name\n@param Target The Component holding the input\n@param VarName The name of the Texture input\n@param Value The Value of the texture input\n@param Prefix" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetTextureByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetTextureByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetTextureByName_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetTextureByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetTextureByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetTextureByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetTextureByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::TouchBlueprintFunctionLibrary_eventSetTextureByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::TouchBlueprintFunctionLibrary_eventSetTextureByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetTextureByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_OBJECT(UTexture,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetTextureByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetTextureByName *******************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetVector2DByName ****************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetVector2DByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FVector2D Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetVector2DByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetVector2DByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetVector2DByName_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetVector2DByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetVector2DByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetVector2DByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetVector2DByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::TouchBlueprintFunctionLibrary_eventSetVector2DByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::TouchBlueprintFunctionLibrary_eventSetVector2DByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetVector2DByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_STRUCT(FVector2D,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetVector2DByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetVector2DByName ******************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetVector4ByName *****************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetVector4ByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FVector4 Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetVector4ByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetVector4ByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetVector4ByName_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetVector4ByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetVector4ByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetVector4ByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetVector4ByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::TouchBlueprintFunctionLibrary_eventSetVector4ByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::TouchBlueprintFunctionLibrary_eventSetVector4ByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetVector4ByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_STRUCT(FVector4,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetVector4ByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetVector4ByName *******************

// ********** Begin Class UTouchBlueprintFunctionLibrary Function SetVectorByName ******************
struct Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics
{
	struct TouchBlueprintFunctionLibrary_eventSetVectorByName_Parms
	{
		UTouchEngineComponentBase* Target;
		FString VarName;
		FVector Value;
		FString Prefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetVectorByName_Parms, Target), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetVectorByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetVectorByName_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchBlueprintFunctionLibrary_eventSetVectorByName_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TouchBlueprintFunctionLibrary_eventSetVectorByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchBlueprintFunctionLibrary_eventSetVectorByName_Parms), &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchBlueprintFunctionLibrary, nullptr, "SetVectorByName", Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::TouchBlueprintFunctionLibrary_eventSetVectorByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::TouchBlueprintFunctionLibrary_eventSetVectorByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchBlueprintFunctionLibrary::execSetVectorByName)
{
	P_GET_OBJECT(UTouchEngineComponentBase,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_VarName);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTouchBlueprintFunctionLibrary::SetVectorByName(Z_Param_Target,Z_Param_VarName,Z_Param_Value,Z_Param_Prefix);
	P_NATIVE_END;
}
// ********** End Class UTouchBlueprintFunctionLibrary Function SetVectorByName ********************

// ********** Begin Class UTouchBlueprintFunctionLibrary *******************************************
void UTouchBlueprintFunctionLibrary::StaticRegisterNativesUTouchBlueprintFunctionLibrary()
{
	UClass* Class = UTouchBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearCHOP", &UTouchBlueprintFunctionLibrary::execClearCHOP },
		{ "Conv_TouchEngineCHOPChannelToString", &UTouchBlueprintFunctionLibrary::execConv_TouchEngineCHOPChannelToString },
		{ "Conv_TouchEngineCHOPToString", &UTouchBlueprintFunctionLibrary::execConv_TouchEngineCHOPToString },
		{ "FindGetterByType", &UTouchBlueprintFunctionLibrary::execFindGetterByType },
		{ "FindInputGetterByType", &UTouchBlueprintFunctionLibrary::execFindInputGetterByType },
		{ "FindSetterByType", &UTouchBlueprintFunctionLibrary::execFindSetterByType },
		{ "GetBoolInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetBoolInputLatestByName },
		{ "GetByteInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetByteInputLatestByName },
		{ "GetChannel", &UTouchBlueprintFunctionLibrary::execGetChannel },
		{ "GetChannelByName", &UTouchBlueprintFunctionLibrary::execGetChannelByName },
		{ "GetCHOPByName", &UTouchBlueprintFunctionLibrary::execGetCHOPByName },
		{ "GetClassInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetClassInputLatestByName },
		{ "GetColorInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetColorInputLatestByName },
		{ "GetDoubleArrayInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetDoubleArrayInputLatestByName },
		{ "GetEnumInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetEnumInputLatestByName },
		{ "GetFloatArrayByName", &UTouchBlueprintFunctionLibrary::execGetFloatArrayByName },
		{ "GetFloatArrayInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetFloatArrayInputLatestByName },
		{ "GetFloatByName", &UTouchBlueprintFunctionLibrary::execGetFloatByName },
		{ "GetFloatInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetFloatInputLatestByName },
		{ "GetInt64InputLatestByName", &UTouchBlueprintFunctionLibrary::execGetInt64InputLatestByName },
		{ "GetIntArrayInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetIntArrayInputLatestByName },
		{ "GetIntInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetIntInputLatestByName },
		{ "GetLinearColorInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetLinearColorInputLatestByName },
		{ "GetNameInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetNameInputLatestByName },
		{ "GetNumChannels", &UTouchBlueprintFunctionLibrary::execGetNumChannels },
		{ "GetNumSamples", &UTouchBlueprintFunctionLibrary::execGetNumSamples },
		{ "GetStringArrayByName", &UTouchBlueprintFunctionLibrary::execGetStringArrayByName },
		{ "GetStringArrayInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetStringArrayInputLatestByName },
		{ "GetStringByName", &UTouchBlueprintFunctionLibrary::execGetStringByName },
		{ "GetStringInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetStringInputLatestByName },
		{ "GetTextInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetTextInputLatestByName },
		{ "GetTexture2DByName", &UTouchBlueprintFunctionLibrary::execGetTexture2DByName },
		{ "GetTexture2DInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetTexture2DInputLatestByName },
		{ "GetTextureByName", &UTouchBlueprintFunctionLibrary::execGetTextureByName },
		{ "GetTextureInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetTextureInputLatestByName },
		{ "GetVector2DInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetVector2DInputLatestByName },
		{ "GetVector4InputLatestByName", &UTouchBlueprintFunctionLibrary::execGetVector4InputLatestByName },
		{ "GetVectorInputLatestByName", &UTouchBlueprintFunctionLibrary::execGetVectorInputLatestByName },
		{ "IsValidCHOP", &UTouchBlueprintFunctionLibrary::execIsValidCHOP },
		{ "RefreshTextureSampler", &UTouchBlueprintFunctionLibrary::execRefreshTextureSampler },
		{ "SetBoolByName", &UTouchBlueprintFunctionLibrary::execSetBoolByName },
		{ "SetByteByName", &UTouchBlueprintFunctionLibrary::execSetByteByName },
		{ "SetChopByName", &UTouchBlueprintFunctionLibrary::execSetChopByName },
		{ "SetChopChannelByName", &UTouchBlueprintFunctionLibrary::execSetChopChannelByName },
		{ "SetClassByName", &UTouchBlueprintFunctionLibrary::execSetClassByName },
		{ "SetColorByName", &UTouchBlueprintFunctionLibrary::execSetColorByName },
		{ "SetEnumByName", &UTouchBlueprintFunctionLibrary::execSetEnumByName },
		{ "SetFloatArrayByName", &UTouchBlueprintFunctionLibrary::execSetFloatArrayByName },
		{ "SetFloatByName", &UTouchBlueprintFunctionLibrary::execSetFloatByName },
		{ "SetInt64ByName", &UTouchBlueprintFunctionLibrary::execSetInt64ByName },
		{ "SetIntArrayByName", &UTouchBlueprintFunctionLibrary::execSetIntArrayByName },
		{ "SetIntByName", &UTouchBlueprintFunctionLibrary::execSetIntByName },
		{ "SetLinearColorByName", &UTouchBlueprintFunctionLibrary::execSetLinearColorByName },
		{ "SetNameByName", &UTouchBlueprintFunctionLibrary::execSetNameByName },
		{ "SetStringArrayByName", &UTouchBlueprintFunctionLibrary::execSetStringArrayByName },
		{ "SetStringByName", &UTouchBlueprintFunctionLibrary::execSetStringByName },
		{ "SetTextByName", &UTouchBlueprintFunctionLibrary::execSetTextByName },
		{ "SetTextureByName", &UTouchBlueprintFunctionLibrary::execSetTextureByName },
		{ "SetVector2DByName", &UTouchBlueprintFunctionLibrary::execSetVector2DByName },
		{ "SetVector4ByName", &UTouchBlueprintFunctionLibrary::execSetVector4ByName },
		{ "SetVectorByName", &UTouchBlueprintFunctionLibrary::execSetVectorByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTouchBlueprintFunctionLibrary;
UClass* UTouchBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UTouchBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UTouchBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TouchBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UTouchBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUTouchBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UTouchBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UTouchBlueprintFunctionLibrary_NoRegister()
{
	return UTouchBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTouchBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Blueprint/TouchBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_ClearCHOP, "ClearCHOP" }, // 2370525310
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPChannelToString, "Conv_TouchEngineCHOPChannelToString" }, // 3921125444
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_Conv_TouchEngineCHOPToString, "Conv_TouchEngineCHOPToString" }, // 4072709291
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindGetterByType, "FindGetterByType" }, // 3121877315
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindInputGetterByType, "FindInputGetterByType" }, // 3139820178
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_FindSetterByType, "FindSetterByType" }, // 2590425120
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetBoolInputLatestByName, "GetBoolInputLatestByName" }, // 2695136754
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetByteInputLatestByName, "GetByteInputLatestByName" }, // 3773137434
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannel, "GetChannel" }, // 1584023096
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetChannelByName, "GetChannelByName" }, // 3247701506
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetCHOPByName, "GetCHOPByName" }, // 416382972
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetClassInputLatestByName, "GetClassInputLatestByName" }, // 2520212339
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetColorInputLatestByName, "GetColorInputLatestByName" }, // 3425517193
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetDoubleArrayInputLatestByName, "GetDoubleArrayInputLatestByName" }, // 4025288550
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetEnumInputLatestByName, "GetEnumInputLatestByName" }, // 1533355054
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayByName, "GetFloatArrayByName" }, // 4235145604
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatArrayInputLatestByName, "GetFloatArrayInputLatestByName" }, // 495112415
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatByName, "GetFloatByName" }, // 2835284030
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetFloatInputLatestByName, "GetFloatInputLatestByName" }, // 1152794523
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetInt64InputLatestByName, "GetInt64InputLatestByName" }, // 3537554310
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntArrayInputLatestByName, "GetIntArrayInputLatestByName" }, // 2400184156
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetIntInputLatestByName, "GetIntInputLatestByName" }, // 1690515366
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetLinearColorInputLatestByName, "GetLinearColorInputLatestByName" }, // 3642388782
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNameInputLatestByName, "GetNameInputLatestByName" }, // 1132058137
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumChannels, "GetNumChannels" }, // 4014193118
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetNumSamples, "GetNumSamples" }, // 3311418312
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayByName, "GetStringArrayByName" }, // 3179273901
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringArrayInputLatestByName, "GetStringArrayInputLatestByName" }, // 3412514939
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringByName, "GetStringByName" }, // 2523934235
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetStringInputLatestByName, "GetStringInputLatestByName" }, // 2215028907
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextInputLatestByName, "GetTextInputLatestByName" }, // 3777743290
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DByName, "GetTexture2DByName" }, // 4119919977
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTexture2DInputLatestByName, "GetTexture2DInputLatestByName" }, // 2917566798
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureByName, "GetTextureByName" }, // 46332559
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetTextureInputLatestByName, "GetTextureInputLatestByName" }, // 2357143657
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector2DInputLatestByName, "GetVector2DInputLatestByName" }, // 2865481071
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVector4InputLatestByName, "GetVector4InputLatestByName" }, // 2094614381
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_GetVectorInputLatestByName, "GetVectorInputLatestByName" }, // 3866717991
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_IsValidCHOP, "IsValidCHOP" }, // 642255100
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_RefreshTextureSampler, "RefreshTextureSampler" }, // 169985156
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetBoolByName, "SetBoolByName" }, // 3940234717
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetByteByName, "SetByteByName" }, // 4038082542
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopByName, "SetChopByName" }, // 45437186
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetChopChannelByName, "SetChopChannelByName" }, // 4128285369
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetClassByName, "SetClassByName" }, // 2422205472
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetColorByName, "SetColorByName" }, // 2563417628
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetEnumByName, "SetEnumByName" }, // 2174726032
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatArrayByName, "SetFloatArrayByName" }, // 1084386479
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetFloatByName, "SetFloatByName" }, // 4146360128
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetInt64ByName, "SetInt64ByName" }, // 2195068124
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntArrayByName, "SetIntArrayByName" }, // 332908370
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetIntByName, "SetIntByName" }, // 1665961881
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetLinearColorByName, "SetLinearColorByName" }, // 751674469
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetNameByName, "SetNameByName" }, // 1038985123
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringArrayByName, "SetStringArrayByName" }, // 1215555112
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetStringByName, "SetStringByName" }, // 1860555623
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextByName, "SetTextByName" }, // 116480472
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetTextureByName, "SetTextureByName" }, // 2923721301
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector2DByName, "SetVector2DByName" }, // 1656066005
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVector4ByName, "SetVector4ByName" }, // 3010037298
		{ &Z_Construct_UFunction_UTouchBlueprintFunctionLibrary_SetVectorByName, "SetVectorByName" }, // 1514113877
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTouchBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchBlueprintFunctionLibrary_Statics::ClassParams = {
	&UTouchBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UTouchBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UTouchBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchBlueprintFunctionLibrary.OuterSingleton;
}
UTouchBlueprintFunctionLibrary::UTouchBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchBlueprintFunctionLibrary);
UTouchBlueprintFunctionLibrary::~UTouchBlueprintFunctionLibrary() {}
// ********** End Class UTouchBlueprintFunctionLibrary *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchBlueprintFunctionLibrary_h__Script_TouchEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchBlueprintFunctionLibrary, UTouchBlueprintFunctionLibrary::StaticClass, TEXT("UTouchBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UTouchBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchBlueprintFunctionLibrary), 4261036279U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchBlueprintFunctionLibrary_h__Script_TouchEngine_1049314405(TEXT("/Script/TouchEngine"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchBlueprintFunctionLibrary_h__Script_TouchEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchBlueprintFunctionLibrary_h__Script_TouchEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
