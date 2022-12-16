//@34ZY
//g++ DLL-LOADER.cpp -o DLL-LOADER.exe

#include <windows.h>
#include <iostream>
#include <stdio.h>

using namespace std;
typedef void (*Myfunction)(void);

int main(int argc, char const *argv[])
{
	HINSTANCE hinst;
	Myfunction Hello;
	hinst = LoadLibrary("zbay.dll");
	if (!hinst)
	{
		MessageBox(0, "DLL File not found !", "Error", MB_ICONERROR);
		exit(0);
	}
	Hello = (Myfunction)GetProcAddress(hinst, "Zbay");
	Hello();
	FreeLibrary(hinst);
	printf("OK\n");
	exit(0);

}
