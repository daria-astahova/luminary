// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/TouchBlueprintFunctionLibrary.h"

#ifdef TOUCHENGINE_TouchBlueprintFunctionLibrary_generated_h
#error "TouchBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in TouchBlueprintFunctionLibrary.h"
#endif
#define TOUCHENGINE_TouchBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UFunction;
class UObject;
class UTexture2D;
class UTexture;
class UTouchEngineComponentBase;
class UTouchEngineDAT;
struct FColor;
struct FLinearColor;
struct FTouchEngineCHOP;
struct FTouchEngineCHOPChannel;

// ********** Begin Class UTouchBlueprintFunctionLibrary *******************************************
#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchBlueprintFunctionLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearCHOP); \
	DECLARE_FUNCTION(execGetChannelByName); \
	DECLARE_FUNCTION(execGetChannel); \
	DECLARE_FUNCTION(execGetNumSamples); \
	DECLARE_FUNCTION(execGetNumChannels); \
	DECLARE_FUNCTION(execIsValidCHOP); \
	DECLARE_FUNCTION(execConv_TouchEngineCHOPChannelToString); \
	DECLARE_FUNCTION(execConv_TouchEngineCHOPToString); \
	DECLARE_FUNCTION(execRefreshTextureSampler); \
	DECLARE_FUNCTION(execGetEnumInputLatestByName); \
	DECLARE_FUNCTION(execGetVector2DInputLatestByName); \
	DECLARE_FUNCTION(execGetVector4InputLatestByName); \
	DECLARE_FUNCTION(execGetVectorInputLatestByName); \
	DECLARE_FUNCTION(execGetLinearColorInputLatestByName); \
	DECLARE_FUNCTION(execGetColorInputLatestByName); \
	DECLARE_FUNCTION(execGetTextInputLatestByName); \
	DECLARE_FUNCTION(execGetStringArrayInputLatestByName); \
	DECLARE_FUNCTION(execGetStringInputLatestByName); \
	DECLARE_FUNCTION(execGetByteInputLatestByName); \
	DECLARE_FUNCTION(execGetClassInputLatestByName); \
	DECLARE_FUNCTION(execGetTexture2DInputLatestByName); \
	DECLARE_FUNCTION(execGetTextureInputLatestByName); \
	DECLARE_FUNCTION(execGetNameInputLatestByName); \
	DECLARE_FUNCTION(execGetBoolInputLatestByName); \
	DECLARE_FUNCTION(execGetIntArrayInputLatestByName); \
	DECLARE_FUNCTION(execGetInt64InputLatestByName); \
	DECLARE_FUNCTION(execGetIntInputLatestByName); \
	DECLARE_FUNCTION(execGetDoubleArrayInputLatestByName); \
	DECLARE_FUNCTION(execGetFloatArrayInputLatestByName); \
	DECLARE_FUNCTION(execGetFloatInputLatestByName); \
	DECLARE_FUNCTION(execGetCHOPByName); \
	DECLARE_FUNCTION(execGetFloatByName); \
	DECLARE_FUNCTION(execGetStringByName); \
	DECLARE_FUNCTION(execGetFloatArrayByName); \
	DECLARE_FUNCTION(execGetStringArrayByName); \
	DECLARE_FUNCTION(execGetTexture2DByName); \
	DECLARE_FUNCTION(execGetTextureByName); \
	DECLARE_FUNCTION(execSetChopChannelByName); \
	DECLARE_FUNCTION(execSetChopByName); \
	DECLARE_FUNCTION(execSetEnumByName); \
	DECLARE_FUNCTION(execSetVector4ByName); \
	DECLARE_FUNCTION(execSetVector2DByName); \
	DECLARE_FUNCTION(execSetVectorByName); \
	DECLARE_FUNCTION(execSetLinearColorByName); \
	DECLARE_FUNCTION(execSetColorByName); \
	DECLARE_FUNCTION(execSetTextByName); \
	DECLARE_FUNCTION(execSetStringArrayByName); \
	DECLARE_FUNCTION(execSetStringByName); \
	DECLARE_FUNCTION(execSetByteByName); \
	DECLARE_FUNCTION(execSetClassByName); \
	DECLARE_FUNCTION(execSetTextureByName); \
	DECLARE_FUNCTION(execSetNameByName); \
	DECLARE_FUNCTION(execSetBoolByName); \
	DECLARE_FUNCTION(execSetIntArrayByName); \
	DECLARE_FUNCTION(execSetInt64ByName); \
	DECLARE_FUNCTION(execSetIntByName); \
	DECLARE_FUNCTION(execSetFloatArrayByName); \
	DECLARE_FUNCTION(execSetFloatByName); \
	DECLARE_FUNCTION(execFindInputGetterByType); \
	DECLARE_FUNCTION(execFindGetterByType); \
	DECLARE_FUNCTION(execFindSetterByType);


TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchBlueprintFunctionLibrary_NoRegister();

#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchBlueprintFunctionLibrary_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UTouchBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UTouchBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TouchEngine"), Z_Construct_UClass_UTouchBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UTouchBlueprintFunctionLibrary)


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchBlueprintFunctionLibrary_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTouchBlueprintFunctionLibrary(UTouchBlueprintFunctionLibrary&&) = delete; \
	UTouchBlueprintFunctionLibrary(const UTouchBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchBlueprintFunctionLibrary) \
	NO_API virtual ~UTouchBlueprintFunctionLibrary();


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchBlueprintFunctionLibrary_h_34_PROLOG
#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchBlueprintFunctionLibrary_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchBlueprintFunctionLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchBlueprintFunctionLibrary_h_37_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchBlueprintFunctionLibrary_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTouchBlueprintFunctionLibrary;

// ********** End Class UTouchBlueprintFunctionLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
