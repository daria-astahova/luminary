// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Util/CookFrameData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCookFrameData() {}

// ********** Begin Cross Module References ********************************************************
TOUCHENGINE_API UEnum* Z_Construct_UEnum_TouchEngine_ECookFrameResult();
UPackage* Z_Construct_UPackage__Script_TouchEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECookFrameResult **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECookFrameResult;
static UEnum* ECookFrameResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECookFrameResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECookFrameResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TouchEngine_ECookFrameResult, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("ECookFrameResult"));
	}
	return Z_Registration_Info_UEnum_ECookFrameResult.OuterSingleton;
}
template<> TOUCHENGINE_API UEnum* StaticEnum<ECookFrameResult>()
{
	return ECookFrameResult_StaticEnum();
}
struct Z_Construct_UEnum_TouchEngine_ECookFrameResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BadRequest.Comment", "/** Arguments were not correct or the TouchEngine instance was not valid when we wanted to start a cook */" },
		{ "BadRequest.Name", "ECookFrameResult::BadRequest" },
		{ "BadRequest.ToolTip", "Arguments were not correct or the TouchEngine instance was not valid when we wanted to start a cook" },
		{ "BlueprintType", "true" },
		{ "Cancelled.Comment", "/** TouchEngine was requested to be shut down while a Cook was under process */" },
		{ "Cancelled.Name", "ECookFrameResult::Cancelled" },
		{ "Cancelled.ToolTip", "TouchEngine was requested to be shut down while a Cook was under process" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ECookFrameResult::Count" },
		{ "FailedToStartCook.Comment", "/** TouchEngine returned an error when the frame was started. */" },
		{ "FailedToStartCook.Name", "ECookFrameResult::FailedToStartCook" },
		{ "FailedToStartCook.ToolTip", "TouchEngine returned an error when the frame was started." },
		{ "InputsDiscarded.Comment", "/** The inputs were discarded because the input queue became bigger than the Input Buffer Limit.\n\x09 * When this happens, the value of the inputs will be given to the next set of inputs in the queue, unless they already define a value for those inputs.\n\x09 * This should only happen in Delayed Synchronized and Independent modes. */" },
		{ "InputsDiscarded.Name", "ECookFrameResult::InputsDiscarded" },
		{ "InputsDiscarded.ToolTip", "The inputs were discarded because the input queue became bigger than the Input Buffer Limit.\nWhen this happens, the value of the inputs will be given to the next set of inputs in the queue, unless they already define a value for those inputs.\nThis should only happen in Delayed Synchronized and Independent modes." },
		{ "InternalTouchEngineError.Comment", "/** TouchEngine failed to cook the frame */" },
		{ "InternalTouchEngineError.DisplayName", "Internal TouchEngine Error" },
		{ "InternalTouchEngineError.Name", "ECookFrameResult::InternalTouchEngineError" },
		{ "InternalTouchEngineError.ToolTip", "TouchEngine failed to cook the frame" },
		{ "ModuleRelativePath", "Public/Engine/Util/CookFrameData.h" },
		{ "Success.Comment", "/** The cook was successful. It does not mean that the frame was not dropped by TouchEngine. */" },
		{ "Success.Name", "ECookFrameResult::Success" },
		{ "Success.ToolTip", "The cook was successful. It does not mean that the frame was not dropped by TouchEngine." },
		{ "TouchEngineCookTimeout.Comment", "/** TouchEngine did not send a response to the cook. You can look at increasing the Timout in the TouchEngine Component */" },
		{ "TouchEngineCookTimeout.Name", "ECookFrameResult::TouchEngineCookTimeout" },
		{ "TouchEngineCookTimeout.ToolTip", "TouchEngine did not send a response to the cook. You can look at increasing the Timout in the TouchEngine Component" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECookFrameResult::Success", (int64)ECookFrameResult::Success },
		{ "ECookFrameResult::InputsDiscarded", (int64)ECookFrameResult::InputsDiscarded },
		{ "ECookFrameResult::InternalTouchEngineError", (int64)ECookFrameResult::InternalTouchEngineError },
		{ "ECookFrameResult::Cancelled", (int64)ECookFrameResult::Cancelled },
		{ "ECookFrameResult::BadRequest", (int64)ECookFrameResult::BadRequest },
		{ "ECookFrameResult::FailedToStartCook", (int64)ECookFrameResult::FailedToStartCook },
		{ "ECookFrameResult::TouchEngineCookTimeout", (int64)ECookFrameResult::TouchEngineCookTimeout },
		{ "ECookFrameResult::Count", (int64)ECookFrameResult::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TouchEngine_ECookFrameResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	"ECookFrameResult",
	"ECookFrameResult",
	Z_Construct_UEnum_TouchEngine_ECookFrameResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TouchEngine_ECookFrameResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TouchEngine_ECookFrameResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TouchEngine_ECookFrameResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TouchEngine_ECookFrameResult()
{
	if (!Z_Registration_Info_UEnum_ECookFrameResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECookFrameResult.InnerSingleton, Z_Construct_UEnum_TouchEngine_ECookFrameResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECookFrameResult.InnerSingleton;
}
// ********** End Enum ECookFrameResult ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_Util_CookFrameData_h__Script_TouchEngine_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECookFrameResult_StaticEnum, TEXT("ECookFrameResult"), &Z_Registration_Info_UEnum_ECookFrameResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1948482895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_Util_CookFrameData_h__Script_TouchEngine_4062513181(TEXT("/Script/TouchEngine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_Util_CookFrameData_h__Script_TouchEngine_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_Util_CookFrameData_h__Script_TouchEngine_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
