#include <iostream>

using std::cout;
using std::endl;

int get_value();
int main()
{
	int ival = 0;
	if(ival = 0)	//Error: Assignment opeprator(=) is used instead of comparison operator (==)
		ival = get_value();
	return 0;
}

int get_value()
{
	return 7;
}

