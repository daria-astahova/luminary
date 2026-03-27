// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/TouchEngineActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTouchEngineActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
TOUCHENGINE_API UClass* Z_Construct_UClass_ATouchEngineActor();
TOUCHENGINE_API UClass* Z_Construct_UClass_ATouchEngineActor_NoRegister();
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchEngineComponentBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_TouchEngine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATouchEngineActor Function GetTouchEngineComponent ***********************
struct Z_Construct_UFunction_ATouchEngineActor_GetTouchEngineComponent_Statics
{
	struct TouchEngineActor_eventGetTouchEngineComponent_Parms
	{
		UTouchEngineComponentBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchEngine|Properties" },
		{ "DisplayName", "Get TouchEngine Component" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATouchEngineActor_GetTouchEngineComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchEngineActor_eventGetTouchEngineComponent_Parms, ReturnValue), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATouchEngineActor_GetTouchEngineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATouchEngineActor_GetTouchEngineComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATouchEngineActor_GetTouchEngineComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATouchEngineActor_GetTouchEngineComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATouchEngineActor, nullptr, "GetTouchEngineComponent", Z_Construct_UFunction_ATouchEngineActor_GetTouchEngineComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATouchEngineActor_GetTouchEngineComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATouchEngineActor_GetTouchEngineComponent_Statics::TouchEngineActor_eventGetTouchEngineComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATouchEngineActor_GetTouchEngineComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATouchEngineActor_GetTouchEngineComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATouchEngineActor_GetTouchEngineComponent_Statics::TouchEngineActor_eventGetTouchEngineComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATouchEngineActor_GetTouchEngineComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATouchEngineActor_GetTouchEngineComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATouchEngineActor::execGetTouchEngineComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTouchEngineComponentBase**)Z_Param__Result=P_THIS->GetTouchEngineComponent();
	P_NATIVE_END;
}
// ********** End Class ATouchEngineActor Function GetTouchEngineComponent *************************

// ********** Begin Class ATouchEngineActor ********************************************************
void ATouchEngineActor::StaticRegisterNativesATouchEngineActor()
{
	UClass* Class = ATouchEngineActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTouchEngineComponent", &ATouchEngineActor::execGetTouchEngineComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATouchEngineActor;
UClass* ATouchEngineActor::GetPrivateStaticClass()
{
	using TClass = ATouchEngineActor;
	if (!Z_Registration_Info_UClass_ATouchEngineActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TouchEngineActor"),
			Z_Registration_Info_UClass_ATouchEngineActor.InnerSingleton,
			StaticRegisterNativesATouchEngineActor,
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
	return Z_Registration_Info_UClass_ATouchEngineActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ATouchEngineActor_NoRegister()
{
	return ATouchEngineActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATouchEngineActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Blueprint/TouchEngineActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchEngineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "DisplayName", "TouchEngine Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/TouchEngineActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchEngineComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATouchEngineActor_GetTouchEngineComponent, "GetTouchEngineComponent" }, // 1225297783
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATouchEngineActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATouchEngineActor_Statics::NewProp_TouchEngineComponent = { "TouchEngineComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATouchEngineActor, TouchEngineComponent), Z_Construct_UClass_UTouchEngineComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchEngineComponent_MetaData), NewProp_TouchEngineComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATouchEngineActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATouchEngineActor_Statics::NewProp_TouchEngineComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATouchEngineActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATouchEngineActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATouchEngineActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATouchEngineActor_Statics::ClassParams = {
	&ATouchEngineActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATouchEngineActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATouchEngineActor_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATouchEngineActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATouchEngineActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATouchEngineActor()
{
	if (!Z_Registration_Info_UClass_ATouchEngineActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATouchEngineActor.OuterSingleton, Z_Construct_UClass_ATouchEngineActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATouchEngineActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATouchEngineActor);
ATouchEngineActor::~ATouchEngineActor() {}
// ********** End Class ATouchEngineActor **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineActor_h__Script_TouchEngine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATouchEngineActor, ATouchEngineActor::StaticClass, TEXT("ATouchEngineActor"), &Z_Registration_Info_UClass_ATouchEngineActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATouchEngineActor), 41146283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineActor_h__Script_TouchEngine_2464675449(TEXT("/Script/TouchEngine"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineActor_h__Script_TouchEngine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineActor_h__Script_TouchEngine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
