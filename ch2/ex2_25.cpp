#include <iostream>

int main()
{
	int ival = 1.01;
	//int &rval1 = 1.01;
	int &rval2 = ival;
	const int &rval3 = 3;	
	std::cout << ival << " "<< rval2 << " " << rval3 << std::endl;
	// a)	rval2 = 3.14159;	
	//rval2 = rval3;
	//ival = rval3;	
`	rval3 = ival;	
	std::cout << ival << " "<< rval2 << " " << rval3 << std::endl;
	return 0;
}
