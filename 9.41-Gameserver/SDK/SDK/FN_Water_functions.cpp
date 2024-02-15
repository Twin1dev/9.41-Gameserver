#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Water.WaterSplineComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UWaterSplineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterSplineComponent");

	return Clss;
}


// WaterSplineComponent Water.Default__WaterSplineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterSplineComponent* UWaterSplineComponent::GetDefaultObj()
{
	static class UWaterSplineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterSplineComponent*>(UWaterSplineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterSplineMetadata
// (None)

class UClass* UWaterSplineMetadata::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterSplineMetadata");

	return Clss;
}


// WaterSplineMetadata Water.Default__WaterSplineMetadata
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterSplineMetadata* UWaterSplineMetadata::GetDefaultObj()
{
	static class UWaterSplineMetadata* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterSplineMetadata*>(UWaterSplineMetadata::StaticClass()->DefaultObject);

	return Default;
}

}


