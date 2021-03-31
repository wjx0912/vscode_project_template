#include <iostream>
#include <vector>
#include <string>
#include <assert.h>
#include <windows.h>

#include <wchar.h>
#include <stdio.h>

#include <boost/format.hpp>
#include <boost/tokenizer.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/join.hpp>

#include <png.h>
#include <zlib.h>

extern void myfunc();

// https://sourceforge.net/p/mingw-w64/wiki2/Unicode%20apps/
int wmain(int argc, wchar_t** argv)
{
	OutputDebugString(L"hello1.\n");

	std::wstring var = L"hello2.\n";
	OutputDebugString(var.c_str());

	// test boost
	std::vector<std::string> cmdarray;
	boost::split(cmdarray, "aa bb cc", boost::is_any_of(" .,:;"), boost::token_compress_on);
	std::cout << "size: " << cmdarray.size() << std::endl;
	assert(3 == cmdarray.size());

	// test libpng
	char cbHeader[8];
	int is_png = png_sig_cmp( (png_const_bytep)cbHeader, 0, 8 );
	is_png = 0;

	// test zlib
	unsigned char src[1024]={0},dst[1024]={0};
	unsigned long srcLen=1024,dstLen;
	compress(dst,&dstLen,src,srcLen);

	// func at other cpp file
	myfunc();
	return 0;
}
