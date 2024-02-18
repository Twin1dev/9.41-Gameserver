#pragma once

inline UObject* (*StaticFindObject_)(UClass* Class, UObject* Package, const wchar_t* OrigInName, bool ExactClass) = decltype(StaticFindObject_)(__int64(GetModuleHandleW(0)) + 0x21a94f0);
inline UObject* (*StaticLoadObject_)(UClass* Class, UObject* InOuter, const TCHAR* Name, const TCHAR* Filename, uint32_t LoadFlags, UObject* Sandbox, bool bAllowObjectReconciliation) = decltype(StaticLoadObject_)(__int64(GetModuleHandleW(0)) + 0x21aa7d0);
template <typename T>
inline T* StaticFindObject(std::string ObjectPath, UClass* Class = UObject::StaticClass())
{
	return (T*)StaticFindObject_(Class, nullptr, std::wstring(ObjectPath.begin(), ObjectPath.end()).c_str(), false);
}

struct FFrame
{
    char pad[0x10];
    class UFunction* Node;
    UObject* Object;
    uint8* Code;
    uint8* Locals;
};

struct AFortPlayerController_ServerEditBuildingActor_Params
{
public:
	class ABuildingSMActor* BuildingActorToEdit;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABuildingSMActor>          NewBuildingClass;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RotationIterations;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrored;                                         // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2825[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

template <typename T>
inline T* StaticLoadObject(std::string Path, UClass* InClass = T::StaticClass(), UObject* Outer = nullptr)
{
	return (T*)StaticLoadObject_(InClass, Outer, std::wstring(Path.begin(), Path.end()).c_str(), nullptr, 0, nullptr, false);
}