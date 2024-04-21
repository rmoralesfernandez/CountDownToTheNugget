// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CountDownToTheNugget/GameManagerInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManagerInstance() {}

// Begin Cross Module References
COUNTDOWNTOTHENUGGET_API UClass* Z_Construct_UClass_UGameManagerInstance();
COUNTDOWNTOTHENUGGET_API UClass* Z_Construct_UClass_UGameManagerInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_CountDownToTheNugget();
// End Cross Module References

// Begin Class UGameManagerInstance Function RandomNumberPOP
struct Z_Construct_UFunction_UGameManagerInstance_RandomNumberPOP_Statics
{
	struct GameManagerInstance_eventRandomNumberPOP_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Manager" },
		{ "ModuleRelativePath", "GameManagerInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameManagerInstance_RandomNumberPOP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameManagerInstance_eventRandomNumberPOP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameManagerInstance_RandomNumberPOP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManagerInstance_RandomNumberPOP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManagerInstance_RandomNumberPOP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManagerInstance_RandomNumberPOP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManagerInstance, nullptr, "RandomNumberPOP", nullptr, nullptr, Z_Construct_UFunction_UGameManagerInstance_RandomNumberPOP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManagerInstance_RandomNumberPOP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameManagerInstance_RandomNumberPOP_Statics::GameManagerInstance_eventRandomNumberPOP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManagerInstance_RandomNumberPOP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameManagerInstance_RandomNumberPOP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameManagerInstance_RandomNumberPOP_Statics::GameManagerInstance_eventRandomNumberPOP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameManagerInstance_RandomNumberPOP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameManagerInstance_RandomNumberPOP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameManagerInstance::execRandomNumberPOP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->RandomNumberPOP();
	P_NATIVE_END;
}
// End Class UGameManagerInstance Function RandomNumberPOP

// Begin Class UGameManagerInstance
void UGameManagerInstance::StaticRegisterNativesUGameManagerInstance()
{
	UClass* Class = UGameManagerInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RandomNumberPOP", &UGameManagerInstance::execRandomNumberPOP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameManagerInstance);
UClass* Z_Construct_UClass_UGameManagerInstance_NoRegister()
{
	return UGameManagerInstance::StaticClass();
}
struct Z_Construct_UClass_UGameManagerInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameManagerInstance.h" },
		{ "ModuleRelativePath", "GameManagerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_randNum_MetaData[] = {
		{ "Category", "GameManagerInstance" },
		{ "ModuleRelativePath", "GameManagerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountDownTimerGM_MetaData[] = {
		{ "Category", "Game Manager" },
		{ "ModuleRelativePath", "GameManagerInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_randNum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CountDownTimerGM;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameManagerInstance_RandomNumberPOP, "RandomNumberPOP" }, // 3360896884
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameManagerInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameManagerInstance_Statics::NewProp_randNum = { "randNum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameManagerInstance, randNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_randNum_MetaData), NewProp_randNum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameManagerInstance_Statics::NewProp_CountDownTimerGM = { "CountDownTimerGM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameManagerInstance, CountDownTimerGM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountDownTimerGM_MetaData), NewProp_CountDownTimerGM_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameManagerInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameManagerInstance_Statics::NewProp_randNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameManagerInstance_Statics::NewProp_CountDownTimerGM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameManagerInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameManagerInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_CountDownToTheNugget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameManagerInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameManagerInstance_Statics::ClassParams = {
	&UGameManagerInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameManagerInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameManagerInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameManagerInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameManagerInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameManagerInstance()
{
	if (!Z_Registration_Info_UClass_UGameManagerInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameManagerInstance.OuterSingleton, Z_Construct_UClass_UGameManagerInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameManagerInstance.OuterSingleton;
}
template<> COUNTDOWNTOTHENUGGET_API UClass* StaticClass<UGameManagerInstance>()
{
	return UGameManagerInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameManagerInstance);
UGameManagerInstance::~UGameManagerInstance() {}
// End Class UGameManagerInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ricar_Desktop_TheCore_Unreal_Proyectos_CountDownToTheNugget_Source_CountDownToTheNugget_GameManagerInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameManagerInstance, UGameManagerInstance::StaticClass, TEXT("UGameManagerInstance"), &Z_Registration_Info_UClass_UGameManagerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameManagerInstance), 4262586575U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ricar_Desktop_TheCore_Unreal_Proyectos_CountDownToTheNugget_Source_CountDownToTheNugget_GameManagerInstance_h_1337147500(TEXT("/Script/CountDownToTheNugget"),
	Z_CompiledInDeferFile_FID_Users_ricar_Desktop_TheCore_Unreal_Proyectos_CountDownToTheNugget_Source_CountDownToTheNugget_GameManagerInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ricar_Desktop_TheCore_Unreal_Proyectos_CountDownToTheNugget_Source_CountDownToTheNugget_GameManagerInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
