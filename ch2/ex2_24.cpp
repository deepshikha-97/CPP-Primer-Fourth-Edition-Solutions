#include <iostream>

int main()
{
	int ival = 1.01;
	//int &rval1 = 1.01;
	int &rval2 = ival;
	const int &rval3 = 1;	
	std::cout << ival << " "<< rval2 << " " << rval3 << std::endl;	
	return 0;
}
