#include "Includes.h"

#include "Memory.h"

#include "Globals.h"
#include "Util.h"

#include "Net.h"

#include "Abilities.h"
#include "Inventory.h"

#include "Player.h"
#include "Gamemode.h"

#include "Hooks.h"

#define CONSOLE
// dont use this to profit off your own "project" please, i cant really sue you but like its just weird

DWORD WINAPI Main(LPVOID)
{

#ifdef CONSOLE
    AllocConsole();
    FILE* fptr;
    freopen_s(&fptr, "CONOUT$", "w+", stdout);
#endif

    MH_Initialize();

    Sleep(5000);

    InitGObjects();

    SetConsoleTitleA("9.41 Gameserver by Twin1dev");

    Hooks::StartServer();

    return 0;
}
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, Main, 0, 0, 0);
    }
    return TRUE;
}

