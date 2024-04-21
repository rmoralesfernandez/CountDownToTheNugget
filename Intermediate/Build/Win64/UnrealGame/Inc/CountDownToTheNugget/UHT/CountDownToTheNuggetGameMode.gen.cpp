// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CountDownToTheNugget/CountDownToTheNuggetGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCountDownToTheNuggetGameMode() {}

// Begin Cross Module References
COUNTDOWNTOTHENUGGET_API UClass* Z_Construct_UClass_ACountDownToTheNuggetGameMode();
COUNTDOWNTOTHENUGGET_API UClass* Z_Construct_UClass_ACountDownToTheNuggetGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CountDownToTheNugget();
// End Cross Module References

// Begin Class ACountDownToTheNuggetGameMode
void ACountDownToTheNuggetGameMode::StaticRegisterNativesACountDownToTheNuggetGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACountDownToTheNuggetGameMode);
UClass* Z_Construct_UClass_ACountDownToTheNuggetGameMode_NoRegister()
{
	return ACountDownToTheNuggetGameMode::StaticClass();
}
struct Z_Construct_UClass_ACountDownToTheNuggetGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CountDownToTheNuggetGameMode.h" },
		{ "ModuleRelativePath", "CountDownToTheNuggetGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACountDownToTheNuggetGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACountDownToTheNuggetGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CountDownToTheNugget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACountDownToTheNuggetGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACountDownToTheNuggetGameMode_Statics::ClassParams = {
	&ACountDownToTheNuggetGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACountDownToTheNuggetGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACountDownToTheNuggetGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACountDownToTheNuggetGameMode()
{
	if (!Z_Registration_Info_UClass_ACountDownToTheNuggetGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACountDownToTheNuggetGameMode.OuterSingleton, Z_Construct_UClass_ACountDownToTheNuggetGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACountDownToTheNuggetGameMode.OuterSingleton;
}
template<> COUNTDOWNTOTHENUGGET_API UClass* StaticClass<ACountDownToTheNuggetGameMode>()
{
	return ACountDownToTheNuggetGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACountDownToTheNuggetGameMode);
ACountDownToTheNuggetGameMode::~ACountDownToTheNuggetGameMode() {}
// End Class ACountDownToTheNuggetGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ricar_Desktop_TheCore_Unreal_Proyectos_CountDownToTheNugget_Source_CountDownToTheNugget_CountDownToTheNuggetGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACountDownToTheNuggetGameMode, ACountDownToTheNuggetGameMode::StaticClass, TEXT("ACountDownToTheNuggetGameMode"), &Z_Registration_Info_UClass_ACountDownToTheNuggetGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACountDownToTheNuggetGameMode), 1050490752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ricar_Desktop_TheCore_Unreal_Proyectos_CountDownToTheNugget_Source_CountDownToTheNugget_CountDownToTheNuggetGameMode_h_1190840766(TEXT("/Script/CountDownToTheNugget"),
	Z_CompiledInDeferFile_FID_Users_ricar_Desktop_TheCore_Unreal_Proyectos_CountDownToTheNugget_Source_CountDownToTheNugget_CountDownToTheNuggetGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ricar_Desktop_TheCore_Unreal_Proyectos_CountDownToTheNugget_Source_CountDownToTheNugget_CountDownToTheNuggetGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
