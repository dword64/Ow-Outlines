#include <Windows.h>
#include <iostream>

class Module {
public:
	Module() : hProcess(GetCurrentProcess()), BaseAddress(reinterpret_cast<DWORD64>(GetModuleHandleA("Overwatch.exe"))) {}

	HANDLE hProcess;
	DWORD64 BaseAddress;
};

extern Module* MODULE;