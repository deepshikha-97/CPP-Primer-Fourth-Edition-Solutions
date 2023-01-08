#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;


int main()
{
	const int size = 42;	
	int ia[size];
	for(int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr)	{
	}	
	return 0;
}

