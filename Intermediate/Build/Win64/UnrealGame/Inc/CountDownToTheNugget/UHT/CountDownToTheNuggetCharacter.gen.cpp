// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CountDownToTheNugget/CountDownToTheNuggetCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCountDownToTheNuggetCharacter() {}

// Begin Cross Module References
COUNTDOWNTOTHENUGGET_API UClass* Z_Construct_UClass_ACountDownToTheNuggetCharacter();
COUNTDOWNTOTHENUGGET_API UClass* Z_Construct_UClass_ACountDownToTheNuggetCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_CountDownToTheNugget();
// End Cross Module References

// Begin Class ACountDownToTheNuggetCharacter Function CountDownDone
struct Z_Construct_UFunction_ACountDownToTheNuggetCharacter_CountDownDone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CountDownToTheNuggetCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACountDownToTheNuggetCharacter_CountDownDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACountDownToTheNuggetCharacter, nullptr, "CountDownDone", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACountDownToTheNuggetCharacter_CountDownDone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACountDownToTheNuggetCharacter_CountDownDone_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACountDownToTheNuggetCharacter_CountDownDone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACountDownToTheNuggetCharacter_CountDownDone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACountDownToTheNuggetCharacter::execCountDownDone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CountDownDone();
	P_NATIVE_END;
}
// End Class ACountDownToTheNuggetCharacter Function CountDownDone

// Begin Class ACountDownToTheNuggetCharacter
void ACountDownToTheNuggetCharacter::StaticRegisterNativesACountDownToTheNuggetCharacter()
{
	UClass* Class = ACountDownToTheNuggetCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CountDownDone", &ACountDownToTheNuggetCharacter::execCountDownDone },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACountDownToTheNuggetCharacter);
UClass* Z_Construct_UClass_ACountDownToTheNuggetCharacter_NoRegister()
{
	return ACountDownToTheNuggetCharacter::StaticClass();
}
struct Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CountDownToTheNuggetCharacter.h" },
		{ "ModuleRelativePath", "CountDownToTheNuggetCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "CountDownToTheNuggetCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "CountDownToTheNuggetCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "CountDownToTheNuggetCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CountDownToTheNuggetCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "CountDownToTheNuggetCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player1Tie_MetaData[] = {
		{ "Category", "CharacterGotBomb" },
		{ "ModuleRelativePath", "CountDownToTheNuggetCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player2Tie_MetaData[] = {
		{ "Category", "CharacterGotBomb" },
		{ "ModuleRelativePath", "CountDownToTheNuggetCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isCountDown_MetaData[] = {
		{ "Category", "CountDown" },
		{ "ModuleRelativePath", "CountDownToTheNuggetCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static void NewProp_Player1Tie_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Player1Tie;
	static void NewProp_Player2Tie_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Player2Tie;
	static void NewProp_isCountDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isCountDown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACountDownToTheNuggetCharacter_CountDownDone, "CountDownDone" }, // 2995201679
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACountDownToTheNuggetCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountDownToTheNuggetCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountDownToTheNuggetCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountDownToTheNuggetCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_TouchAction = { "TouchAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountDownToTheNuggetCharacter, TouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchAction_MetaData), NewProp_TouchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountDownToTheNuggetCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
void Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_Player1Tie_SetBit(void* Obj)
{
	((ACountDownToTheNuggetCharacter*)Obj)->Player1Tie = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_Player1Tie = { "Player1Tie", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountDownToTheNuggetCharacter), &Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_Player1Tie_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player1Tie_MetaData), NewProp_Player1Tie_MetaData) };
void Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_Player2Tie_SetBit(void* Obj)
{
	((ACountDownToTheNuggetCharacter*)Obj)->Player2Tie = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_Player2Tie = { "Player2Tie", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountDownToTheNuggetCharacter), &Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_Player2Tie_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player2Tie_MetaData), NewProp_Player2Tie_MetaData) };
void Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_isCountDown_SetBit(void* Obj)
{
	((ACountDownToTheNuggetCharacter*)Obj)->isCountDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_isCountDown = { "isCountDown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountDownToTheNuggetCharacter), &Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_isCountDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isCountDown_MetaData), NewProp_isCountDown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_TouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_Player1Tie,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_Player2Tie,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::NewProp_isCountDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CountDownToTheNugget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::ClassParams = {
	&ACountDownToTheNuggetCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACountDownToTheNuggetCharacter()
{
	if (!Z_Registration_Info_UClass_ACountDownToTheNuggetCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACountDownToTheNuggetCharacter.OuterSingleton, Z_Construct_UClass_ACountDownToTheNuggetCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACountDownToTheNuggetCharacter.OuterSingleton;
}
template<> COUNTDOWNTOTHENUGGET_API UClass* StaticClass<ACountDownToTheNuggetCharacter>()
{
	return ACountDownToTheNuggetCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACountDownToTheNuggetCharacter);
ACountDownToTheNuggetCharacter::~ACountDownToTheNuggetCharacter() {}
// End Class ACountDownToTheNuggetCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ricar_Desktop_TheCore_Unreal_Proyectos_CountDownToTheNugget_Source_CountDownToTheNugget_CountDownToTheNuggetCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACountDownToTheNuggetCharacter, ACountDownToTheNuggetCharacter::StaticClass, TEXT("ACountDownToTheNuggetCharacter"), &Z_Registration_Info_UClass_ACountDownToTheNuggetCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACountDownToTheNuggetCharacter), 482280338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ricar_Desktop_TheCore_Unreal_Proyectos_CountDownToTheNugget_Source_CountDownToTheNugget_CountDownToTheNuggetCharacter_h_2598242899(TEXT("/Script/CountDownToTheNugget"),
	Z_CompiledInDeferFile_FID_Users_ricar_Desktop_TheCore_Unreal_Proyectos_CountDownToTheNugget_Source_CountDownToTheNugget_CountDownToTheNuggetCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ricar_Desktop_TheCore_Unreal_Proyectos_CountDownToTheNugget_Source_CountDownToTheNugget_CountDownToTheNuggetCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
