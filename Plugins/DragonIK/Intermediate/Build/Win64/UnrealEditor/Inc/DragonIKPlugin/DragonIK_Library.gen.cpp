// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonIKPlugin/Public/DragonIK_Library.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragonIK_Library() {}
// Cross Module References
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_ETwist_Type_DragonIK();
	UPackage* Z_Construct_UPackage__Script_DragonIKPlugin();
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_EPole_System_DragonIK();
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_ERotation_Type_DragonIK();
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin();
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin();
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_EInterpoRotation_Type_Plugin();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_WarpLimbsData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_SingleArmElement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_ArmsData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_FingerData();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_FootData();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_MultiInput();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCCDIK_Modified_ChainLink();
	DRAGONIKPLUGIN_API UClass* Z_Construct_UClass_UDragonIK_Library_NoRegister();
	DRAGONIKPLUGIN_API UClass* Z_Construct_UClass_UDragonIK_Library();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETwist_Type_DragonIK;
	static UEnum* ETwist_Type_DragonIK_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETwist_Type_DragonIK.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETwist_Type_DragonIK.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DragonIKPlugin_ETwist_Type_DragonIK, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("ETwist_Type_DragonIK"));
		}
		return Z_Registration_Info_UEnum_ETwist_Type_DragonIK.OuterSingleton;
	}
	template<> DRAGONIKPLUGIN_API UEnum* StaticEnum<ETwist_Type_DragonIK>()
	{
		return ETwist_Type_DragonIK_StaticEnum();
	}
	struct Z_Construct_UEnum_DragonIKPlugin_ETwist_Type_DragonIK_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DragonIKPlugin_ETwist_Type_DragonIK_Statics::Enumerators[] = {
		{ "ETwist_Type_DragonIK::ENUM_PoseAxisTwist", (int64)ETwist_Type_DragonIK::ENUM_PoseAxisTwist },
		{ "ETwist_Type_DragonIK::ENUM_UpAxisTwist", (int64)ETwist_Type_DragonIK::ENUM_UpAxisTwist },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DragonIKPlugin_ETwist_Type_DragonIK_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\"BlueprintType\" is essential to include\n" },
		{ "ENUM_PoseAxisTwist.DisplayName", "Twist arms relative to arm pose axis" },
		{ "ENUM_PoseAxisTwist.Name", "ETwist_Type_DragonIK::ENUM_PoseAxisTwist" },
		{ "ENUM_UpAxisTwist.DisplayName", "Twist arms relative to vertical axis" },
		{ "ENUM_UpAxisTwist.Name", "ETwist_Type_DragonIK::ENUM_UpAxisTwist" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "ToolTip", "\"BlueprintType\" is essential to include" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DragonIKPlugin_ETwist_Type_DragonIK_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		"ETwist_Type_DragonIK",
		"ETwist_Type_DragonIK",
		Z_Construct_UEnum_DragonIKPlugin_ETwist_Type_DragonIK_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DragonIKPlugin_ETwist_Type_DragonIK_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DragonIKPlugin_ETwist_Type_DragonIK_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DragonIKPlugin_ETwist_Type_DragonIK_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DragonIKPlugin_ETwist_Type_DragonIK()
	{
		if (!Z_Registration_Info_UEnum_ETwist_Type_DragonIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETwist_Type_DragonIK.InnerSingleton, Z_Construct_UEnum_DragonIKPlugin_ETwist_Type_DragonIK_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETwist_Type_DragonIK.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPole_System_DragonIK;
	static UEnum* EPole_System_DragonIK_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPole_System_DragonIK.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPole_System_DragonIK.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DragonIKPlugin_EPole_System_DragonIK, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("EPole_System_DragonIK"));
		}
		return Z_Registration_Info_UEnum_EPole_System_DragonIK.OuterSingleton;
	}
	template<> DRAGONIKPLUGIN_API UEnum* StaticEnum<EPole_System_DragonIK>()
	{
		return EPole_System_DragonIK_StaticEnum();
	}
	struct Z_Construct_UEnum_DragonIKPlugin_EPole_System_DragonIK_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DragonIKPlugin_EPole_System_DragonIK_Statics::Enumerators[] = {
		{ "EPole_System_DragonIK::ENUM_SinglePoleSystem", (int64)EPole_System_DragonIK::ENUM_SinglePoleSystem },
		{ "EPole_System_DragonIK::ENUM_NSEWPoleSystem", (int64)EPole_System_DragonIK::ENUM_NSEWPoleSystem },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DragonIKPlugin_EPole_System_DragonIK_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\"BlueprintType\" is essential to include\n" },
		{ "ENUM_NSEWPoleSystem.DisplayName", "Advanced NSEW pole system (Good for VR)" },
		{ "ENUM_NSEWPoleSystem.Name", "EPole_System_DragonIK::ENUM_NSEWPoleSystem" },
		{ "ENUM_SinglePoleSystem.DisplayName", "Single Pole System" },
		{ "ENUM_SinglePoleSystem.Name", "EPole_System_DragonIK::ENUM_SinglePoleSystem" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "ToolTip", "\"BlueprintType\" is essential to include" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DragonIKPlugin_EPole_System_DragonIK_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		"EPole_System_DragonIK",
		"EPole_System_DragonIK",
		Z_Construct_UEnum_DragonIKPlugin_EPole_System_DragonIK_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DragonIKPlugin_EPole_System_DragonIK_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DragonIKPlugin_EPole_System_DragonIK_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DragonIKPlugin_EPole_System_DragonIK_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DragonIKPlugin_EPole_System_DragonIK()
	{
		if (!Z_Registration_Info_UEnum_EPole_System_DragonIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPole_System_DragonIK.InnerSingleton, Z_Construct_UEnum_DragonIKPlugin_EPole_System_DragonIK_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPole_System_DragonIK.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERotation_Type_DragonIK;
	static UEnum* ERotation_Type_DragonIK_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERotation_Type_DragonIK.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERotation_Type_DragonIK.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DragonIKPlugin_ERotation_Type_DragonIK, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("ERotation_Type_DragonIK"));
		}
		return Z_Registration_Info_UEnum_ERotation_Type_DragonIK.OuterSingleton;
	}
	template<> DRAGONIKPLUGIN_API UEnum* StaticEnum<ERotation_Type_DragonIK>()
	{
		return ERotation_Type_DragonIK_StaticEnum();
	}
	struct Z_Construct_UEnum_DragonIKPlugin_ERotation_Type_DragonIK_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DragonIKPlugin_ERotation_Type_DragonIK_Statics::Enumerators[] = {
		{ "ERotation_Type_DragonIK::ENUM_AdditiveRotation", (int64)ERotation_Type_DragonIK::ENUM_AdditiveRotation },
		{ "ERotation_Type_DragonIK::ENUM_ReplaceRotation", (int64)ERotation_Type_DragonIK::ENUM_ReplaceRotation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DragonIKPlugin_ERotation_Type_DragonIK_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\"BlueprintType\" is essential to include\n" },
		{ "ENUM_AdditiveRotation.Comment", "/*\n\x09* Using this ensure rotation is consistent with the pose.\n\x09* Characters with different skeleton, but who share the same pose such as a T-pose will have very similar hand rotations.\n\x09*/" },
		{ "ENUM_AdditiveRotation.DisplayName", "Use Additive Rotation" },
		{ "ENUM_AdditiveRotation.Name", "ERotation_Type_DragonIK::ENUM_AdditiveRotation" },
		{ "ENUM_AdditiveRotation.ToolTip", "* Using this ensure rotation is consistent with the pose.\n* Characters with different skeleton, but who share the same pose such as a T-pose will have very similar hand rotations." },
		{ "ENUM_ReplaceRotation.Comment", "/*\n\x09* Using this ensure rotation is consistent with the skeleton joint orientations.\n\x09* No fancy tricks, just use the rotation directly and use it for your hands.\n\x09*/" },
		{ "ENUM_ReplaceRotation.DisplayName", "Use Replace Rotation" },
		{ "ENUM_ReplaceRotation.Name", "ERotation_Type_DragonIK::ENUM_ReplaceRotation" },
		{ "ENUM_ReplaceRotation.ToolTip", "* Using this ensure rotation is consistent with the skeleton joint orientations.\n* No fancy tricks, just use the rotation directly and use it for your hands." },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "ToolTip", "\"BlueprintType\" is essential to include" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DragonIKPlugin_ERotation_Type_DragonIK_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		"ERotation_Type_DragonIK",
		"ERotation_Type_DragonIK",
		Z_Construct_UEnum_DragonIKPlugin_ERotation_Type_DragonIK_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DragonIKPlugin_ERotation_Type_DragonIK_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DragonIKPlugin_ERotation_Type_DragonIK_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DragonIKPlugin_ERotation_Type_DragonIK_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DragonIKPlugin_ERotation_Type_DragonIK()
	{
		if (!Z_Registration_Info_UEnum_ERotation_Type_DragonIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERotation_Type_DragonIK.InnerSingleton, Z_Construct_UEnum_DragonIKPlugin_ERotation_Type_DragonIK_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERotation_Type_DragonIK.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIKTrace_Type_Plugin;
	static UEnum* EIKTrace_Type_Plugin_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIKTrace_Type_Plugin.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIKTrace_Type_Plugin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("EIKTrace_Type_Plugin"));
		}
		return Z_Registration_Info_UEnum_EIKTrace_Type_Plugin.OuterSingleton;
	}
	template<> DRAGONIKPLUGIN_API UEnum* StaticEnum<EIKTrace_Type_Plugin>()
	{
		return EIKTrace_Type_Plugin_StaticEnum();
	}
	struct Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin_Statics::Enumerators[] = {
		{ "EIKTrace_Type_Plugin::ENUM_LineTrace_Type", (int64)EIKTrace_Type_Plugin::ENUM_LineTrace_Type },
		{ "EIKTrace_Type_Plugin::ENUM_SphereTrace_Type", (int64)EIKTrace_Type_Plugin::ENUM_SphereTrace_Type },
		{ "EIKTrace_Type_Plugin::ENUM_BoxTrace_Type", (int64)EIKTrace_Type_Plugin::ENUM_BoxTrace_Type },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\"BlueprintType\" is essential to include\n" },
		{ "ENUM_BoxTrace_Type.DisplayName", "Box Trace" },
		{ "ENUM_BoxTrace_Type.Name", "EIKTrace_Type_Plugin::ENUM_BoxTrace_Type" },
		{ "ENUM_LineTrace_Type.DisplayName", "Line Trace" },
		{ "ENUM_LineTrace_Type.Name", "EIKTrace_Type_Plugin::ENUM_LineTrace_Type" },
		{ "ENUM_SphereTrace_Type.DisplayName", "Sphere Trace" },
		{ "ENUM_SphereTrace_Type.Name", "EIKTrace_Type_Plugin::ENUM_SphereTrace_Type" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "ToolTip", "\"BlueprintType\" is essential to include" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		"EIKTrace_Type_Plugin",
		"EIKTrace_Type_Plugin",
		Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin()
	{
		if (!Z_Registration_Info_UEnum_EIKTrace_Type_Plugin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIKTrace_Type_Plugin.InnerSingleton, Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIKTrace_Type_Plugin.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterpoLocation_Type_Plugin;
	static UEnum* EInterpoLocation_Type_Plugin_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterpoLocation_Type_Plugin.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterpoLocation_Type_Plugin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("EInterpoLocation_Type_Plugin"));
		}
		return Z_Registration_Info_UEnum_EInterpoLocation_Type_Plugin.OuterSingleton;
	}
	template<> DRAGONIKPLUGIN_API UEnum* StaticEnum<EInterpoLocation_Type_Plugin>()
	{
		return EInterpoLocation_Type_Plugin_StaticEnum();
	}
	struct Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin_Statics::Enumerators[] = {
		{ "EInterpoLocation_Type_Plugin::ENUM_DivisiveLoc_Interp", (int64)EInterpoLocation_Type_Plugin::ENUM_DivisiveLoc_Interp },
		{ "EInterpoLocation_Type_Plugin::ENUM_LegacyLoc_Interp", (int64)EInterpoLocation_Type_Plugin::ENUM_LegacyLoc_Interp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\"BlueprintType\" is essential to include\n" },
		{ "ENUM_DivisiveLoc_Interp.DisplayName", "Divisive Interpolation Method" },
		{ "ENUM_DivisiveLoc_Interp.Name", "EInterpoLocation_Type_Plugin::ENUM_DivisiveLoc_Interp" },
		{ "ENUM_LegacyLoc_Interp.DisplayName", "Normal (Location)Interpolation Method" },
		{ "ENUM_LegacyLoc_Interp.Name", "EInterpoLocation_Type_Plugin::ENUM_LegacyLoc_Interp" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "ToolTip", "\"BlueprintType\" is essential to include" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		"EInterpoLocation_Type_Plugin",
		"EInterpoLocation_Type_Plugin",
		Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin()
	{
		if (!Z_Registration_Info_UEnum_EInterpoLocation_Type_Plugin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterpoLocation_Type_Plugin.InnerSingleton, Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterpoLocation_Type_Plugin.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterpoRotation_Type_Plugin;
	static UEnum* EInterpoRotation_Type_Plugin_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterpoRotation_Type_Plugin.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterpoRotation_Type_Plugin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DragonIKPlugin_EInterpoRotation_Type_Plugin, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("EInterpoRotation_Type_Plugin"));
		}
		return Z_Registration_Info_UEnum_EInterpoRotation_Type_Plugin.OuterSingleton;
	}
	template<> DRAGONIKPLUGIN_API UEnum* StaticEnum<EInterpoRotation_Type_Plugin>()
	{
		return EInterpoRotation_Type_Plugin_StaticEnum();
	}
	struct Z_Construct_UEnum_DragonIKPlugin_EInterpoRotation_Type_Plugin_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DragonIKPlugin_EInterpoRotation_Type_Plugin_Statics::Enumerators[] = {
		{ "EInterpoRotation_Type_Plugin::ENUM_DivisiveRot_Interp", (int64)EInterpoRotation_Type_Plugin::ENUM_DivisiveRot_Interp },
		{ "EInterpoRotation_Type_Plugin::ENUM_LegacyRot_Interp", (int64)EInterpoRotation_Type_Plugin::ENUM_LegacyRot_Interp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DragonIKPlugin_EInterpoRotation_Type_Plugin_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\"BlueprintType\" is essential to include\n" },
		{ "ENUM_DivisiveRot_Interp.DisplayName", "Divisive Interpolation Method" },
		{ "ENUM_DivisiveRot_Interp.Name", "EInterpoRotation_Type_Plugin::ENUM_DivisiveRot_Interp" },
		{ "ENUM_LegacyRot_Interp.DisplayName", "Normal (Rotation)Interpolation Method" },
		{ "ENUM_LegacyRot_Interp.Name", "EInterpoRotation_Type_Plugin::ENUM_LegacyRot_Interp" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "ToolTip", "\"BlueprintType\" is essential to include" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DragonIKPlugin_EInterpoRotation_Type_Plugin_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		"EInterpoRotation_Type_Plugin",
		"EInterpoRotation_Type_Plugin",
		Z_Construct_UEnum_DragonIKPlugin_EInterpoRotation_Type_Plugin_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DragonIKPlugin_EInterpoRotation_Type_Plugin_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DragonIKPlugin_EInterpoRotation_Type_Plugin_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DragonIKPlugin_EInterpoRotation_Type_Plugin_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DragonIKPlugin_EInterpoRotation_Type_Plugin()
	{
		if (!Z_Registration_Info_UEnum_EInterpoRotation_Type_Plugin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterpoRotation_Type_Plugin.InnerSingleton, Z_Construct_UEnum_DragonIKPlugin_EInterpoRotation_Type_Plugin_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterpoRotation_Type_Plugin.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DragonData_WarpLimbsData;
class UScriptStruct* FDragonData_WarpLimbsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DragonData_WarpLimbsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DragonData_WarpLimbsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("DragonData_WarpLimbsData"));
	}
	return Z_Registration_Info_UScriptStruct_DragonData_WarpLimbsData.OuterSingleton;
}
template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<FDragonData_WarpLimbsData>()
{
	return FDragonData_WarpLimbsData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Foot_Bone_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Foot_Bone_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Knee_Bone_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Knee_Bone_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thigh_Bone_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Thigh_Bone_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Warp_Lift_Reference_Location_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Warp_Lift_Reference_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Warp_Param_Adder_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Warp_Param_Adder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_Max_Warp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Min_Max_Warp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_extra_compression_height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max_extra_compression_height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDragonData_WarpLimbsData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Foot_Bone_Name_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Foot_Bone_Name = { "Foot_Bone_Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_WarpLimbsData, Foot_Bone_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Foot_Bone_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Foot_Bone_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Knee_Bone_Name_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Knee_Bone_Name = { "Knee_Bone_Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_WarpLimbsData, Knee_Bone_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Knee_Bone_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Knee_Bone_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Thigh_Bone_Name_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Thigh_Bone_Name = { "Thigh_Bone_Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_WarpLimbsData, Thigh_Bone_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Thigh_Bone_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Thigh_Bone_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Warp_Lift_Reference_Location_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* Controls the blue disc widgets in the viewport.\n\x09* Place the disc just at the \"floor\" value of the feets/arms, which is the maximum point at which the feets/arms will go down in a walking animation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Controls the blue disc widgets in the viewport.\n* Place the disc just at the \"floor\" value of the feets/arms, which is the maximum point at which the feets/arms will go down in a walking animation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Warp_Lift_Reference_Location = { "Warp_Lift_Reference_Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_WarpLimbsData, Warp_Lift_Reference_Location), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Warp_Lift_Reference_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Warp_Lift_Reference_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Warp_Param_Adder_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* Extra warp value offset for the limb.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Extra warp value offset for the limb." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Warp_Param_Adder = { "Warp_Param_Adder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_WarpLimbsData, Warp_Param_Adder), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Warp_Param_Adder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Warp_Param_Adder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Min_Max_Warp_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "DisplayName", "Minimum Maximum Warp" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Min_Max_Warp = { "Min_Max_Warp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_WarpLimbsData, Min_Max_Warp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Min_Max_Warp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Min_Max_Warp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_max_extra_compression_height_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* The maximum height of the extra compression of the limbs in an animation.\n\x09* Higher values means more extra inward compression when in an animation such as walking/jogging.\n\x09* Lower values means less arm/leg compression exaggeration in an animation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* The maximum height of the extra compression of the limbs in an animation.\n* Higher values means more extra inward compression when in an animation such as walking/jogging.\n* Lower values means less arm/leg compression exaggeration in an animation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_max_extra_compression_height = { "max_extra_compression_height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_WarpLimbsData, max_extra_compression_height), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_max_extra_compression_height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_max_extra_compression_height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Foot_Bone_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Knee_Bone_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Thigh_Bone_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Warp_Lift_Reference_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Warp_Param_Adder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_Min_Max_Warp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewProp_max_extra_compression_height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		&NewStructOps,
		"DragonData_WarpLimbsData",
		sizeof(FDragonData_WarpLimbsData),
		alignof(FDragonData_WarpLimbsData),
		Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDragonData_WarpLimbsData()
	{
		if (!Z_Registration_Info_UScriptStruct_DragonData_WarpLimbsData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DragonData_WarpLimbsData.InnerSingleton, Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DragonData_WarpLimbsData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DragonData_SingleArmElement;
class UScriptStruct* FDragonData_SingleArmElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DragonData_SingleArmElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DragonData_SingleArmElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDragonData_SingleArmElement, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("DragonData_SingleArmElement"));
	}
	return Z_Registration_Info_UScriptStruct_DragonData_SingleArmElement.OuterSingleton;
}
template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<FDragonData_SingleArmElement>()
{
	return FDragonData_SingleArmElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Overrided_Arm_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Overrided_Arm_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotation_offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotation_offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDragonData_SingleArmElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewProp_Overrided_Arm_Transform_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "DisplayName", "Arm Target Transform" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewProp_Overrided_Arm_Transform = { "Overrided_Arm_Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_SingleArmElement, Overrided_Arm_Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewProp_Overrided_Arm_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewProp_Overrided_Arm_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewProp_Arm_Alpha_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This scales the finger line trace relative to the size of the foot trace heights.\n*/" },
		{ "DisplayName", "Alpha" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This scales the finger line trace relative to the size of the foot trace heights." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewProp_Arm_Alpha = { "Arm_Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_SingleArmElement, Arm_Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewProp_Arm_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewProp_Arm_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewProp_rotation_offset_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This scales the finger line trace relative to the size of the foot trace heights.\n*/" },
		{ "DisplayName", "Hand Rotation Offset" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This scales the finger line trace relative to the size of the foot trace heights." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewProp_rotation_offset = { "rotation_offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_SingleArmElement, rotation_offset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewProp_rotation_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewProp_rotation_offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewProp_Overrided_Arm_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewProp_Arm_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewProp_rotation_offset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		&NewStructOps,
		"DragonData_SingleArmElement",
		sizeof(FDragonData_SingleArmElement),
		alignof(FDragonData_SingleArmElement),
		Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDragonData_SingleArmElement()
	{
		if (!Z_Registration_Info_UScriptStruct_DragonData_SingleArmElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DragonData_SingleArmElement.InnerSingleton, Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DragonData_SingleArmElement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DragonData_Overrided_Location_Data;
class UScriptStruct* FDragonData_Overrided_Location_Data::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DragonData_Overrided_Location_Data.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DragonData_Overrided_Location_Data.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("DragonData_Overrided_Location_Data"));
	}
	return Z_Registration_Info_UScriptStruct_DragonData_Overrided_Location_Data.OuterSingleton;
}
template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<FDragonData_Overrided_Location_Data>()
{
	return FDragonData_Overrided_Location_Data::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Arm_TargetLocation_Overrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_TargetLocation_Overrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Arm_TargetLocation_Overrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDragonData_Overrided_Location_Data>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::NewProp_Arm_TargetLocation_Overrides_Inner = { "Arm_TargetLocation_Overrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDragonData_SingleArmElement, METADATA_PARAMS(nullptr, 0) }; // 40969084
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::NewProp_Arm_TargetLocation_Overrides_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09\x09* This array is for separate aim targets for hands.\n\x09\x09* It is only used if separate arm targets is enabled.\n\x09\x09*/" },
		{ "DisplayName", "Separate Arm Target Array Override" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This array is for separate aim targets for hands.\n* It is only used if separate arm targets is enabled." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::NewProp_Arm_TargetLocation_Overrides = { "Arm_TargetLocation_Overrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_Overrided_Location_Data, Arm_TargetLocation_Overrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::NewProp_Arm_TargetLocation_Overrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::NewProp_Arm_TargetLocation_Overrides_MetaData)) }; // 40969084
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::NewProp_Arm_TargetLocation_Overrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::NewProp_Arm_TargetLocation_Overrides,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		&NewStructOps,
		"DragonData_Overrided_Location_Data",
		sizeof(FDragonData_Overrided_Location_Data),
		alignof(FDragonData_Overrided_Location_Data),
		Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data()
	{
		if (!Z_Registration_Info_UScriptStruct_DragonData_Overrided_Location_Data.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DragonData_Overrided_Location_Data.InnerSingleton, Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DragonData_Overrided_Location_Data.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DragonData_ArmsData;
class UScriptStruct* FDragonData_ArmsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DragonData_ArmsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DragonData_ArmsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDragonData_ArmsData, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("DragonData_ArmsData"));
	}
	return Z_Registration_Info_UScriptStruct_DragonData_ArmsData.OuterSingleton;
}
template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<FDragonData_ArmsData>()
{
	return FDragonData_ArmsData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clavicle_Bone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Clavicle_Bone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shoulder_Bone_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shoulder_Bone_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elbow_Bone_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Elbow_Bone_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_Bone_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hand_Bone_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_this_right_hand_MetaData[];
#endif
		static void NewProp_is_this_right_hand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_this_right_hand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_invert_lower_twist_MetaData[];
#endif
		static void NewProp_invert_lower_twist_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_invert_lower_twist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_invert_upper_twist_MetaData[];
#endif
		static void NewProp_invert_upper_twist_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_invert_upper_twist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Local_Direction_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Local_Direction_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_Aiming_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Arm_Aiming_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_accurate_hand_rotation_MetaData[];
#endif
		static void NewProp_accurate_hand_rotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_accurate_hand_rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_relative_axis_MetaData[];
#endif
		static void NewProp_relative_axis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_relative_axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_Extension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum_Extension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_Extension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum_Extension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_Stretch_Ratio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max_Stretch_Ratio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elbow_Pole_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Elbow_Pole_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_North_Pole_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_North_Pole_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_South_Pole_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_South_Pole_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_West_Pole_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_West_Pole_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_East_Pole_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_East_Pole_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_override_limits_MetaData[];
#endif
		static void NewProp_override_limits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_override_limits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_Arm_H_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Max_Arm_H_Angle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_Arm_V_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Max_Arm_V_Angle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inner_Clavicle_Side_Limit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inner_Clavicle_Side_Limit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inner_Clavicle_Vertical_Limit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inner_Clavicle_Vertical_Limit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outer_Clavicle_Side_Limit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Outer_Clavicle_Side_Limit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outer_Clavicle_Vertical_Limit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Outer_Clavicle_Vertical_Limit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shoulder_Inner_Clamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shoulder_Inner_Clamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shoulder_Outer_Clamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shoulder_Outer_Clamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForeArm_Angle_Limit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForeArm_Angle_Limit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Twist_Offset_Reverse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Twist_Offset_Reverse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDragonData_ArmsData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Clavicle_Bone_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09\x09* This is the clavicle bone. The bone that connects the shoulder to the spine.\n\x09\x09* This is only used if separate hand aim/reaching is enabled. Will not be used for normal aiming.\n\x09\x09*/" },
		{ "DisplayName", "Clavicle Bone (optional)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the clavicle bone. The bone that connects the shoulder to the spine.\n* This is only used if separate hand aim/reaching is enabled. Will not be used for normal aiming." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Clavicle_Bone = { "Clavicle_Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Clavicle_Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Clavicle_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Clavicle_Bone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Shoulder_Bone_Name_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This is your shoulder bone.\n*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is your shoulder bone." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Shoulder_Bone_Name = { "Shoulder_Bone_Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Shoulder_Bone_Name), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Shoulder_Bone_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Shoulder_Bone_Name_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Elbow_Bone_Name_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This is your elbow bone.\n*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is your elbow bone." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Elbow_Bone_Name = { "Elbow_Bone_Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Elbow_Bone_Name), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Elbow_Bone_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Elbow_Bone_Name_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Hand_Bone_Name_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* This is your hand bone.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is your hand bone." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Hand_Bone_Name = { "Hand_Bone_Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Hand_Bone_Name), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Hand_Bone_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Hand_Bone_Name_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_is_this_right_hand_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* Make sure to un-check this to fix inversions of poles and twists for left arms.\n\x09*/" },
		{ "DisplayName", "Is this right hand ?" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Make sure to un-check this to fix inversions of poles and twists for left arms." },
	};
#endif
	void Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_is_this_right_hand_SetBit(void* Obj)
	{
		((FDragonData_ArmsData*)Obj)->is_this_right_hand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_is_this_right_hand = { "is_this_right_hand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDragonData_ArmsData), &Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_is_this_right_hand_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_is_this_right_hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_is_this_right_hand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_invert_lower_twist_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* Enable this if forearm twisting alone needs to be inverted.\n\x09*/" },
		{ "DisplayName", "Invert lower arm twist ?" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Enable this if forearm twisting alone needs to be inverted." },
	};
#endif
	void Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_invert_lower_twist_SetBit(void* Obj)
	{
		((FDragonData_ArmsData*)Obj)->invert_lower_twist = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_invert_lower_twist = { "invert_lower_twist", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDragonData_ArmsData), &Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_invert_lower_twist_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_invert_lower_twist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_invert_lower_twist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_invert_upper_twist_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* Enable this if upperarm twisting alone needs to be inverted.\n*/" },
		{ "DisplayName", "Invert upper arm twist ?" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Enable this if upperarm twisting alone needs to be inverted." },
	};
#endif
	void Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_invert_upper_twist_SetBit(void* Obj)
	{
		((FDragonData_ArmsData*)Obj)->invert_upper_twist = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_invert_upper_twist = { "invert_upper_twist", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDragonData_ArmsData), &Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_invert_upper_twist_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_invert_upper_twist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_invert_upper_twist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Local_Direction_Axis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* This is only used if accurate hand rotation is enabled.\n\x09* This is the local axis of rotation the hand should rotate towards.\n\x09*/" },
		{ "DisplayName", "Local Hand Axis (If accurate hand rotation)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is only used if accurate hand rotation is enabled.\n* This is the local axis of rotation the hand should rotate towards." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Local_Direction_Axis = { "Local_Direction_Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Local_Direction_Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Local_Direction_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Local_Direction_Axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Arm_Aiming_Offset_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This can be used to offset the arm target.\n*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This can be used to offset the arm target." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Arm_Aiming_Offset = { "Arm_Aiming_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Arm_Aiming_Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Arm_Aiming_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Arm_Aiming_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_accurate_hand_rotation_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* Enable this if you want the hand to directly aim towards the target, independent of the arm.\n\x09* Might be good for pistol aiming.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Enable this if you want the hand to directly aim towards the target, independent of the arm.\n* Might be good for pistol aiming." },
	};
#endif
	void Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_accurate_hand_rotation_SetBit(void* Obj)
	{
		((FDragonData_ArmsData*)Obj)->accurate_hand_rotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_accurate_hand_rotation = { "accurate_hand_rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDragonData_ArmsData), &Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_accurate_hand_rotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_accurate_hand_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_accurate_hand_rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_relative_axis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* This is to decide if the axis of accurate rotation is relative to local bone transforms.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is to decide if the axis of accurate rotation is relative to local bone transforms." },
	};
#endif
	void Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_relative_axis_SetBit(void* Obj)
	{
		((FDragonData_ArmsData*)Obj)->relative_axis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_relative_axis = { "relative_axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDragonData_ArmsData), &Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_relative_axis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_relative_axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_relative_axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Maximum_Extension_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* This is the maximum ratio the arm can extend towards the target. 1 means it will not extend beyond the animated arm pose.\n\x09* 1.25 means the arm can extend an additional 25% compared to its original pose.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the maximum ratio the arm can extend towards the target. 1 means it will not extend beyond the animated arm pose.\n* 1.25 means the arm can extend an additional 25% compared to its original pose." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Maximum_Extension = { "Maximum_Extension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Maximum_Extension), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Maximum_Extension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Maximum_Extension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Minimum_Extension_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This is the minimum ratio the arm can compress towards the shoulder.\n* 0.3 means the arm can compress only upto 30% of its original pose.\n*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the minimum ratio the arm can compress towards the shoulder.\n* 0.3 means the arm can compress only upto 30% of its original pose." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Minimum_Extension = { "Minimum_Extension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Minimum_Extension), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Minimum_Extension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Minimum_Extension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Max_Stretch_Ratio_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* This is different from the maximum extension.\n\x09* If maximum extension reaches its physical bone limits, then the max stretch ratio takes over.\n\x09* It controls how far additionally you want your arms to reach by stretching the forerarms.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is different from the maximum extension.\n* If maximum extension reaches its physical bone limits, then the max stretch ratio takes over.\n* It controls how far additionally you want your arms to reach by stretching the forerarms." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Max_Stretch_Ratio = { "Max_Stretch_Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Max_Stretch_Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Max_Stretch_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Max_Stretch_Ratio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Elbow_Pole_Offset_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* This is the elbow pole if using single pole method.\n\x09* This can be controlled using the pole widget.\n\x09*/" },
		{ "DisplayName", "Elbow Pole Offset (SINGLE POLE METHOD)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the elbow pole if using single pole method.\n* This can be controlled using the pole widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Elbow_Pole_Offset = { "Elbow_Pole_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Elbow_Pole_Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Elbow_Pole_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Elbow_Pole_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_North_Pole_Offset_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* This is the north pole used in the (NSEW)North-South-East-West advanced pole system.\n\x09*/" },
		{ "DisplayName", "North Pole (NSEW POLE METHOD)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the north pole used in the (NSEW)North-South-East-West advanced pole system." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_North_Pole_Offset = { "North_Pole_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, North_Pole_Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_North_Pole_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_North_Pole_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_South_Pole_Offset_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* This is the south pole used in the (NSEW)North-South-East-West advanced pole system.\n\x09*/" },
		{ "DisplayName", "South Pole (NSEW POLE METHOD)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the south pole used in the (NSEW)North-South-East-West advanced pole system." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_South_Pole_Offset = { "South_Pole_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, South_Pole_Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_South_Pole_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_South_Pole_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_West_Pole_Offset_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This is the west pole used in the (NSEW)North-South-East-West advanced pole system.\n*/" },
		{ "DisplayName", "West Pole (NSEW POLE METHOD)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the west pole used in the (NSEW)North-South-East-West advanced pole system." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_West_Pole_Offset = { "West_Pole_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, West_Pole_Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_West_Pole_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_West_Pole_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_East_Pole_Offset_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This is the east pole used in the (NSEW)North-South-East-West advanced pole system.\n*/" },
		{ "DisplayName", "East Pole (NSEW POLE METHOD)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the east pole used in the (NSEW)North-South-East-West advanced pole system." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_East_Pole_Offset = { "East_Pole_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, East_Pole_Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_East_Pole_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_East_Pole_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_override_limits_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* Enable this to override the clamp limits of the arm. The default limb clamp value will be ignored.\n*/" },
		{ "DisplayName", "Overrided clamp limits ?" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Enable this to override the clamp limits of the arm. The default limb clamp value will be ignored." },
	};
#endif
	void Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_override_limits_SetBit(void* Obj)
	{
		((FDragonData_ArmsData*)Obj)->override_limits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_override_limits = { "override_limits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDragonData_ArmsData), &Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_override_limits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_override_limits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_override_limits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Max_Arm_H_Angle_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* It is the overrided horizontal clamp value of the arms\n* Only used if overrided limits is used.\n*/" },
		{ "DisplayName", "Overrided (Horizontal Clamp)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* It is the overrided horizontal clamp value of the arms\n* Only used if overrided limits is used." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Max_Arm_H_Angle = { "Max_Arm_H_Angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Max_Arm_H_Angle), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Max_Arm_H_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Max_Arm_H_Angle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Max_Arm_V_Angle_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* It is the overrided vertical clamp value of the arms\n* Only used if overrided limits is used.\n*/" },
		{ "DisplayName", "Overrided (Vertical Clamp)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* It is the overrided vertical clamp value of the arms\n* Only used if overrided limits is used." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Max_Arm_V_Angle = { "Max_Arm_V_Angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Max_Arm_V_Angle), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Max_Arm_V_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Max_Arm_V_Angle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Inner_Clavicle_Side_Limit_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* This is the inner angle where rotation is nullified. It is only when the rotation breaches this angle, does the clavicle rotate.\n\x09* Negative value comes for Y.\n\x09*/" },
		{ "DisplayName", "Clavicle Inner Rotation limit (Sideways)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the inner angle where rotation is nullified. It is only when the rotation breaches this angle, does the clavicle rotate.\n* Negative value comes for Y." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Inner_Clavicle_Side_Limit = { "Inner_Clavicle_Side_Limit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Inner_Clavicle_Side_Limit), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Inner_Clavicle_Side_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Inner_Clavicle_Side_Limit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Inner_Clavicle_Vertical_Limit_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This is the inner angle where rotation is nullified. It is only when the rotation breaches this angle, does the clavicle rotate.\n* Negative value comes for Y.\n*/" },
		{ "DisplayName", "Clavicle Inner Rotation limit (Vertical)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the inner angle where rotation is nullified. It is only when the rotation breaches this angle, does the clavicle rotate.\n* Negative value comes for Y." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Inner_Clavicle_Vertical_Limit = { "Inner_Clavicle_Vertical_Limit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Inner_Clavicle_Vertical_Limit), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Inner_Clavicle_Vertical_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Inner_Clavicle_Vertical_Limit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Outer_Clavicle_Side_Limit_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This is the inner angle where rotation is nullified. It is only when the rotation breaches this angle, does the clavicle start to rotate.\n*/" },
		{ "DisplayName", "Clavicle Total Rotation limit (Sideways)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the inner angle where rotation is nullified. It is only when the rotation breaches this angle, does the clavicle start to rotate." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Outer_Clavicle_Side_Limit = { "Outer_Clavicle_Side_Limit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Outer_Clavicle_Side_Limit), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Outer_Clavicle_Side_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Outer_Clavicle_Side_Limit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Outer_Clavicle_Vertical_Limit_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This is the outer total clamp. The clavicle stop twisting if the twist breaches these clamps.\n*/" },
		{ "DisplayName", "Clavicle Total Rotation limit (Vertical)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the outer total clamp. The clavicle stop twisting if the twist breaches these clamps." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Outer_Clavicle_Vertical_Limit = { "Outer_Clavicle_Vertical_Limit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Outer_Clavicle_Vertical_Limit), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Outer_Clavicle_Vertical_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Outer_Clavicle_Vertical_Limit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Shoulder_Inner_Clamp_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This is the inner twist angle where rotation is nullified. It is only when the rotation breaches this angle, does the shoulder start to twist.\n*/" },
		{ "DisplayName", "Shoulder Inner Twist limit" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the inner twist angle where rotation is nullified. It is only when the rotation breaches this angle, does the shoulder start to twist." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Shoulder_Inner_Clamp = { "Shoulder_Inner_Clamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Shoulder_Inner_Clamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Shoulder_Inner_Clamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Shoulder_Inner_Clamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Shoulder_Outer_Clamp_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This is the outer total clamp of the shoulder. The shoulder stop twisting if the twist breaches these clamps.\n*/" },
		{ "DisplayName", "Shoulder Outer Twist limit" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the outer total clamp of the shoulder. The shoulder stop twisting if the twist breaches these clamps." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Shoulder_Outer_Clamp = { "Shoulder_Outer_Clamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Shoulder_Outer_Clamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Shoulder_Outer_Clamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Shoulder_Outer_Clamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_ForeArm_Angle_Limit_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This is the outer total clamp of the forearm. The forearm stop twisting if the twist breaches these clamps.\n*/" },
		{ "DisplayName", "Forearm Outer Twist limit" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the outer total clamp of the forearm. The forearm stop twisting if the twist breaches these clamps." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_ForeArm_Angle_Limit = { "ForeArm_Angle_Limit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, ForeArm_Angle_Limit), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_ForeArm_Angle_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_ForeArm_Angle_Limit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Twist_Offset_Reverse_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* This is the optional twist offset if hands have twisted in the opposite direction towards the forearm.\n\x09*/" },
		{ "DisplayName", "Twist Offset when hand is directly towards arm" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the optional twist offset if hands have twisted in the opposite direction towards the forearm." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Twist_Offset_Reverse = { "Twist_Offset_Reverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_ArmsData, Twist_Offset_Reverse), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Twist_Offset_Reverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Twist_Offset_Reverse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Clavicle_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Shoulder_Bone_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Elbow_Bone_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Hand_Bone_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_is_this_right_hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_invert_lower_twist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_invert_upper_twist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Local_Direction_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Arm_Aiming_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_accurate_hand_rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_relative_axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Maximum_Extension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Minimum_Extension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Max_Stretch_Ratio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Elbow_Pole_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_North_Pole_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_South_Pole_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_West_Pole_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_East_Pole_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_override_limits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Max_Arm_H_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Max_Arm_V_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Inner_Clavicle_Side_Limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Inner_Clavicle_Vertical_Limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Outer_Clavicle_Side_Limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Outer_Clavicle_Vertical_Limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Shoulder_Inner_Clamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Shoulder_Outer_Clamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_ForeArm_Angle_Limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewProp_Twist_Offset_Reverse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		&NewStructOps,
		"DragonData_ArmsData",
		sizeof(FDragonData_ArmsData),
		alignof(FDragonData_ArmsData),
		Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDragonData_ArmsData()
	{
		if (!Z_Registration_Info_UScriptStruct_DragonData_ArmsData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DragonData_ArmsData.InnerSingleton, Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DragonData_ArmsData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DragonData_FingerData;
class UScriptStruct* FDragonData_FingerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DragonData_FingerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DragonData_FingerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDragonData_FingerData, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("DragonData_FingerData"));
	}
	return Z_Registration_Info_UScriptStruct_DragonData_FingerData.OuterSingleton;
}
template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<FDragonData_FingerData>()
{
	return FDragonData_FingerData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDragonData_FingerData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Finger_Bone_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Finger_Bone_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trace_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Trace_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trace_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Trace_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Is_Finger_Backward_MetaData[];
#endif
		static void NewProp_Is_Finger_Backward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Is_Finger_Backward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDragonData_FingerData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Finger_Bone_Name_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Finger_Bone_Name = { "Finger_Bone_Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FingerData, Finger_Bone_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Finger_Bone_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Finger_Bone_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Trace_Scale_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This scales the finger line trace relative to the size of the foot trace heights.\n*/" },
		{ "DisplayName", "Trace size scale" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This scales the finger line trace relative to the size of the foot trace heights." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Trace_Scale = { "Trace_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FingerData, Trace_Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Trace_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Trace_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Trace_Offset_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* Tweak this to offset the trace lines from its original calculated position.\n*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Tweak this to offset the trace lines from its original calculated position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Trace_Offset = { "Trace_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FingerData, Trace_Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Trace_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Trace_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Is_Finger_Backward_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* If finger is pointing backwards relative to the forward vector, enable this.\n*/" },
		{ "DisplayName", "Is finger pointing backwards ?" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* If finger is pointing backwards relative to the forward vector, enable this." },
	};
#endif
	void Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Is_Finger_Backward_SetBit(void* Obj)
	{
		((FDragonData_FingerData*)Obj)->Is_Finger_Backward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Is_Finger_Backward = { "Is_Finger_Backward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDragonData_FingerData), &Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Is_Finger_Backward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Is_Finger_Backward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Is_Finger_Backward_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Finger_Bone_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Trace_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Trace_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewProp_Is_Finger_Backward,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		&NewStructOps,
		"DragonData_FingerData",
		sizeof(FDragonData_FingerData),
		alignof(FDragonData_FingerData),
		Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDragonData_FingerData()
	{
		if (!Z_Registration_Info_UScriptStruct_DragonData_FingerData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DragonData_FingerData.InnerSingleton, Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DragonData_FingerData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DragonData_FootData;
class UScriptStruct* FDragonData_FootData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DragonData_FootData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DragonData_FootData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDragonData_FootData, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("DragonData_FootData"));
	}
	return Z_Registration_Info_UScriptStruct_DragonData_FootData.OuterSingleton;
}
template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<FDragonData_FootData>()
{
	return FDragonData_FootData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDragonData_FootData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feet_Bone_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Feet_Bone_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Knee_Bone_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Knee_Bone_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thigh_Bone_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Thigh_Bone_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feet_Rotation_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Feet_Rotation_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fixed_Pole_MetaData[];
#endif
		static void NewProp_Fixed_Pole_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Fixed_Pole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Knee_Direction_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Knee_Direction_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feet_Trace_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Feet_Trace_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Front_Trace_Point_Spacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Front_Trace_Point_Spacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Side_Traces_Spacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Side_Traces_Spacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feet_Rotation_Limit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feet_Rotation_Limit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fixed_Foot_Height_MetaData[];
#endif
		static void NewProp_Fixed_Foot_Height_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Fixed_Foot_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feet_Heights_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feet_Heights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feet_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feet_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_Feet_Extension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min_Feet_Extension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_Feet_Extension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max_Feet_Extension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feet_Slope_Offset_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feet_Slope_Offset_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_Feet_Lift_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max_Feet_Lift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Overrided_Trace_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Overrided_Trace_Radius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Finger_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Finger_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Finger_Array;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDragonData_FootData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Bone_Name_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Bone_Name = { "Feet_Bone_Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Feet_Bone_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Bone_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Bone_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Bone_Name_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Bone_Name = { "Knee_Bone_Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Knee_Bone_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Bone_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Bone_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Thigh_Bone_Name_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Thigh_Bone_Name = { "Thigh_Bone_Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Thigh_Bone_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Thigh_Bone_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Thigh_Bone_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Offset_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Offset = { "Feet_Rotation_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Feet_Rotation_Offset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Fixed_Pole_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* If fixed pole is disabled, then pole is calculated related to the knee animations.\n\x09* If fixed pole is enabled, then pole is calculated strictly in component space fixed locations.\n\x09*/" },
		{ "DisplayName", "Fixed Pole ?" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* If fixed pole is disabled, then pole is calculated related to the knee animations.\n* If fixed pole is enabled, then pole is calculated strictly in component space fixed locations." },
	};
#endif
	void Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Fixed_Pole_SetBit(void* Obj)
	{
		((FDragonData_FootData*)Obj)->Fixed_Pole = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Fixed_Pole = { "Fixed_Pole", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDragonData_FootData), &Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Fixed_Pole_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Fixed_Pole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Fixed_Pole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Direction_Offset_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* Tweak this to control the knee poles. Visually controls the blue ball widgets in the graph viewport.\n\x09* If fixed pole is disabled, then location is relative to the knee bones.\n\x09* If fixed pole is enabled, then location is relative to component space of the skeletal mesh.\n\x09*/" },
		{ "DisplayName", "Knee Pole Offset" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Tweak this to control the knee poles. Visually controls the blue ball widgets in the graph viewport.\n* If fixed pole is disabled, then location is relative to the knee bones.\n* If fixed pole is enabled, then location is relative to component space of the skeletal mesh." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Direction_Offset = { "Knee_Direction_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Knee_Direction_Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Direction_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Direction_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Trace_Offset_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* Tweak this to offset the trace lines from its original calculated position.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Tweak this to offset the trace lines from its original calculated position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Trace_Offset = { "Feet_Trace_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Feet_Trace_Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Trace_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Trace_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Front_Trace_Point_Spacing_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* This is only used in the foot solver and if 4-point feet rotation is enabled\n\x09* This tweaks the length of the feet.\n\x09* Visualize the size using the animbp viewport widgets.\n\x09* The length of the yellow cylinder widget on the feet.\n\x09*/" },
		{ "DisplayName", "Frontal spacing (4-point feets)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is only used in the foot solver and if 4-point feet rotation is enabled\n* This tweaks the length of the feet.\n* Visualize the size using the animbp viewport widgets.\n* The length of the yellow cylinder widget on the feet." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Front_Trace_Point_Spacing = { "Front_Trace_Point_Spacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Front_Trace_Point_Spacing), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Front_Trace_Point_Spacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Front_Trace_Point_Spacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Side_Traces_Spacing_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* This is only used in the foot solver and if 4-point feet rotation is enabled\n* This tweaks the width of the feet.\n* Visualize the width using the animbp viewport widgets.\n* The yellow cylindrical widget's radius denotes the width.\n*/" },
		{ "DisplayName", "Side spacing (4-point feets)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is only used in the foot solver and if 4-point feet rotation is enabled\n* This tweaks the width of the feet.\n* Visualize the width using the animbp viewport widgets.\n* The yellow cylindrical widget's radius denotes the width." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Side_Traces_Spacing = { "Side_Traces_Spacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Side_Traces_Spacing), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Side_Traces_Spacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Side_Traces_Spacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Limit_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* Maximum foot rotation in all axes\n\x09*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Maximum foot rotation in all axes" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Limit = { "Feet_Rotation_Limit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Feet_Rotation_Limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Limit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Fixed_Foot_Height_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* Use constant fixed height for feet instead of automatically calculated depending on animation.\n\x09*/" },
		{ "DisplayName", "Fixed Foot Height ?" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "ToolTip", "* Use constant fixed height for feet instead of automatically calculated depending on animation." },
	};
#endif
	void Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Fixed_Foot_Height_SetBit(void* Obj)
	{
		((FDragonData_FootData*)Obj)->Fixed_Foot_Height = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Fixed_Foot_Height = { "Fixed_Foot_Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDragonData_FootData), &Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Fixed_Foot_Height_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Fixed_Foot_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Fixed_Foot_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Heights_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* If fixed foot height is disabed, this will provide an offset to the automatic feet height.\n\x09* If fixed foot height is disabled, this will set the fixed feet height.\n\x09*/" },
		{ "DisplayName", "Feet Height Offset / Fixed Feet Height" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "ToolTip", "* If fixed foot height is disabed, this will provide an offset to the automatic feet height.\n* If fixed foot height is disabled, this will set the fixed feet height." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Heights = { "Feet_Heights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Feet_Heights), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Heights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Heights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Alpha_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* The influence of IK.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* The influence of IK." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Alpha = { "Feet_Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Feet_Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Min_Feet_Extension_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* This is the minimum length the feet can extend inwards, from the thigh to feet axis.\n\x09* Value of 0 means the feet doesn't have any constraint, and can reach upto the thigh bone.\n\x09* Value of 0.5 means the leg can compress upto 50% of its original length.\n\x09*/" },
		{ "DisplayName", "Minimum Feet extension ratio" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the minimum length the feet can extend inwards, from the thigh to feet axis.\n* Value of 0 means the feet doesn't have any constraint, and can reach upto the thigh bone.\n* Value of 0.5 means the leg can compress upto 50% of its original length." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Min_Feet_Extension = { "Min_Feet_Extension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Min_Feet_Extension), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Min_Feet_Extension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Min_Feet_Extension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Max_Feet_Extension_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* This is the max length the feet can extend up to, from the thigh to feet axis.\n\x09* Value of 1 means the feet will not extend beyond the original pose length of the thigh and feet.\n\x09* Value of 1.25 means the leg can extend upto 125% of its original length.\n\x09*/" },
		{ "DisplayName", "Maximum Feet extension ratio" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the max length the feet can extend up to, from the thigh to feet axis.\n* Value of 1 means the feet will not extend beyond the original pose length of the thigh and feet.\n* Value of 1.25 means the leg can extend upto 125% of its original length." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Max_Feet_Extension = { "Max_Feet_Extension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Max_Feet_Extension), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Max_Feet_Extension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Max_Feet_Extension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Slope_Offset_Multiplier_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* Lift/Dip the feet as it rotates on slopes.\n\x09* Use small values like 0.1f, because this is a multiplier which increases/decreases the lift depending on the pitch/roll difference of the feet as it touches steep slopes.\n\x09*/" },
		{ "DisplayName", "Feet Slope Offset Multiplier" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Lift/Dip the feet as it rotates on slopes.\n* Use small values like 0.1f, because this is a multiplier which increases/decreases the lift depending on the pitch/roll difference of the feet as it touches steep slopes." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Slope_Offset_Multiplier = { "Feet_Slope_Offset_Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Feet_Slope_Offset_Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Slope_Offset_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Slope_Offset_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Max_Feet_Lift_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* This is the max height the feet can lift up to on a terrain, in the upward axis.\n\x09* 0 means the feet lifting is not constrained to any limit.\n\x09*/" },
		{ "DisplayName", "Max Feet Lift Height in UP Axis" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the max height the feet can lift up to on a terrain, in the upward axis.\n* 0 means the feet lifting is not constrained to any limit." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Max_Feet_Lift = { "Max_Feet_Lift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Max_Feet_Lift), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Max_Feet_Lift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Max_Feet_Lift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Overrided_Trace_Radius_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n* if value is above 0, the trace radius is overrided.\n*/" },
		{ "DisplayName", "Overrided trace radius (if capsule trace used)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* if value is above 0, the trace radius is overrided." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Overrided_Trace_Radius = { "Overrided_Trace_Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Overrided_Trace_Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Overrided_Trace_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Overrided_Trace_Radius_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Finger_Array_Inner = { "Finger_Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDragonData_FingerData, METADATA_PARAMS(nullptr, 0) }; // 158137024
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Finger_Array_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/*\n\x09* Finger arrays. Include just the first bone in each finger chain.\n\x09*/" },
		{ "DisplayName", "Finger Array (optional)" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Finger arrays. Include just the first bone in each finger chain." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Finger_Array = { "Finger_Array", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Finger_Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Finger_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Finger_Array_MetaData)) }; // 158137024
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDragonData_FootData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Bone_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Bone_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Thigh_Bone_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Fixed_Pole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Direction_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Trace_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Front_Trace_Point_Spacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Side_Traces_Spacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Fixed_Foot_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Heights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Min_Feet_Extension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Max_Feet_Extension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Slope_Offset_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Max_Feet_Lift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Overrided_Trace_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Finger_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Finger_Array,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		&NewStructOps,
		"DragonData_FootData",
		sizeof(FDragonData_FootData),
		alignof(FDragonData_FootData),
		Z_Construct_UScriptStruct_FDragonData_FootData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDragonData_FootData()
	{
		if (!Z_Registration_Info_UScriptStruct_DragonData_FootData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DragonData_FootData.InnerSingleton, Z_Construct_UScriptStruct_FDragonData_FootData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DragonData_FootData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DragonData_MultiInput;
class UScriptStruct* FDragonData_MultiInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DragonData_MultiInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DragonData_MultiInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDragonData_MultiInput, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("DragonData_MultiInput"));
	}
	return Z_Registration_Info_UScriptStruct_DragonData_MultiInput.OuterSingleton;
}
template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<FDragonData_MultiInput>()
{
	return FDragonData_MultiInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_Spine_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Start_Spine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Pelvis;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FeetBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeetBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FeetBones;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDragonData_MultiInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Start_Spine_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "DisplayName", "Start Spine / Chest" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Start_Spine = { "Start_Spine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_MultiInput, Start_Spine), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Start_Spine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Start_Spine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Pelvis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_MultiInput, Pelvis), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Pelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Pelvis_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_FeetBones_Inner = { "FeetBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDragonData_FootData, METADATA_PARAMS(nullptr, 0) }; // 586079987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_FeetBones_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_FeetBones = { "FeetBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_MultiInput, FeetBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_FeetBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_FeetBones_MetaData)) }; // 586079987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Start_Spine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Pelvis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_FeetBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_FeetBones,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		&NewStructOps,
		"DragonData_MultiInput",
		sizeof(FDragonData_MultiInput),
		alignof(FDragonData_MultiInput),
		Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDragonData_MultiInput()
	{
		if (!Z_Registration_Info_UScriptStruct_DragonData_MultiInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DragonData_MultiInput.InnerSingleton, Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DragonData_MultiInput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CCDIK_Modified_ChainLink;
class UScriptStruct* FCCDIK_Modified_ChainLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CCDIK_Modified_ChainLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CCDIK_Modified_ChainLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCCDIK_Modified_ChainLink, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("CCDIK_Modified_ChainLink"));
	}
	return Z_Registration_Info_UScriptStruct_CCDIK_Modified_ChainLink.OuterSingleton;
}
template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<FCCDIK_Modified_ChainLink>()
{
	return FCCDIK_Modified_ChainLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCCDIK_Modified_ChainLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCDIK_Modified_ChainLink_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "///////////\n" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCCDIK_Modified_ChainLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCCDIK_Modified_ChainLink>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCCDIK_Modified_ChainLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		&NewStructOps,
		"CCDIK_Modified_ChainLink",
		sizeof(FCCDIK_Modified_ChainLink),
		alignof(FCCDIK_Modified_ChainLink),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCCDIK_Modified_ChainLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCDIK_Modified_ChainLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCCDIK_Modified_ChainLink()
	{
		if (!Z_Registration_Info_UScriptStruct_CCDIK_Modified_ChainLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CCDIK_Modified_ChainLink.InnerSingleton, Z_Construct_UScriptStruct_FCCDIK_Modified_ChainLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CCDIK_Modified_ChainLink.InnerSingleton;
	}
	DEFINE_FUNCTION(UDragonIK_Library::execLookAtRotation_V3)
	{
		P_GET_STRUCT(FVector,Z_Param_source);
		P_GET_STRUCT(FVector,Z_Param_target);
		P_GET_STRUCT(FVector,Z_Param_upvector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UDragonIK_Library::LookAtRotation_V3(Z_Param_source,Z_Param_target,Z_Param_upvector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDragonIK_Library::execQuatLookXatLocation)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_LookAtFromTransform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LookAtTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UDragonIK_Library::QuatLookXatLocation(Z_Param_Out_LookAtFromTransform,Z_Param_Out_LookAtTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDragonIK_Library::execLookAtVector_V2)
	{
		P_GET_STRUCT(FVector,Z_Param_Source_Location);
		P_GET_STRUCT(FVector,Z_Param_lookAt);
		P_GET_STRUCT(FVector,Z_Param_upDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UDragonIK_Library::LookAtVector_V2(Z_Param_Source_Location,Z_Param_lookAt,Z_Param_upDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDragonIK_Library::execCustomLookRotation)
	{
		P_GET_STRUCT(FVector,Z_Param_lookAt);
		P_GET_STRUCT(FVector,Z_Param_upDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UDragonIK_Library::CustomLookRotation(Z_Param_lookAt,Z_Param_upDirection);
		P_NATIVE_END;
	}
	void UDragonIK_Library::StaticRegisterNativesUDragonIK_Library()
	{
		UClass* Class = UDragonIK_Library::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomLookRotation", &UDragonIK_Library::execCustomLookRotation },
			{ "LookAtRotation_V3", &UDragonIK_Library::execLookAtRotation_V3 },
			{ "LookAtVector_V2", &UDragonIK_Library::execLookAtVector_V2 },
			{ "QuatLookXatLocation", &UDragonIK_Library::execQuatLookXatLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics
	{
		struct DragonIK_Library_eventCustomLookRotation_Parms
		{
			FVector lookAt;
			FVector upDirection;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_lookAt;
		static const UECodeGen_Private::FStructPropertyParams NewProp_upDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::NewProp_lookAt = { "lookAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventCustomLookRotation_Parms, lookAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::NewProp_upDirection = { "upDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventCustomLookRotation_Parms, upDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventCustomLookRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::NewProp_lookAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::NewProp_upDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SolverFunctions" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragonIK_Library, nullptr, "CustomLookRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::DragonIK_Library_eventCustomLookRotation_Parms), Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics
	{
		struct DragonIK_Library_eventLookAtRotation_V3_Parms
		{
			FVector source;
			FVector target;
			FVector upvector;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_source;
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_upvector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventLookAtRotation_V3_Parms, source), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventLookAtRotation_V3_Parms, target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::NewProp_upvector = { "upvector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventLookAtRotation_V3_Parms, upvector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventLookAtRotation_V3_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::NewProp_source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::NewProp_upvector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::Function_MetaDataParams[] = {
		{ "Category", "SolverFunctions" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragonIK_Library, nullptr, "LookAtRotation_V3", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::DragonIK_Library_eventLookAtRotation_V3_Parms), Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics
	{
		struct DragonIK_Library_eventLookAtVector_V2_Parms
		{
			FVector Source_Location;
			FVector lookAt;
			FVector upDirection;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_lookAt;
		static const UECodeGen_Private::FStructPropertyParams NewProp_upDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::NewProp_Source_Location = { "Source_Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventLookAtVector_V2_Parms, Source_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::NewProp_lookAt = { "lookAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventLookAtVector_V2_Parms, lookAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::NewProp_upDirection = { "upDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventLookAtVector_V2_Parms, upDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventLookAtVector_V2_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::NewProp_Source_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::NewProp_lookAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::NewProp_upDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::Function_MetaDataParams[] = {
		{ "Category", "SolverFunctions" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragonIK_Library, nullptr, "LookAtVector_V2", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::DragonIK_Library_eventLookAtVector_V2_Parms), Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics
	{
		struct DragonIK_Library_eventQuatLookXatLocation_Parms
		{
			FTransform LookAtFromTransform;
			FVector LookAtTarget;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtFromTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtFromTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::NewProp_LookAtFromTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::NewProp_LookAtFromTransform = { "LookAtFromTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventQuatLookXatLocation_Parms, LookAtFromTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::NewProp_LookAtFromTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::NewProp_LookAtFromTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::NewProp_LookAtTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::NewProp_LookAtTarget = { "LookAtTarget", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventQuatLookXatLocation_Parms, LookAtTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::NewProp_LookAtTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::NewProp_LookAtTarget_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventQuatLookXatLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::NewProp_LookAtFromTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::NewProp_LookAtTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SolverFunctions" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragonIK_Library, nullptr, "QuatLookXatLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::DragonIK_Library_eventQuatLookXatLocation_Parms), Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDragonIK_Library);
	UClass* Z_Construct_UClass_UDragonIK_Library_NoRegister()
	{
		return UDragonIK_Library::StaticClass();
	}
	struct Z_Construct_UClass_UDragonIK_Library_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragonIK_Library_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDragonIK_Library_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation, "CustomLookRotation" }, // 1488835187
		{ &Z_Construct_UFunction_UDragonIK_Library_LookAtRotation_V3, "LookAtRotation_V3" }, // 2824112629
		{ &Z_Construct_UFunction_UDragonIK_Library_LookAtVector_V2, "LookAtVector_V2" }, // 4097240865
		{ &Z_Construct_UFunction_UDragonIK_Library_QuatLookXatLocation, "QuatLookXatLocation" }, // 1293129555
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragonIK_Library_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DragonIK_Library.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragonIK_Library_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragonIK_Library>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDragonIK_Library_Statics::ClassParams = {
		&UDragonIK_Library::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDragonIK_Library_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragonIK_Library_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragonIK_Library()
	{
		if (!Z_Registration_Info_UClass_UDragonIK_Library.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDragonIK_Library.OuterSingleton, Z_Construct_UClass_UDragonIK_Library_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDragonIK_Library.OuterSingleton;
	}
	template<> DRAGONIKPLUGIN_API UClass* StaticClass<UDragonIK_Library>()
	{
		return UDragonIK_Library::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragonIK_Library);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_Statics::EnumInfo[] = {
		{ ETwist_Type_DragonIK_StaticEnum, TEXT("ETwist_Type_DragonIK"), &Z_Registration_Info_UEnum_ETwist_Type_DragonIK, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2947693788U) },
		{ EPole_System_DragonIK_StaticEnum, TEXT("EPole_System_DragonIK"), &Z_Registration_Info_UEnum_EPole_System_DragonIK, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3956205790U) },
		{ ERotation_Type_DragonIK_StaticEnum, TEXT("ERotation_Type_DragonIK"), &Z_Registration_Info_UEnum_ERotation_Type_DragonIK, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4289549794U) },
		{ EIKTrace_Type_Plugin_StaticEnum, TEXT("EIKTrace_Type_Plugin"), &Z_Registration_Info_UEnum_EIKTrace_Type_Plugin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2865799275U) },
		{ EInterpoLocation_Type_Plugin_StaticEnum, TEXT("EInterpoLocation_Type_Plugin"), &Z_Registration_Info_UEnum_EInterpoLocation_Type_Plugin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2737620099U) },
		{ EInterpoRotation_Type_Plugin_StaticEnum, TEXT("EInterpoRotation_Type_Plugin"), &Z_Registration_Info_UEnum_EInterpoRotation_Type_Plugin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 220720043U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_Statics::ScriptStructInfo[] = {
		{ FDragonData_WarpLimbsData::StaticStruct, Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics::NewStructOps, TEXT("DragonData_WarpLimbsData"), &Z_Registration_Info_UScriptStruct_DragonData_WarpLimbsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDragonData_WarpLimbsData), 3386600633U) },
		{ FDragonData_SingleArmElement::StaticStruct, Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics::NewStructOps, TEXT("DragonData_SingleArmElement"), &Z_Registration_Info_UScriptStruct_DragonData_SingleArmElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDragonData_SingleArmElement), 40969084U) },
		{ FDragonData_Overrided_Location_Data::StaticStruct, Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics::NewStructOps, TEXT("DragonData_Overrided_Location_Data"), &Z_Registration_Info_UScriptStruct_DragonData_Overrided_Location_Data, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDragonData_Overrided_Location_Data), 890010856U) },
		{ FDragonData_ArmsData::StaticStruct, Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics::NewStructOps, TEXT("DragonData_ArmsData"), &Z_Registration_Info_UScriptStruct_DragonData_ArmsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDragonData_ArmsData), 3984045416U) },
		{ FDragonData_FingerData::StaticStruct, Z_Construct_UScriptStruct_FDragonData_FingerData_Statics::NewStructOps, TEXT("DragonData_FingerData"), &Z_Registration_Info_UScriptStruct_DragonData_FingerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDragonData_FingerData), 158137024U) },
		{ FDragonData_FootData::StaticStruct, Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewStructOps, TEXT("DragonData_FootData"), &Z_Registration_Info_UScriptStruct_DragonData_FootData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDragonData_FootData), 586079987U) },
		{ FDragonData_MultiInput::StaticStruct, Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewStructOps, TEXT("DragonData_MultiInput"), &Z_Registration_Info_UScriptStruct_DragonData_MultiInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDragonData_MultiInput), 2644577755U) },
		{ FCCDIK_Modified_ChainLink::StaticStruct, Z_Construct_UScriptStruct_FCCDIK_Modified_ChainLink_Statics::NewStructOps, TEXT("CCDIK_Modified_ChainLink"), &Z_Registration_Info_UScriptStruct_CCDIK_Modified_ChainLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCCDIK_Modified_ChainLink), 2163410033U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDragonIK_Library, UDragonIK_Library::StaticClass, TEXT("UDragonIK_Library"), &Z_Registration_Info_UClass_UDragonIK_Library, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDragonIK_Library), 4111039531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_3789505727(TEXT("/Script/DragonIKPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
