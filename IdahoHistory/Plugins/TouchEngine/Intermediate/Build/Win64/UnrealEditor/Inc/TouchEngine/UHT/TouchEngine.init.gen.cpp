// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchEngine_init() {}
	TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_BeginPlay__DelegateSignature();
	TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_EndPlay__DelegateSignature();
	TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature();
	TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature();
	TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature();
	TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnToxLoaded__DelegateSignature();
	TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnToxReset__DelegateSignature();
	TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnToxStartedLoading__DelegateSignature();
	TOUCHENGINE_API UFunction* Z_Construct_UDelegateFunction_TouchEngine_OnToxUnloaded__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TouchEngine;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TouchEngine()
	{
		if (!Z_Registration_Info_UPackage__Script_TouchEngine.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TouchEngine_BeginPlay__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TouchEngine_EndPlay__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TouchEngine_OnEndFrame__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TouchEngine_OnStartFrame__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TouchEngine_OnToxFailedLoad__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TouchEngine_OnToxLoaded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TouchEngine_OnToxReset__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TouchEngine_OnToxStartedLoading__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TouchEngine_OnToxUnloaded__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TouchEngine",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8DE6B48B,
				0xAB924B28,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TouchEngine.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TouchEngine.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TouchEngine(Z_Construct_UPackage__Script_TouchEngine, TEXT("/Script/TouchEngine"), Z_Registration_Info_UPackage__Script_TouchEngine, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8DE6B48B, 0xAB924B28));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
