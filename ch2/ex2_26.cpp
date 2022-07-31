#include <iostream>

int main()
{
	int ival = 0;
	const int &ri = 0;
	ival = ri;
	ri = ival;
	//std::cout << ival << " "<< rval2 << " " << rval3 << std::endl;
	return 0;
}
