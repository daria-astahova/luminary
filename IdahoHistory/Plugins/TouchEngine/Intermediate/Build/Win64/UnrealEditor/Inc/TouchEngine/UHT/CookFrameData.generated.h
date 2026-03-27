// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Util/CookFrameData.h"

#ifdef TOUCHENGINE_CookFrameData_generated_h
#error "CookFrameData.generated.h already included, missing '#pragma once' in CookFrameData.h"
#endif
#define TOUCHENGINE_CookFrameData_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_Util_CookFrameData_h

// ********** Begin Enum ECookFrameResult **********************************************************
#define FOREACH_ENUM_ECOOKFRAMERESULT(op) \
	op(ECookFrameResult::Success) \
	op(ECookFrameResult::InputsDiscarded) \
	op(ECookFrameResult::InternalTouchEngineError) \
	op(ECookFrameResult::Cancelled) \
	op(ECookFrameResult::BadRequest) \
	op(ECookFrameResult::FailedToStartCook) \
	op(ECookFrameResult::TouchEngineCookTimeout) \
	op(ECookFrameResult::Count) 

enum class ECookFrameResult : uint8;
template<> struct TIsUEnumClass<ECookFrameResult> { enum { Value = true }; };
template<> TOUCHENGINE_API UEnum* StaticEnum<ECookFrameResult>();
// ********** End Enum ECookFrameResult ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
