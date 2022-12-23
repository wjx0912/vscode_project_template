#include <iostream>
#include <vector>
#include <string>
#include <assert.h>
#include <windows.h>

#include <wchar.h>
#include <stdio.h>

using namespace std;

// https://sourceforge.net/p/mingw-w64/wiki2/Unicode%20apps/
int wmain(int argc, wchar_t** argv)
{
	OutputDebugString(L"hello1.\n");

	std::wstring var = L"hello2.\n";
	OutputDebugString(var.c_str());

	vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

	for (const string& word : msg)
	{
		cout << word << " ";
	}
	cout << endl;

	return 0;
}
