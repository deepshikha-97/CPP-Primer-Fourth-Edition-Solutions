#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	const size_t rowSize = 3;
	const size_t colSize = 4;
	int ia[rowSize][colSize];
	
	for(size_t i = 0; i != rowSize; ++i)
		for(size_t j = 0; j != colSize; j++)
			ia[i][j] = i * colSize + j;

	typedef int int_array[4];
	int_array *ip = ia;
	
	for(int (*p) [4] = ia; p != ia + 3; ++p)
	{
		for(int *q = *p; q != *p + 4; ++q)
			cout << *q << " " ;
		cout << "\n";
	}
	
	return 0;
}
