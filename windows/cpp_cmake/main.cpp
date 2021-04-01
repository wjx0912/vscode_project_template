#include <iostream>
#include <swap.h>
#include <test.h>

#include <wchar.h>
#include <stdio.h>

#include <boost/format.hpp>
#include <boost/tokenizer.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/join.hpp>

#include <png.h>
#include <zlib.h>

using namespace std;

int main()
{
	// test boost
	std::vector<std::string> cmdarray;
	boost::split(cmdarray, "aa bb cc", boost::is_any_of(" .,:;"), boost::token_compress_on);
	std::cout << "size: " << cmdarray.size() << std::endl;
	assert(3 == cmdarray.size());

	// test libpng
	char cbHeader[8];
	//png_sig_cmp( (png_const_bytep)cbHeader, 0, 8 );

	// test zlib
	unsigned char src[1024]={0},dst[1024]={0};
	unsigned long srcLen=1024,dstLen;
	//compress(dst,&dstLen,src,srcLen);

	int i = 1, j = 10;
	swap(i, j);
	printf("swap finish.\n");
	cout << i << j << endl;
	test();
	printf("test finish.\n");
	return 0;
}
