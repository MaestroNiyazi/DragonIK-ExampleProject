// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonIKPluginEditor/Public/AnimGraphNode_DragonSpineSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_DragonSpineSolver() {}
// Cross Module References
	DRAGONIKPLUGINEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_NoRegister();
	DRAGONIKPLUGINEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_DragonIKPluginEditor();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver();
// End Cross Module References
	void UAnimGraphNode_DragonSpineSolver::StaticRegisterNativesUAnimGraphNode_DragonSpineSolver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_DragonSpineSolver);
	UClass* Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_NoRegister()
	{
		return UAnimGraphNode_DragonSpineSolver::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ik_node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ik_node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPluginEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AnimGraphNode_DragonSpineSolver.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_DragonSpineSolver.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics::NewProp_ik_node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_DragonSpineSolver.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics::NewProp_ik_node = { "ik_node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_DragonSpineSolver, ik_node), Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics::NewProp_ik_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics::NewProp_ik_node_MetaData)) }; // 739176199
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics::NewProp_ik_node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_DragonSpineSolver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics::ClassParams = {
		&UAnimGraphNode_DragonSpineSolver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_DragonSpineSolver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_DragonSpineSolver.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_DragonSpineSolver.OuterSingleton;
	}
	template<> DRAGONIKPLUGINEDITOR_API UClass* StaticClass<UAnimGraphNode_DragonSpineSolver>()
	{
		return UAnimGraphNode_DragonSpineSolver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_DragonSpineSolver);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPluginEditor_Public_AnimGraphNode_DragonSpineSolver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPluginEditor_Public_AnimGraphNode_DragonSpineSolver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_DragonSpineSolver, UAnimGraphNode_DragonSpineSolver::StaticClass, TEXT("UAnimGraphNode_DragonSpineSolver"), &Z_Registration_Info_UClass_UAnimGraphNode_DragonSpineSolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_DragonSpineSolver), 3644435268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPluginEditor_Public_AnimGraphNode_DragonSpineSolver_h_2283042387(TEXT("/Script/DragonIKPluginEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPluginEditor_Public_AnimGraphNode_DragonSpineSolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPluginEditor_Public_AnimGraphNode_DragonSpineSolver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
