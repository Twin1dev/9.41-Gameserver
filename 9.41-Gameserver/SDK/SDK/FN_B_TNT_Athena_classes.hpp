#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x958 - 0x950)
// BlueprintGeneratedClass B_TNT_Athena.B_TNT_Athena_C
class AB_TNT_Athena_C : public AB_ConsumableSmall_Athena_C
{
public:
	class USplineComponent*                      Spline;                                            // 0x950(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_TNT_Athena_C* GetDefaultObj();

	void Spline_Point_Locations(TArray<struct FVector>* Array, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue_2, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue_3, TArray<struct FVector>& K2Node_MakeArray_Array);
};

}


