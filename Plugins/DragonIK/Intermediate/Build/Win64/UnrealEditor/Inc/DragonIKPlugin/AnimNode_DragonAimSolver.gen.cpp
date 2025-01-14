// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonIKPlugin/Public/AnimNode_DragonAimSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_DragonAimSolver() {}
// Cross Module References
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver();
	UPackage* Z_Construct_UPackage__Script_DragonIKPlugin();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DragonControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_MultiInput();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_ArmsData();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data();
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_EPole_System_DragonIK();
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_ETwist_Type_DragonIK();
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_ERotation_Type_DragonIK();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_DragonAimSolver>() == std::is_polymorphic<FAnimNode_DragonControlBase>(), "USTRUCT FAnimNode_DragonAimSolver cannot be polymorphic unless super FAnimNode_DragonControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_DragonAimSolver;
class UScriptStruct* FAnimNode_DragonAimSolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_DragonAimSolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_DragonAimSolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("AnimNode_DragonAimSolver"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_DragonAimSolver.OuterSingleton;
}
template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<FAnimNode_DragonAimSolver>()
{
	return FAnimNode_DragonAimSolver::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndSplineBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndSplineBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSplineBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartSplineBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dragon_input_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_dragon_input_data;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Aiming_Hand_Limbs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aiming_Hand_Limbs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Aiming_Hand_Limbs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_TargetLocation_Overrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Arm_TargetLocation_Overrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Use_Separate_Targets_MetaData[];
#endif
		static void NewProp_Use_Separate_Targets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Use_Separate_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Override_Hand_Rotation_MetaData[];
#endif
		static void NewProp_Override_Hand_Rotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Override_Hand_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowHandStretching_MetaData[];
#endif
		static void NewProp_bAllowHandStretching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowHandStretching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reach_instead_MetaData[];
#endif
		static void NewProp_reach_instead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_reach_instead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aggregate_Hand_Body_MetaData[];
#endif
		static void NewProp_Aggregate_Hand_Body_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Aggregate_Hand_Body;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Let_Arm_Twist_With_Hand_MetaData[];
#endif
		static void NewProp_Let_Arm_Twist_With_Hand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Let_Arm_Twist_With_Hand;
		static const UECodeGen_Private::FBytePropertyParams NewProp_pole_system_input_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pole_system_input_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_pole_system_input;
		static const UECodeGen_Private::FBytePropertyParams NewProp_arm_twist_axis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_arm_twist_axis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_arm_twist_axis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_hand_rotation_method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hand_rotation_method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_hand_rotation_method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Override_Head_Rotation_MetaData[];
#endif
		static void NewProp_Override_Head_Rotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Override_Head_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enable_Hand_Interpolation_MetaData[];
#endif
		static void NewProp_Enable_Hand_Interpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable_Hand_Interpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_Interpolation_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Hand_Interpolation_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Main_Arm_Index_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Main_Arm_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lookat_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lookat_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inner_Body_Clamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inner_Body_Clamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lookat_Clamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lookat_Clamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Limbs_Clamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Limbs_Clamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Downward_Dip_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Downward_Dip_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inverted_Dip_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Inverted_Dip_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertical_Dip_Treshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Vertical_Dip_Treshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Side_Move_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Side_Move_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Side_Down_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Side_Down_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Up_Rot_Clamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Up_Rot_Clamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verticle_Range_Angles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Verticle_Range_Angles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Horizontal_Range_Angles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Horizontal_Range_Angles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Look_Bending_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Look_Bending_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Look_Multiplier_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Look_Multiplier_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lock_Legs_MetaData[];
#endif
		static void NewProp_Lock_Legs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Lock_Legs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ignore_elbow_modification_MetaData[];
#endif
		static void NewProp_ignore_elbow_modification_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ignore_elbow_modification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ignore_separate_hand_solving_MetaData[];
#endif
		static void NewProp_ignore_separate_hand_solving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ignore_separate_hand_solving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Use_Natural_Method_MetaData[];
#endif
		static void NewProp_Use_Natural_Method_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Use_Natural_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Head_Use_Separate_Clamp_MetaData[];
#endif
		static void NewProp_Head_Use_Separate_Clamp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Head_Use_Separate_Clamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Is_Head_Accurate_MetaData[];
#endif
		static void NewProp_Is_Head_Accurate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Is_Head_Accurate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_automatic_leg_make_MetaData[];
#endif
		static void NewProp_automatic_leg_make_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_automatic_leg_make;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enable_solver_MetaData[];
#endif
		static void NewProp_enable_solver_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enable_solver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Work_Outside_PIE_MetaData[];
#endif
		static void NewProp_Work_Outside_PIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Work_Outside_PIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Adaptive_Terrain_Tail_MetaData[];
#endif
		static void NewProp_Adaptive_Terrain_Tail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Adaptive_Terrain_Tail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trace_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Trace_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trace_Up_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Trace_Up_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trace_Down_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Trace_Down_Height;
		static const UECodeGen_Private::FBytePropertyParams NewProp_loc_interp_type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_loc_interp_type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_loc_interp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enable_Interpolation_MetaData[];
#endif
		static void NewProp_Enable_Interpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable_Interpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Interpolation_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Toggle_Interpolation_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Toggle_Interpolation_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAt_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAt_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Upward_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Upward_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Use_Reference_Forward_Axis_MetaData[];
#endif
		static void NewProp_Use_Reference_Forward_Axis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Use_Reference_Forward_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reference_Constant_Forward_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Reference_Constant_Forward_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Debug_LookAtLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Debug_LookAtLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Debug_Hand_Locations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Debug_Hand_Locations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Debug_Hand_Locations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//USTRUCT(BlueprintInternalUseOnly)\n" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "ToolTip", "USTRUCT(BlueprintInternalUseOnly)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_DragonAimSolver>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_EndSplineBone_MetaData[] = {
		{ "Category", "CoreInputData" },
		{ "Comment", "/*\n* The head bone.\n*/" },
		{ "DisplayName", "Start Bone (Eg:- Head)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* The head bone." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_EndSplineBone = { "EndSplineBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, EndSplineBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_EndSplineBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_EndSplineBone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_StartSplineBone_MetaData[] = {
		{ "Category", "CoreInputData" },
		{ "Comment", "/*\n\x09* The last bone to be influenced. (Eg:- Pelvis or chest)\n\x09*/" },
		{ "DisplayName", "End Bone" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* The last bone to be influenced. (Eg:- Pelvis or chest)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_StartSplineBone = { "StartSplineBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, StartSplineBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_StartSplineBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_StartSplineBone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_LookAtLocation_MetaData[] = {
		{ "Category", "CoreInputData" },
		{ "Comment", "/** Target location transform in world space*/" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Target location transform in world space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_LookAtLocation = { "LookAtLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, LookAtLocation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_LookAtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_LookAtLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_dragon_input_data_MetaData[] = {
		{ "Category", "OptionalInputData" },
		{ "Comment", "/*\n* Type the input bones used by the solver - pelvis,spine-start and feets\n* Pull this pin to create a \"make struct\" and easily type out the bones.\n* Optionally you can type the bones directly inside the solver. Doing so is slightly more recommended because it activates fast path.\n*/" },
		{ "DisplayName", "Dragon Input Data (optional)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Type the input bones used by the solver - pelvis,spine-start and feets\n* Pull this pin to create a \"make struct\" and easily type out the bones.\n* Optionally you can type the bones directly inside the solver. Doing so is slightly more recommended because it activates fast path." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_dragon_input_data = { "dragon_input_data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, dragon_input_data), Z_Construct_UScriptStruct_FDragonData_MultiInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_dragon_input_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_dragon_input_data_MetaData)) }; // 2644577755
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Aiming_Hand_Limbs_Inner = { "Aiming_Hand_Limbs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDragonData_ArmsData, METADATA_PARAMS(nullptr, 0) }; // 3984045416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Aiming_Hand_Limbs_MetaData[] = {
		{ "Category", "OptionalInputData" },
		{ "Comment", "/*\n\x09* The hand inputs. Used for seperate clamping and restricting of limb movements during body aiming.\n\x09* Uses : Weapon aiming, hand restriction while extreme body bending, wings stability etc\n\x09*/" },
		{ "DisplayName", "Hands Input (optional)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* The hand inputs. Used for seperate clamping and restricting of limb movements during body aiming.\n* Uses : Weapon aiming, hand restriction while extreme body bending, wings stability etc" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Aiming_Hand_Limbs = { "Aiming_Hand_Limbs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Aiming_Hand_Limbs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Aiming_Hand_Limbs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Aiming_Hand_Limbs_MetaData)) }; // 3984045416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Arm_TargetLocation_Overrides_MetaData[] = {
		{ "Category", "ReachingAndSeparateAim" },
		{ "Comment", "/*\n\x09\x09* Separate aim targets for hands.\n\x09\x09* Break this parameter after exposing to expose the array for dynamic modification.\n\x09\x09*/" },
		{ "DisplayName", "Overrided Arm Aim Target Array" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Separate aim targets for hands.\n* Break this parameter after exposing to expose the array for dynamic modification." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Arm_TargetLocation_Overrides = { "Arm_TargetLocation_Overrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Arm_TargetLocation_Overrides), Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Arm_TargetLocation_Overrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Arm_TargetLocation_Overrides_MetaData)) }; // 890010856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Separate_Targets_MetaData[] = {
		{ "Category", "ReachingAndSeparateAim" },
		{ "Comment", "/*\n\x09* If enabled, the overrided arm aim target array is used for the hand aiming.\n \x09*/" },
		{ "DisplayName", "Hand aiming/reaching use the override target transforms ?" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* If enabled, the overrided arm aim target array is used for the hand aiming." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Separate_Targets_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->Use_Separate_Targets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Separate_Targets = { "Use_Separate_Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Separate_Targets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Separate_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Separate_Targets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Override_Hand_Rotation_MetaData[] = {
		{ "Category", "ReachingAndSeparateAim" },
		{ "Comment", "/*\n\x09* If enabled, the arm rotation is mirrored by the target transform's rotation.\n\x09*/" },
		{ "DisplayName", "Hand rotations use the override target transforms ?" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* If enabled, the arm rotation is mirrored by the target transform's rotation." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Override_Hand_Rotation_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->Override_Hand_Rotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Override_Hand_Rotation = { "Override_Hand_Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Override_Hand_Rotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Override_Hand_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Override_Hand_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_bAllowHandStretching_MetaData[] = {
		{ "Category", "ReachingAndSeparateAim" },
		{ "Comment", "/*\n\x09* If enabled, the arms can stretch beyond its original bone length constraints.\n\x09*/" },
		{ "DisplayName", "Allow hand stretching ?" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* If enabled, the arms can stretch beyond its original bone length constraints." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_bAllowHandStretching_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->bAllowHandStretching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_bAllowHandStretching = { "bAllowHandStretching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_bAllowHandStretching_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_bAllowHandStretching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_bAllowHandStretching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_reach_instead_MetaData[] = {
		{ "Category", "ReachingAndSeparateAim" },
		{ "Comment", "/*\n\x09* Switching between arm aiming and reaching.\n\x09* Reaching is great when dynamically picking objects of holding something.\n\x09*/" },
		{ "DisplayName", "Reach instead of aiming ? (Only for arms)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Switching between arm aiming and reaching.\n* Reaching is great when dynamically picking objects of holding something." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_reach_instead_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->reach_instead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_reach_instead = { "reach_instead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_reach_instead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_reach_instead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_reach_instead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Aggregate_Hand_Body_MetaData[] = {
		{ "Category", "ReachingAndSeparateAim" },
		{ "Comment", "/*\n\x09* If enabled, the body rotation is influenced by the arm target locations.\n\x09* Only if reaching mode is enabled.\n\x09* Recommended to enable if reaching.\n\x09*/" },
		{ "DisplayName", "Make hands positions influence body ?  (If multi-arm aiming)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* If enabled, the body rotation is influenced by the arm target locations.\n* Only if reaching mode is enabled.\n* Recommended to enable if reaching." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Aggregate_Hand_Body_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->Aggregate_Hand_Body = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Aggregate_Hand_Body = { "Aggregate_Hand_Body", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Aggregate_Hand_Body_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Aggregate_Hand_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Aggregate_Hand_Body_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Let_Arm_Twist_With_Hand_MetaData[] = {
		{ "Category", "ReachingAndSeparateAim" },
		{ "Comment", "/*\n* You can completely ignore arm twisting and just twist the hands alone.\n*/" },
		{ "DisplayName", "Should arm twist when hand rotates ? (If separate reaching mode)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "ToolTip", "* You can completely ignore arm twisting and just twist the hands alone." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Let_Arm_Twist_With_Hand_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->Let_Arm_Twist_With_Hand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Let_Arm_Twist_With_Hand = { "Let_Arm_Twist_With_Hand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Let_Arm_Twist_With_Hand_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Let_Arm_Twist_With_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Let_Arm_Twist_With_Hand_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_pole_system_input_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_pole_system_input_MetaData[] = {
		{ "Category", "ReachingAndSeparateAim" },
		{ "Comment", "/*\n* Select the pole system for the arms.\n* Only used if reaching mode is used. It's ignored for aiming mode.\n*/" },
		{ "DisplayName", "Arm Pole System Method" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "ToolTip", "* Select the pole system for the arms.\n* Only used if reaching mode is used. It's ignored for aiming mode." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_pole_system_input = { "pole_system_input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, pole_system_input), Z_Construct_UEnum_DragonIKPlugin_EPole_System_DragonIK, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_pole_system_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_pole_system_input_MetaData)) }; // 3956205790
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_arm_twist_axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_arm_twist_axis_MetaData[] = {
		{ "Category", "ReachingAndSeparateAim" },
		{ "Comment", "/*\n* Choose the axis of your arm twisting.\n* Only used if reaching mode is used. It's ignored for aiming mode.\n*/" },
		{ "DisplayName", "Arm Twist Axis Technique" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "ToolTip", "* Choose the axis of your arm twisting.\n* Only used if reaching mode is used. It's ignored for aiming mode." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_arm_twist_axis = { "arm_twist_axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, arm_twist_axis), Z_Construct_UEnum_DragonIKPlugin_ETwist_Type_DragonIK, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_arm_twist_axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_arm_twist_axis_MetaData)) }; // 2947693788
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_hand_rotation_method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_hand_rotation_method_MetaData[] = {
		{ "Category", "ReachingAndSeparateAim" },
		{ "Comment", "/*\n\x09* Decide if the hand rotation is additively calculated or directly replaced by the hand transforms.\n\x09*/" },
		{ "DisplayName", "Hand Rotation Method" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "ToolTip", "* Decide if the hand rotation is additively calculated or directly replaced by the hand transforms." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_hand_rotation_method = { "hand_rotation_method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, hand_rotation_method), Z_Construct_UEnum_DragonIKPlugin_ERotation_Type_DragonIK, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_hand_rotation_method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_hand_rotation_method_MetaData)) }; // 4289549794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Override_Head_Rotation_MetaData[] = {
		{ "Category", "ReachingAndSeparateAim" },
		{ "Comment", "/*\n* If this is enabled, then the head rotation uses the rotation of the look target transform instead of aiming at the target.\n* It can be used to set the hmd rotation into the head bone, to get the head tilt in all angles.\n*/" },
		{ "DisplayName", "Override head rotation to use the look transform rotation ? (Good for VR)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* If this is enabled, then the head rotation uses the rotation of the look target transform instead of aiming at the target.\n* It can be used to set the hmd rotation into the head bone, to get the head tilt in all angles." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Override_Head_Rotation_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->Override_Head_Rotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Override_Head_Rotation = { "Override_Head_Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Override_Head_Rotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Override_Head_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Override_Head_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Enable_Hand_Interpolation_MetaData[] = {
		{ "Category", "ReachingAndSeparateAim" },
		{ "DisplayName", "Enable Arm Interpolation ?" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Enable_Hand_Interpolation_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->Enable_Hand_Interpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Enable_Hand_Interpolation = { "Enable_Hand_Interpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Enable_Hand_Interpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Enable_Hand_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Enable_Hand_Interpolation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Hand_Interpolation_Speed_MetaData[] = {
		{ "Category", "ReachingAndSeparateAim" },
		{ "DisplayName", "Arm Interpolation Speed" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Hand_Interpolation_Speed = { "Hand_Interpolation_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Hand_Interpolation_Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Hand_Interpolation_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Hand_Interpolation_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Main_Arm_Index_MetaData[] = {
		{ "Category", "OptionalInputData" },
		{ "Comment", "/*\n\x09* The index of the main hand within the \"Hands Input\" array for which other hands follow relatively with respect to the main hand.\n\x09* -1 means no main arm. All arms aim independently.\n\x09* Useful to strictly adjust hands on a gun. Eg:- Make the hand holding the gun be the main arm.\n\x09* This is ignored is using reaching mode.\n\x09*/" },
		{ "DisplayName", "Main Arm Index" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* The index of the main hand within the \"Hands Input\" array for which other hands follow relatively with respect to the main hand.\n* -1 means no main arm. All arms aim independently.\n* Useful to strictly adjust hands on a gun. Eg:- Make the hand holding the gun be the main arm.\n* This is ignored is using reaching mode." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Main_Arm_Index = { "Main_Arm_Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Main_Arm_Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Main_Arm_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Main_Arm_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lookat_Radius_MetaData[] = {
		{ "Category", "AdvancedClampingSettings" },
		{ "Comment", "/*\n* The maximum allowed body chain rotation.\n* Uses the body clamp curve as a multiplier for the final result.\n*/" },
		{ "DisplayName", "Max Body Lookat Clamp" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* The maximum allowed body chain rotation.\n* Uses the body clamp curve as a multiplier for the final result." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lookat_Radius = { "Lookat_Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Lookat_Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lookat_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lookat_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Inner_Body_Clamp_MetaData[] = {
		{ "Category", "AdvancedClampingSettings" },
		{ "Comment", "/*\n\x09* Within these pitch-yaw-roll angles, the body will avoid rotation, but the head will rotate freely.\n\x09* Good when you want the body to only rotate after a certain treshold.\n\x09*/" },
		{ "DisplayName", "Inner Body Lookat Threshold" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Within these pitch-yaw-roll angles, the body will avoid rotation, but the head will rotate freely.\n* Good when you want the body to only rotate after a certain treshold." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Inner_Body_Clamp = { "Inner_Body_Clamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Inner_Body_Clamp), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Inner_Body_Clamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Inner_Body_Clamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lookat_Clamp_MetaData[] = {
		{ "Category", "AdvancedClampingSettings" },
		{ "Comment", "/*\n* Maximum separate limbs clamp. Can be used to shrink the angle or extend the angle with respect to the body clamp. \n* Ignored if seperate head clamp bool is disabled.\n*/" },
		{ "DisplayName", "Head Max Clamp" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Maximum separate limbs clamp. Can be used to shrink the angle or extend the angle with respect to the body clamp.\n* Ignored if seperate head clamp bool is disabled." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lookat_Clamp = { "Lookat_Clamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Lookat_Clamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lookat_Clamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lookat_Clamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Limbs_Clamp_MetaData[] = {
		{ "Category", "AdvancedClampingSettings" },
		{ "Comment", "/*\n* Maximum separate limbs clamp. Can be used to shrink the max angle or extend the max angle with respect to the body clamp.\n*/" },
		{ "DisplayName", "Limbs Max Clamp" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Maximum separate limbs clamp. Can be used to shrink the max angle or extend the max angle with respect to the body clamp." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Limbs_Clamp = { "Limbs_Clamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Limbs_Clamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Limbs_Clamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Limbs_Clamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Downward_Dip_Multiplier_MetaData[] = {
		{ "Category", "MultiplierSettings" },
		{ "Comment", "/*\n\x09* The extra dip downwards if character is looking vertically upwards.\n\x09*/" },
		{ "DisplayName", "Downward translation when aiming upwards (Multiplier)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* The extra dip downwards if character is looking vertically upwards." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Downward_Dip_Multiplier = { "Downward_Dip_Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Downward_Dip_Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Downward_Dip_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Downward_Dip_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Inverted_Dip_Multiplier_MetaData[] = {
		{ "Category", "MultiplierSettings" },
		{ "Comment", "/*\n* The extra dip downwards if character is looking vertically downwards.\n*/" },
		{ "DisplayName", "Downward translation when aiming downwards (Multiplier)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* The extra dip downwards if character is looking vertically downwards." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Inverted_Dip_Multiplier = { "Inverted_Dip_Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Inverted_Dip_Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Inverted_Dip_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Inverted_Dip_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Vertical_Dip_Treshold_MetaData[] = {
		{ "Category", "MultiplierSettings" },
		{ "Comment", "/*\n\x09* This is the \"gap\" until the body starts to dip when aiming downwards.\n\x09*/" },
		{ "DisplayName", "Vertical Dip Treshold" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This is the \"gap\" until the body starts to dip when aiming downwards." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Vertical_Dip_Treshold = { "Vertical_Dip_Treshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Vertical_Dip_Treshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Vertical_Dip_Treshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Vertical_Dip_Treshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Side_Move_Multiplier_MetaData[] = {
		{ "Category", "MultiplierSettings" },
		{ "Comment", "/*\n\x09* The extra offset of the root bone in left/right if character's end bone is rotating towards the same direction.\n\x09*/" },
		{ "DisplayName", "Sideward translation when aiming sideways (Multiplier)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* The extra offset of the root bone in left/right if character's end bone is rotating towards the same direction." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Side_Move_Multiplier = { "Side_Move_Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Side_Move_Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Side_Move_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Side_Move_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Side_Down_Multiplier_MetaData[] = {
		{ "Category", "MultiplierSettings" },
		{ "Comment", "/*\n* The extra offset of the root bone in left/right if character's root bone is rotate towards the same direction.\n*/" },
		{ "DisplayName", "Downward translation when aiming sideways (Multiplier)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* The extra offset of the root bone in left/right if character's root bone is rotate towards the same direction." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Side_Down_Multiplier = { "Side_Down_Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Side_Down_Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Side_Down_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Side_Down_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Up_Rot_Clamp_MetaData[] = {
		{ "Category", "MultiplierSettings" },
		{ "Comment", "/*\n* Tweak this if you want the clamp intensity to be different in the vertical axis. It is a multiplier ratio, and clamp is relative to existing setup.\n* 0 = Absolutley no vertical body bending/aiming.\n* 1 = Full Vertical body bending/aiming.\n* Only applies to body chain. Ignores arms and head.\n*/" },
		{ "DisplayName", "Vertical aim clamp ratio for body (0 = No influence, 1 = Full influence)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Tweak this if you want the clamp intensity to be different in the vertical axis. It is a multiplier ratio, and clamp is relative to existing setup.\n* 0 = Absolutley no vertical body bending/aiming.\n* 1 = Full Vertical body bending/aiming.\n* Only applies to body chain. Ignores arms and head." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Up_Rot_Clamp = { "Up_Rot_Clamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Up_Rot_Clamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Up_Rot_Clamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Up_Rot_Clamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Verticle_Range_Angles_MetaData[] = {
		{ "Category", "AdvancedClampingSettings" },
		{ "Comment", "/*\n\x09* Max global vertical rotation clamp.\n\x09* Beyond these clamps, the aiming reverses.\n\x09*/" },
		{ "DisplayName", "Max Vertical Angle Range (Degrees)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Max global vertical rotation clamp.\n* Beyond these clamps, the aiming reverses." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Verticle_Range_Angles = { "Verticle_Range_Angles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Verticle_Range_Angles), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Verticle_Range_Angles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Verticle_Range_Angles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Horizontal_Range_Angles_MetaData[] = {
		{ "Category", "AdvancedClampingSettings" },
		{ "Comment", "/*\n\x09* Max global horizontal rotation clamp.\n\x09* Beyond these clamps, the aiming reverses.\n\x09*/" },
		{ "DisplayName", "Max Horizontal Angle Range (Degrees)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Max global horizontal rotation clamp.\n* Beyond these clamps, the aiming reverses." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Horizontal_Range_Angles = { "Horizontal_Range_Angles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Horizontal_Range_Angles), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Horizontal_Range_Angles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Horizontal_Range_Angles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Look_Bending_Curve_MetaData[] = {
		{ "Category", "CurveInputSettings" },
		{ "Comment", "/*\n* Curve clamp used to tweak the body bending limits. Works as a multiplier and is part of the total solving calculation.\n* 0th value in X-axis denotes the clamp intensity of the end bone (eg:- if max body clamp is 100, and the 0th value is 0.1, then the final clamp of pelvis/end bone is 10)\n* All values until the 1st value in the X-axis are multipliers for all the bone chains from End to Start bones.\n* Exact 1st X-axis value is ignored, as the head clamp is solely determined by the separate head clamp parameter.\n*/" },
		{ "DisplayName", "Bone Clamp Curve (0 = End Bone, 1 = Head Bone)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Curve clamp used to tweak the body bending limits. Works as a multiplier and is part of the total solving calculation.\n* 0th value in X-axis denotes the clamp intensity of the end bone (eg:- if max body clamp is 100, and the 0th value is 0.1, then the final clamp of pelvis/end bone is 10)\n* All values until the 1st value in the X-axis are multipliers for all the bone chains from End to Start bones.\n* Exact 1st X-axis value is ignored, as the head clamp is solely determined by the separate head clamp parameter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Look_Bending_Curve = { "Look_Bending_Curve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Look_Bending_Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Look_Bending_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Look_Bending_Curve_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Look_Multiplier_Curve_MetaData[] = {
		{ "Category", "CurveInputSettings" },
		{ "Comment", "/*\n\x09* Curve multiplier to tweak the rotation multiplier in the body chain.\n\x09* Default set to 1 always. No need for modification in most cases.\n\x09*/" },
		{ "DisplayName", "Body Rotation Multiplier Curve (0 = End Bone, 1 = Head Bone)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Curve multiplier to tweak the rotation multiplier in the body chain.\n* Default set to 1 always. No need for modification in most cases." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Look_Multiplier_Curve = { "Look_Multiplier_Curve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Look_Multiplier_Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Look_Multiplier_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Look_Multiplier_Curve_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lock_Legs_MetaData[] = {
		{ "Category", "ToggleSettings" },
		{ "Comment", "/*\n\x09* Lock legs to its original position using IK as the body moves and rotates. Only works with valid dragon input data.\n\x09*/" },
		{ "DisplayName", "Should feets be locked using IK ? (uses dragon input data)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Lock legs to its original position using IK as the body moves and rotates. Only works with valid dragon input data." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lock_Legs_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->Lock_Legs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lock_Legs = { "Lock_Legs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lock_Legs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lock_Legs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lock_Legs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_ignore_elbow_modification_MetaData[] = {
		{ "Category", "ToggleSettings" },
		{ "Comment", "/*\n* Only rotate the shoulder towards the target, and ignore the wrist and elbow in the solving.\n*/" },
		{ "DisplayName", "Ignore Elbow Compression" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Only rotate the shoulder towards the target, and ignore the wrist and elbow in the solving." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_ignore_elbow_modification_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->ignore_elbow_modification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_ignore_elbow_modification = { "ignore_elbow_modification", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_ignore_elbow_modification_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_ignore_elbow_modification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_ignore_elbow_modification_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_ignore_separate_hand_solving_MetaData[] = {
		{ "Category", "ToggleSettings" },
		{ "Comment", "/*\n\x09* Turn off separate limbs aiming.\n\x09*/" },
		{ "DisplayName", "Ignore Seperate Hand solving" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Turn off separate limbs aiming." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_ignore_separate_hand_solving_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->ignore_separate_hand_solving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_ignore_separate_hand_solving = { "ignore_separate_hand_solving", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_ignore_separate_hand_solving_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_ignore_separate_hand_solving_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_ignore_separate_hand_solving_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Natural_Method_MetaData[] = {
		{ "Category", "ToggleSettings" },
		{ "Comment", "/*\n\x09* Switch between two different rotation algorithm for different type of results.\n\x09* [enabled] = Relative rotation algorithm provides greater degree of freedom of movement and stable poses. Favours pose stability over accuracy.\n\x09* [disabled] = Non-Relative rotation algorthm provides a more direct and natural aiming but with limit in the range of motion. Favours accuracy over pose stability.\n\x09*/" },
		{ "DisplayName", "Use Relative Rotation Algorithm ?" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Switch between two different rotation algorithm for different type of results.\n* [enabled] = Relative rotation algorithm provides greater degree of freedom of movement and stable poses. Favours pose stability over accuracy.\n* [disabled] = Non-Relative rotation algorthm provides a more direct and natural aiming but with limit in the range of motion. Favours accuracy over pose stability." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Natural_Method_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->Use_Natural_Method = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Natural_Method = { "Use_Natural_Method", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Natural_Method_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Natural_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Natural_Method_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Head_Use_Separate_Clamp_MetaData[] = {
		{ "Category", "ToggleSettings" },
		{ "Comment", "/*\n* If enabled, the heads clamp is determined by the separate max head clamp parameter.\n* If disabled, the head clamp is determined by the value in the clamp curve graph along with the rest of the body. Also influenced by max body clamp parameter.\n* Eg:- If using the aim solver for tails, keep it disabled.\n*/" },
		{ "DisplayName", "Use Separate independent clamping for head ?" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* If enabled, the heads clamp is determined by the separate max head clamp parameter.\n* If disabled, the head clamp is determined by the value in the clamp curve graph along with the rest of the body. Also influenced by max body clamp parameter.\n* Eg:- If using the aim solver for tails, keep it disabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Head_Use_Separate_Clamp_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->Head_Use_Separate_Clamp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Head_Use_Separate_Clamp = { "Head_Use_Separate_Clamp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Head_Use_Separate_Clamp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Head_Use_Separate_Clamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Head_Use_Separate_Clamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Is_Head_Accurate_MetaData[] = {
		{ "Category", "ToggleSettings" },
		{ "Comment", "/*\n\x09* If enabled, head aims exactly at the target regardless of the rest of the body chain.\n\x09* If disabled, head aims while adjusting itself with respect to the rest of the body chain. Can result in a bit more stable but offseted aiming.\n\x09*/" },
		{ "DisplayName", "Head use exact accurate aiming ?" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* If enabled, head aims exactly at the target regardless of the rest of the body chain.\n* If disabled, head aims while adjusting itself with respect to the rest of the body chain. Can result in a bit more stable but offseted aiming." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Is_Head_Accurate_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->Is_Head_Accurate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Is_Head_Accurate = { "Is_Head_Accurate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Is_Head_Accurate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Is_Head_Accurate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Is_Head_Accurate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_automatic_leg_make_MetaData[] = {
		{ "Category", "AdvancedSettings" },
		{ "Comment", "/*\n* Parameter to choose between automatic feet bone detection or manual method.\n* If enabled, solvers only uses the feet bones, and automatically assumes the next 2 parent bones as knees and thighs.\n* If disabled, solvers uses the feet bones, knee bones and thigh bones typed in the feet array.\n* If disabled, all bones need to be valid. Any invalid bones will not activate the ik.\n* Very useful to keep it disabled on DAZ rigs and certain animal characters, where the thigh-knee-foot are not in a straight linear hierarchy.\n*/" },
		{ "DisplayName", "Automatic Foot-Knee-Thigh detection" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Parameter to choose between automatic feet bone detection or manual method.\n* If enabled, solvers only uses the feet bones, and automatically assumes the next 2 parent bones as knees and thighs.\n* If disabled, solvers uses the feet bones, knee bones and thigh bones typed in the feet array.\n* If disabled, all bones need to be valid. Any invalid bones will not activate the ik.\n* Very useful to keep it disabled on DAZ rigs and certain animal characters, where the thigh-knee-foot are not in a straight linear hierarchy." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_automatic_leg_make_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->automatic_leg_make = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_automatic_leg_make = { "automatic_leg_make", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_automatic_leg_make_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_automatic_leg_make_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_automatic_leg_make_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_enable_solver_MetaData[] = {
		{ "Category", "ToggleSettings" },
		{ "Comment", "/*\n* Toggle this parameter to instantly turn on/off ik.\n*/" },
		{ "DisplayName", "Enable Solver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "* Toggle this parameter to instantly turn on/off ik." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_enable_solver_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->enable_solver = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_enable_solver = { "enable_solver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_enable_solver_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_enable_solver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_enable_solver_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Work_Outside_PIE_MetaData[] = {
		{ "Category", "AdvancedSettings" },
		{ "Comment", "/*\n* Enable this parameter to make IK work even when not playing in PIE mode\n* Useful for recording in sequencer.\n*/" },
		{ "DisplayName", "Work outside gameplay (For Sequencer)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "* Enable this parameter to make IK work even when not playing in PIE mode\n* Useful for recording in sequencer." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Work_Outside_PIE_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->Work_Outside_PIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Work_Outside_PIE = { "Work_Outside_PIE", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Work_Outside_PIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Work_Outside_PIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Work_Outside_PIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Adaptive_Terrain_Tail_MetaData[] = {
		{ "Category", "TailTerrainSettings" },
		{ "Comment", "/*\n* Enable this to turn this solver into an automatic terrain adaptive chain.\n* The lookatlocation parameter is disabled here, in favour of the debuglooklocation as the base reference of the height.\n* The viewport look widget will be used as reference for the in-game terrain adaption.\n*/" },
		{ "DisplayName", "Is it a terrain adaptive chain ? (like tails)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Enable this to turn this solver into an automatic terrain adaptive chain.\n* The lookatlocation parameter is disabled here, in favour of the debuglooklocation as the base reference of the height.\n* The viewport look widget will be used as reference for the in-game terrain adaption." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Adaptive_Terrain_Tail_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->Adaptive_Terrain_Tail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Adaptive_Terrain_Tail = { "Adaptive_Terrain_Tail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Adaptive_Terrain_Tail_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Adaptive_Terrain_Tail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Adaptive_Terrain_Tail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Trace_Channel_MetaData[] = {
		{ "Category", "TailTerrainSettings" },
		{ "Comment", "/*\n* Trace channel used by the solver traces. Recommended to create a new dedicated trace channel for the ik through project settings.*/" },
		{ "DisplayName", "TAC Collision Channel" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Trace channel used by the solver traces. Recommended to create a new dedicated trace channel for the ik through project settings." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Trace_Channel = { "Trace_Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Trace_Channel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Trace_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Trace_Channel_MetaData)) }; // 2906040657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Trace_Up_Height_MetaData[] = {
		{ "Category", "TailTerrainSettings" },
		{ "DisplayName", "Trace Up Height" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Trace_Up_Height = { "Trace_Up_Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Trace_Up_Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Trace_Up_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Trace_Up_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Trace_Down_Height_MetaData[] = {
		{ "Category", "TailTerrainSettings" },
		{ "DisplayName", "Trace Down Height" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Trace_Down_Height = { "Trace_Down_Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Trace_Down_Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Trace_Down_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Trace_Down_Height_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_loc_interp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_loc_interp_type_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "Comment", "/*\n* Select the type of interpolation method.\n*/" },
		{ "DisplayName", "Interpolation Type" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "ToolTip", "* Select the type of interpolation method." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_loc_interp_type = { "loc_interp_type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, loc_interp_type), Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_loc_interp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_loc_interp_type_MetaData)) }; // 2737620099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Enable_Interpolation_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Enable_Interpolation_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->Enable_Interpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Enable_Interpolation = { "Enable_Interpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Enable_Interpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Enable_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Enable_Interpolation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Interpolation_Speed_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Interpolation_Speed = { "Interpolation_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Interpolation_Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Interpolation_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Interpolation_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Toggle_Interpolation_Speed_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Toggle_Interpolation_Speed = { "Toggle_Interpolation_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Toggle_Interpolation_Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Toggle_Interpolation_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Toggle_Interpolation_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_LookAt_Axis_MetaData[] = {
		{ "Category", "LookAtSettings" },
		{ "Comment", "/*\n\x09* The forward direction axis of the character.\n\x09* Characters using the standard unreal directions use the default value.\n\x09*/" },
		{ "DisplayName", "Forward Axis" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* The forward direction axis of the character.\n* Characters using the standard unreal directions use the default value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_LookAt_Axis = { "LookAt_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, LookAt_Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_LookAt_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_LookAt_Axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Upward_Axis_MetaData[] = {
		{ "Category", "LookAtSettings" },
		{ "DisplayName", "Upward Axis" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Upward_Axis = { "Upward_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Upward_Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Upward_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Upward_Axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_TargetOffset_MetaData[] = {
		{ "Category", "LookAtSettings" },
		{ "Comment", "/*\n* Useful for tweaking the aiming offset of arms/limbs.\n* Popular use is for weapons aiming and accuracy.\n* Offset works in component space.\n*/" },
		{ "DisplayName", "Target Offset (only for limbs)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* Useful for tweaking the aiming offset of arms/limbs.\n* Popular use is for weapons aiming and accuracy.\n* Offset works in component space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_TargetOffset = { "TargetOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, TargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_TargetOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_TargetOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Reference_Forward_Axis_MetaData[] = {
		{ "Category", "LookAtSettings" },
		{ "Comment", "/*\n\x09* If using mocap or any use case that involves altering the forward axis during gameplay, this can be enabled to dynamically alter the arm and leg poles along with the along with the change in axis.\n\x09* The forward axis is compared with the reference forward axis to calculate the offset of the poles. If they are the same, then nothing happens.\n\x09*/" },
		{ "DisplayName", "Use Reference Forward Axis Logic ? (Good for Mocap)" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* If using mocap or any use case that involves altering the forward axis during gameplay, this can be enabled to dynamically alter the arm and leg poles along with the along with the change in axis.\n* The forward axis is compared with the reference forward axis to calculate the offset of the poles. If they are the same, then nothing happens." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Reference_Forward_Axis_SetBit(void* Obj)
	{
		((FAnimNode_DragonAimSolver*)Obj)->Use_Reference_Forward_Axis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Reference_Forward_Axis = { "Use_Reference_Forward_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonAimSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Reference_Forward_Axis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Reference_Forward_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Reference_Forward_Axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Reference_Constant_Forward_Axis_MetaData[] = {
		{ "Category", "LookAtSettings" },
		{ "Comment", "/*\n* This parameter is mainly useful when using mocap animations that involves the character rotating its root bone in multiple directions.\n* It is the default forward vector of your character in component space. The dynamic forward vector is compared with the default forward vector to appropriately alter\n* the knee poles and elbow poles and correcting them.\n* If your character is setup in standard unreal forward axis, then there is no need to alter this.\n*/" },
		{ "DisplayName", "Reference Forward Axis" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "* This parameter is mainly useful when using mocap animations that involves the character rotating its root bone in multiple directions.\n* It is the default forward vector of your character in component space. The dynamic forward vector is compared with the default forward vector to appropriately alter\n* the knee poles and elbow poles and correcting them.\n* If your character is setup in standard unreal forward axis, then there is no need to alter this." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Reference_Constant_Forward_Axis = { "Reference_Constant_Forward_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Reference_Constant_Forward_Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Reference_Constant_Forward_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Reference_Constant_Forward_Axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Debug_LookAtLocation_MetaData[] = {
		{ "Category", "DebuggingOnly" },
		{ "Comment", "/*\n\x09* Used for internal animation blueprint viewport for debugging. Real gameworld uses \"LookAtLocation\".\n\x09* If Tail Terrain Adaptive mode is enabled, then this is turned into a constant height reference point. Still operates the widget.\n    */" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
		{ "ToolTip", "* Used for internal animation blueprint viewport for debugging. Real gameworld uses \"LookAtLocation\".\n* If Tail Terrain Adaptive mode is enabled, then this is turned into a constant height reference point. Still operates the widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Debug_LookAtLocation = { "Debug_LookAtLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Debug_LookAtLocation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Debug_LookAtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Debug_LookAtLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Debug_Hand_Locations_Inner = { "Debug_Hand_Locations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Debug_Hand_Locations_MetaData[] = {
		{ "Category", "DebuggingOnly" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonAimSolver.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Debug_Hand_Locations = { "Debug_Hand_Locations", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonAimSolver, Debug_Hand_Locations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Debug_Hand_Locations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Debug_Hand_Locations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_EndSplineBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_StartSplineBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_LookAtLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_dragon_input_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Aiming_Hand_Limbs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Aiming_Hand_Limbs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Arm_TargetLocation_Overrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Separate_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Override_Hand_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_bAllowHandStretching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_reach_instead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Aggregate_Hand_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Let_Arm_Twist_With_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_pole_system_input_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_pole_system_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_arm_twist_axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_arm_twist_axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_hand_rotation_method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_hand_rotation_method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Override_Head_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Enable_Hand_Interpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Hand_Interpolation_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Main_Arm_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lookat_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Inner_Body_Clamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lookat_Clamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Limbs_Clamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Downward_Dip_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Inverted_Dip_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Vertical_Dip_Treshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Side_Move_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Side_Down_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Up_Rot_Clamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Verticle_Range_Angles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Horizontal_Range_Angles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Look_Bending_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Look_Multiplier_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Lock_Legs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_ignore_elbow_modification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_ignore_separate_hand_solving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Natural_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Head_Use_Separate_Clamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Is_Head_Accurate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_automatic_leg_make,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_enable_solver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Work_Outside_PIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Adaptive_Terrain_Tail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Trace_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Trace_Up_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Trace_Down_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_loc_interp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_loc_interp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Enable_Interpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Interpolation_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Toggle_Interpolation_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_LookAt_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Upward_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_TargetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Use_Reference_Forward_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Reference_Constant_Forward_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Debug_LookAtLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Debug_Hand_Locations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewProp_Debug_Hand_Locations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		Z_Construct_UScriptStruct_FAnimNode_DragonControlBase,
		&NewStructOps,
		"AnimNode_DragonAimSolver",
		sizeof(FAnimNode_DragonAimSolver),
		alignof(FAnimNode_DragonAimSolver),
		Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_DragonAimSolver.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_DragonAimSolver.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_DragonAimSolver.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_AnimNode_DragonAimSolver_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_AnimNode_DragonAimSolver_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_DragonAimSolver::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver_Statics::NewStructOps, TEXT("AnimNode_DragonAimSolver"), &Z_Registration_Info_UScriptStruct_AnimNode_DragonAimSolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_DragonAimSolver), 1749989119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_AnimNode_DragonAimSolver_h_1653077259(TEXT("/Script/DragonIKPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_AnimNode_DragonAimSolver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_AnimNode_DragonAimSolver_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
