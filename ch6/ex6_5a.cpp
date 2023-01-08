#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int ival1 = 2, ival2 = 3;
	
	if(ival1 != ival2)
		ival1 = ival2		//Error: Mission semicolon
	else ival1 = ival2 = 0;
	return 0;
}

