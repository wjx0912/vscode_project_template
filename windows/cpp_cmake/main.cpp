#include <iostream>
#include <swap.h>
#include <test.h>

using namespace std;

int main()
{
	int i = 1, j = 10;
	swap(i, j);
	printf("swap finish.\n");
	cout << i << j << endl;
	test();
	printf("test finish.\n");
	return 0;
}
