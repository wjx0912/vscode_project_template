#include <iostream>
#include <vector>
#include <string>
#include <assert.h>
#include <windows.h>

#include <wchar.h>
#include <stdio.h>

extern void myfunc();

#if 0
// https://sourceforge.net/p/mingw-w64/wiki2/Unicode%20apps/
int wmain(int argc, wchar_t** argv)
{
	OutputDebugString(L"hello1.\n");

	std::wstring var = L"hello2.\n";
	OutputDebugString(var.c_str());

	// func at other cpp file
	myfunc();
	return 0;
}
#else
int main(int argc, char** argv)
{
	// func at other cpp file
	myfunc();
	return 0;
}
#endif
