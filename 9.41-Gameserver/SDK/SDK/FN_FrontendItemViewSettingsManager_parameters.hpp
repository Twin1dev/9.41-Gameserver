#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x24 - 0x0)
// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.Is Hero or Previews on Hero
struct UFrontendItemViewSettingsManager_C_Is_Hero_or_Previews_on_Hero_Params
{
public:
	class UFortItemDefinition*                   Item_Definition;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E2D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array;                            // 0x10(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	enum class EFortItemType                     CallFunc_GetItemType_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldShowPreviewOnCurrentHero_ReturnValue; // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x231 (0x231 - 0x0)
// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.GetItemViewSettings
struct UFrontendItemViewSettingsManager_C_GetItemViewSettings_Params
{
public:
	enum class EFrontEndCamera                   Camera;                                            // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          GameMode;                                          // 0x1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E56[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortItemViewSettings                 ReturnValue;                                       // 0x10(0x34)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FFortItemViewSettings                 Return_Value;                                      // 0x44(0x34)(Edit, BlueprintVisible, NoDestructor)
	class UAthenaToyItemDefinition*              K2Node_DynamicCast_AsAthena_Toy_Item_Definition;   // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetItemType_ReturnValue;                  // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     CallFunc_GetItemType_ReturnValue_1;                // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     CallFunc_GetTemplateType_ReturnValue;              // 0x83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     CallFunc_GetTemplateType_ReturnValue_1;            // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     CallFunc_GetItemType_ReturnValue_2;                // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue;  // 0x86(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetTemplateType_ReturnValue_2;            // 0x87(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSprayItemDefinition*            K2Node_DynamicCast_AsAthena_Spray_Item_Definition; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue_1; // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E57[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaSkyDiveContrailItemDefinition*  K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition; // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetItemType_ReturnValue_3;                // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetTemplateType_ReturnValue_3;            // 0xA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E59[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaGliderItemDefinition*           K2Node_DynamicCast_AsAthena_Glider_Item_Definition; // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E5A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaPickaxeItemDefinition*          K2Node_DynamicCast_AsAthena_Pickaxe_Item_Definition; // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Vector_IsZero_ReturnValue;                // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Vector_IsZero_ReturnValue_1;              // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue; // 0xC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E5B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFrontEndCamera>           K2Node_MakeArray_Array;                            // 0xC8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E5D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFrontEndCamera>           K2Node_MakeArray_Array_1;                          // 0xE0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E5F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFrontEndCamera>           K2Node_MakeArray_Array_2;                          // 0xF8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue_2;             // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E60[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array_3;                          // 0x110(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue_3;             // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingNewFrontEndCameraManagement_ReturnValue; // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E61[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array_4;                          // 0x128(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue_4;             // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E62[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_MakeLiteralFloat_ReturnValue;             // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRangeBound                      K2Node_MakeStruct_FloatRangeBound;                 // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRangeBound                      K2Node_MakeStruct_FloatRangeBound_1;               // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeLiteralFloat_ReturnValue_1;           // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E63[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array_5;                          // 0x158(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FFloatRangeBound                      K2Node_MakeStruct_FloatRangeBound_2;               // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_5;             // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E64[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatRange                           K2Node_MakeStruct_FloatRange;                      // 0x174(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRangeBound                      K2Node_MakeStruct_FloatRangeBound_3;               // 0x184(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                           K2Node_MakeStruct_FloatRange_1;                    // 0x18C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRangeBound                      K2Node_MakeStruct_FloatRangeBound_4;               // 0x19C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeLiteralFloat_ReturnValue_2;           // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array_6;                          // 0x1A8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FFloatRangeBound                      K2Node_MakeStruct_FloatRangeBound_5;               // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_6;             // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E66[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatRange                           K2Node_MakeStruct_FloatRange_2;                    // 0x1C4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E67[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array_7;                          // 0x1D8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue_7;             // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E68[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array_8;                          // 0x1F0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	float                                        Temp_float_Variable;                               // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_8;             // 0x204(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E6B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array_9;                          // 0x208(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue_9;             // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x21A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E6C[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array_10;                         // 0x220(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue_10;            // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


